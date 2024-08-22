// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDASSISTANTCOMMANDEXECUTOR_H
#define HMDASSISTANTCOMMANDEXECUTOR_H

@class HMFMessageDispatcher, NSMutableArray, NSMutableDictionary, NSString, HMFTimer;
@protocol HMFTimerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDAssistantCommand.h"

@interface HMDAssistantCommandExecutor : NSObject <HMFTimerDelegate>

 {
    HMDAssistantCommand *_initialCommand;
    HMFMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_actionResults;
    NSMutableDictionary *_pendingCommands;
    NSString *_clientValidity;
    HMFTimer *_executionTimer;
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)executorWithCommand:(id)arg0 workQueue:(id)arg1 messageDispatcher:(id)arg2 ;
-(id)_command;
-(id)initWithCommand:(id)arg0 workQueue:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)performWithCompletion:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif