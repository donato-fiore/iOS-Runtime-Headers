// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPSENSITIVEUIMONITOR_H
#define HKSPSENSITIVEUIMONITOR_H

@class NPSManager, NSUserDefaults;

#import <Foundation/Foundation.h>

#import "HKSPObserverSet.h"

@interface HKSPSensitiveUIMonitor : NSObject

@property (nonatomic, getter=isCurrentSensitiveUIHidden) BOOL currentSensitiveUIHidden;
@property (readonly, nonatomic) BOOL hideSensitiveUI; // ivar: _hideSensitiveUI
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) BOOL needPrefsUpdate; // ivar: _needPrefsUpdate
@property (readonly, nonatomic) NPSManager *npsManager; // ivar: _npsManager
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers
@property (readonly, nonatomic) BOOL sensitiveUIOverridden; // ivar: _sensitiveUIOverridden
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)sharedMonitor;
-(BOOL)_isVendorRelease;
-(BOOL)shouldHideForSensitivity:(NSInteger)arg0 ;
-(id)initWithCallbackScheduler:(id)arg0 ;
-(void)_handleNotification;
-(void)_withLock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)overrideHideSensitiveUI:(BOOL)arg0 ;
-(void)registerForNotifications;
-(void)removeObserver:(id)arg0 ;
-(void)unregisterForNotifications;


@end


#endif