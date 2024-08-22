// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCBUDDYFLOWOBSERVER_H
#define BRCBUDDYFLOWOBSERVER_H

@class NSMutableDictionary, NSOperationQueue;

#import <Foundation/Foundation.h>


@interface BRCBuddyFlowObserver : NSObject {
    BOOL _waitingForBuddy;
    NSMutableDictionary *_registerdKeyToToken;
    NSOperationQueue *_observersQueue;
}




+(id)sharedBuddyFlowObserver;
-(BOOL)doesBuddyFlowNeedsToRun;
// -(BOOL)observeBuddyIfNecessaryWithKey:(id)arg0 block:(id)arg1 description:(unk)arg2  ;
-(id)_init;
-(void)_registerForBYSetupAssistantFinishedNotification;
-(void)_stopObservingBuddyAndExecuteCallbacks;
-(void)_unregisterForBYSetupAssistantFinishedNotification;
-(void)stopObservingBuddyWithKey:(id)arg0 ;


@end


#endif