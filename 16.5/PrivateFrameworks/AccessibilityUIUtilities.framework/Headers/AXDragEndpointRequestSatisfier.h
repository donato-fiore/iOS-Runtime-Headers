// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXDRAGENDPOINTREQUESTSATISFIER_H
#define AXDRAGENDPOINTREQUESTSATISFIER_H

@class NSXPCConnection, NSString;
@protocol AXEndpointVending, AXDragEndpointRequestSatisfierDelegate;

#import <Foundation/Foundation.h>


@interface AXDragEndpointRequestSatisfier : NSObject <AXEndpointVending>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXDragEndpointRequestSatisfierDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(void)requestDragEndpoint:(id)arg0 ;


@end


#endif