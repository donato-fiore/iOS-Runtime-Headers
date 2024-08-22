// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUKEYBAGINTERFACE_H
#define SUKEYBAGINTERFACE_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUKeybagInterface : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;
    BOOL _queue_hasPasscodeSet;
    BOOL _queue_isPasscodeLocked;
    NSHashTable *_queue_observers;
    int _stateChangedNotifyToken;
}


@property (readonly, nonatomic) BOOL hasPasscodeSet;
@property (readonly, nonatomic) BOOL isPasscodeLocked;


+(id)sharedInstance;
-(BOOL)_queue_hasPasscodeSetFromLockState:(int)arg0 ;
-(BOOL)_queue_isPasscodeLockedFromLockState:(int)arg0 ;
-(BOOL)createInstallationKeybagForDescriptor:(id)arg0 withSecret:(id)arg1 forUnattendedInstall:(BOOL)arg2 ;
-(BOOL)disableKeybagStash;
-(BOOL)hadFirstUnlock;
-(BOOL)persistKeybagStash;
-(id)_init;
-(id)createPreventLockAssertionWithDuration:(CGFloat)arg0 ;
-(id)init;
-(id)stringForStashMode:(int)arg0 ;
-(int)_queue_fetchKeybagState;
-(int)installationKeybagStateForDescriptor:(id)arg0 ;
-(void)_queue_refreshState;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif