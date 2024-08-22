// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXDRAGENDPOINTVENDOR_H
#define AXDRAGENDPOINTVENDOR_H

@class NSXPCListener, NSMutableSet, NSString;
@protocol NSXPCListenerDelegate, AXDragEndpointRequestSatisfierDelegate, AXDragEndpointVendorDelegate;

#import <Foundation/Foundation.h>


@interface AXDragEndpointVendor : NSObject <NSXPCListenerDelegate, AXDragEndpointRequestSatisfierDelegate>

 {
    NSXPCListener *_listener;
    NSMutableSet *_activeConnections;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXDragEndpointVendorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)endpointForConnection:(id)arg0 forEndpointRequestSatisfier:(id)arg1 ;
-(id)initWithXPCListener:(id)arg0 ;
-(void)endpointRequestSatisfierDidDisconnect:(id)arg0 ;
-(void)resume;


@end


#endif