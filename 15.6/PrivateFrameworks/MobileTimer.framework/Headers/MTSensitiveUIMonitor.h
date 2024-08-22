// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSENSITIVEUIMONITOR_H
#define MTSENSITIVEUIMONITOR_H


#import <Foundation/Foundation.h>

#import "MTObserverStore.h"

@interface MTSensitiveUIMonitor : NSObject

@property (nonatomic) BOOL hideSensitiveUI; // ivar: _hideSensitiveUI
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (nonatomic) BOOL needPrefsUpdate; // ivar: _needPrefsUpdate
@property (nonatomic) int notifyToken; // ivar: _notifyToken
@property (retain, nonatomic) MTObserverStore *observers; // ivar: _observers


+(id)sharedMonitor;
-(BOOL)_isVendorRelease;
-(BOOL)shouldHideForSensitivity:(NSInteger)arg0 ;
-(id)init;
-(void)_handleNotification;
-(void)_withLock:(id)arg0 ;
-(void)addSensitiveUIObserver:(id)arg0 ;
-(void)dealloc;
-(void)registerForNotifications;
-(void)removeSensitiveUIObserver:(id)arg0 ;
-(void)unregisterForNotifications;


@end


#endif