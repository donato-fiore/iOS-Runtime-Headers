// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIDSERVER_H
#define TRIDSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TRIServerContext.h"
#import "TRITaskQueue.h"
#import "TRIXPCActivityManager.h"

@interface TRIDServer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TRIServerContext *_context;
    TRITaskQueue *_taskQueue;
    TRIXPCActivityManager *_xpcActivityManager;
}


@property (readonly, nonatomic) BOOL isRunning; // ivar: _isRunning


+(id)_triPath;
+(id)sharedServer;
-(BOOL)_shouldContinue;
-(NSUInteger)_getDiskUsageInBytes;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)_asyncStartWithMetrics:(id)arg0 ;
-(void)_dispatchIfUnlocked:(id)arg0 ;
-(void)_logMetrics:(id)arg0 stopwatch:(id)arg1 ;
-(void)_registerSetupAssistantFetchActivityOnce;
-(void)_registerXpcStreamEventHandler;
-(void)_updateSystemInfo;
-(void)start;


@end


#endif