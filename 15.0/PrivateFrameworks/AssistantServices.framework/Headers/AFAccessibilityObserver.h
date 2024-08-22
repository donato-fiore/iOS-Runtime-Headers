// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFACCESSIBILITYOBSERVER_H
#define AFACCESSIBILITYOBSERVER_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFAccessibilityState.h"

@interface AFAccessibilityObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _stateLock;
    AFAccessibilityState *_state;
    NSUInteger _stateDirtyFlags;
    NSHashTable *_listeners;
}


@property (readonly, copy, nonatomic) AFAccessibilityState *state;


+(id)sharedObserver;
-(BOOL)_fetchIsVibrationDisabled;
-(BOOL)_fetchIsVoiceOverTouchEnabled;
-(id)currentState;
-(id)init;
-(void)_updateVibrationDisabledPreference;
-(void)_updateVoiceOverTouchEnabledPreference;
-(void)addListener:(id)arg0 ;
-(void)getStateWithCompletion:(id)arg0 ;
-(void)removeListener:(id)arg0 ;
-(void)vibrationDisabledPreferenceDidChange:(id)arg0 ;
-(void)voiceOverTouchEnabledPreferenceDidChange:(id)arg0 ;


@end


#endif