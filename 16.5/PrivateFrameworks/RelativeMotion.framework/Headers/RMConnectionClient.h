// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMCONNECTIONCLIENT_H
#define RMCONNECTIONCLIENT_H

@class NSString, NSMutableArray;
@protocol RMConnectionLifecycleDelegate, RMConnectionStreamConsumingDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "RMConnectionEndpoint.h"

@interface RMConnectionClient : NSObject <RMConnectionLifecycleDelegate, RMConnectionStreamConsumingDelegate>

 {
    BOOL _valid;
    RMConnectionEndpoint *_endpoint;
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_queue;
    id *_streamingDataCallback;
    id *_messageHandler;
    NSMutableArray *_messageCache;
    NSObject<OS_dispatch_source> *_connectionTimer;
    NSUInteger _connectionTimerDelay;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)endpoint:(id)arg0 didReceiveMessage:(id)arg1 withData:(id)arg2 replyBlock:(id)arg3 ;
-(void)endpoint:(id)arg0 didReceiveStreamedData:(id)arg1 ;
-(void)endpointWasInterrupted:(id)arg0 ;
-(void)endpointWasInvalidated:(id)arg0 ;


@end


#endif