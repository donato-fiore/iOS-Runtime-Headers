// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXDRAGENDPOINTCLIENT_H
#define AXDRAGENDPOINTCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface AXDragEndpointClient : NSObject {
    NSXPCConnection *_connection;
}




+(BOOL)isValidServiceName:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(void)dealloc;
-(void)getDragEndpoint:(id)arg0 ;


@end


#endif