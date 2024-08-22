// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCOMMANDQUEUE_H
#define FCCOMMANDQUEUE_H

@class NSString, NSMutableArray;
@protocol FCNetworkReachabilityObserving, FCAppActivityObserving, FCCommandDelegate, FCCommandQueueDelegate, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "FCCloudContext.h"
#import "FCKeyValueStore.h"

@interface FCCommandQueue : NSObject <FCNetworkReachabilityObserving, FCAppActivityObserving, FCCommandDelegate>

 {
    BOOL _suspended;
    BOOL _executingCommand;
    FCCloudContext *_context;
    NSString *_persistentStorePath;
    NSString *_name;
    FCKeyValueStore *_persistentStore;
    NSInteger _urgency;
    id<FCCommandQueueDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_pendingCommands;
    NSObject<OS_dispatch_source> *_cooldownTimer;
    NSObject<OS_dispatch_group> *_pendingCommandsGroup;
    NSObject<OS_dispatch_group> *_executingCommandsGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 storeDirectory:(id)arg1 storeFilename:(id)arg2 urgency:(NSInteger)arg3 suspended:(BOOL)arg4 delegate:(id)arg5 ;
-(id)initWithContext:(id)arg0 urgency:(NSInteger)arg1 suspended:(BOOL)arg2 delegate:(id)arg3 ;
-(void)activityObservingApplicationDidEnterBackground;
-(void)addCommand:(id)arg0 ;
-(void)addCommand:(id)arg0 saveCompletion:(id)arg1 ;
-(void)clear;
-(void)command:(id)arg0 didFinishWithStatus:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)flushWithCompletionHandler:(id)arg0 ;
-(void)networkReachabilityDidChange:(id)arg0 ;
-(void)resume;


@end


#endif