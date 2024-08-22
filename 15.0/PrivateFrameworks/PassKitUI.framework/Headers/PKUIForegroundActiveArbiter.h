// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKUIFOREGROUNDACTIVEARBITER_H
#define PKUIFOREGROUNDACTIVEARBITER_H

@class NSHashTable, NSString;
@protocol PKForegroundActiveArbiter, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface PKUIForegroundActiveArbiter : NSObject <PKForegroundActiveArbiter>

 {
    BOOL _foreground;
    BOOL _enteringForeground;
    BOOL _enteringForegroundExpired;
    BOOL _active;
    ? _foregroundActiveState;
    unsigned int _deactivationReasons;
    NSHashTable *_observers;
    NSHashTable *_deactivationObservers;
    NSUInteger _backgroundTaskIdentifier;
    NSObject<OS_dispatch_source> *_enteringForegroundTimeout;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isBackgroundedForReasons:(unsigned int)arg0 ;
+(BOOL)isDeactivedForReasons:(unsigned int)arg0 ;
+(id)sharedInstance;
-(id)_init;
-(id)init;
-(struct ? )registerObserver:(id)arg0 ;
-(unsigned int)registerDeactivationObserver:(id)arg0 ;
-(void)_beginEnteringForegroundTimer;
-(void)_didRemoveDeactivationReasonNotification:(id)arg0 ;
-(void)_updateForegroundActiveWithEnteringForegroundPolicy:(NSInteger)arg0 ;
-(void)_willAddDeactivationReasonNotification:(id)arg0 ;
-(void)dealloc;
-(void)didBecomeActive;
-(void)didEnterBackground;
-(void)unregisterDeactivationObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)willEnterForegroundPostlude;
-(void)willEnterForegroundPrelude;
-(void)willResignActive;
-(void)willTerminate;


@end


#endif