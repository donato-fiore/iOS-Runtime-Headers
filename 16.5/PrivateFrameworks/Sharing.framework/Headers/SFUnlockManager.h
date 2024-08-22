// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUNLOCKMANAGER_H
#define SFUNLOCKMANAGER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SFUnlockManager : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_stateRequestTimer;
}




+(id)sharedUnlockManager;
-(id)init;
-(id)timerWithBlock:(id)arg0 ;
-(void)cancelStateRequestTimer;
-(void)disableUnlockWithDevice:(id)arg0 ;
-(void)enableUnlockWithDevice:(id)arg0 fromKey:(BOOL)arg1 withPasscode:(id)arg2 completionHandler:(id)arg3 ;
-(void)establishStashBagWithCompletionHandler:(id)arg0 ;
-(void)establishStashBagWithManifest:(id)arg0 completionHandler:(id)arg1 ;
-(void)unlockEnabledWithDevice:(id)arg0 completionHandler:(id)arg1 ;
-(void)unlockStateForDevice:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif