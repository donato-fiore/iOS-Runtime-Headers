// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUDIOPLAYBACKHOSTINGSERVICE_H
#define AUDIOPLAYBACKHOSTINGSERVICE_H

@class NSXPCListener, NSMutableDictionary, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface AudioPlaybackHostingService : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    NSMutableDictionary *_clients;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSUInteger _connectionIdentifierCounter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<OS_xpc_object> *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)connectionIdentifier:(NSUInteger)arg0 streamTokenDidComplete:(NSUInteger)arg1 ;


@end


#endif