// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWATTENTIONAWARESERVICE_H
#define AWATTENTIONAWARESERVICE_H

@class NSMutableArray, NSString;
@protocol AWAttentionAwareService, AWSchedulerObserver, NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AWScheduler.h"

@interface AWAttentionAwareService : NSObject <AWAttentionAwareService, AWSchedulerObserver, NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AWScheduler *_unitTestScheduler;
    NSMutableArray *_schedulers;
    int _supportedEventsNotify;
    NSUInteger _supportedEvents;
}


@property NSUInteger clientCount; // ivar: _clientCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedAttentionService;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_createUnitTestScheduler;
-(void)addClient:(id)arg0 clientConfig:(id)arg1 clientIndex:(int)arg2 unitTestMode:(BOOL)arg3 reply:(id)arg4 ;
-(void)clientCountChangedFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 forScheduler:(id)arg2 ;
-(void)crashWithReply:(id)arg0 ;
-(void)dealloc;
-(void)getDebugPreferences:(id)arg0 ;
-(void)getSupportedEventsWithReply:(id)arg0 ;
-(void)getUnitTestSamplerWithReply:(id)arg0 ;
-(void)outputPowerLogWithReply:(id)arg0 ;
-(void)processHIDEvent:(struct __IOHIDEvent *)arg0 mask:(NSUInteger)arg1 timestamp:(NSUInteger)arg2 ;
-(void)setDebugPreference:(id)arg0 reply:(id)arg1 ;
-(void)setSmartCoverClosed:(BOOL)arg0 ;


@end


#endif