// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSIRITASKEXECUTION_H
#define AFSIRITASKEXECUTION_H

@class NSXPCListener, NSString;
@protocol AFSiriResponseHandling, NSXPCListenerDelegate, AFSiriRequestFailureHandling, OS_dispatch_queue, AFSiriTaskDelivering;

#import <Foundation/Foundation.h>

#import "AFSiriRequest.h"
#import "AFWatchdogTimer.h"

@interface AFSiriTaskExecution : NSObject <AFSiriResponseHandling, NSXPCListenerDelegate, AFSiriRequestFailureHandling>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AFSiriRequest *_request;
    id<AFSiriTaskDelivering> *_taskDeliverer;
    NSXPCListener *_usageResultListener;
    id *_deliveryHandler;
    id *_completionHandler;
    NSInteger _state;
    id *_keepAliveCycle;
    AFWatchdogTimer *_taskResponseWatchdogTimer;
    NSXPCListener *_taskResponseListener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithRequest:(id)arg0 taskDeliverer:(id)arg1 usageResultListener:(id)arg2 ;
-(void)_completeWithError:(id)arg0 ;
-(void)_completeWithResponse:(id)arg0 ;
-(void)_completeWithResponse:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)handleFailureOfRequest:(id)arg0 error:(id)arg1 atTime:(NSUInteger)arg2 ;
-(void)handleSiriResponse:(id)arg0 atTime:(NSUInteger)arg1 ;
-(void)setCompletionHandler:(id)arg0 ;
-(void)setDeliveryHandler:(id)arg0 ;
-(void)start;


@end


#endif