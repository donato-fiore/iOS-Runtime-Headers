// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSIRIRESTRICTIONONLOCKSCREENMONITOR_H
#define CSSIRIRESTRICTIONONLOCKSCREENMONITOR_H

@class NSString;
@protocol MCProfileConnectionObserver;


#import "CSEventMonitor.h"

@interface CSSiriRestrictionOnLockScreenMonitor : CSEventMonitor <MCProfileConnectionObserver>

 {
    BOOL _isRestricted;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_checkSiriRestrictedOnLockScreen;
-(BOOL)isRestricted;
-(id)init;
-(void)_didReceiveRestrictionChanged:(BOOL)arg0 ;
-(void)_didReceiveRestrictionChangedInQueue:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withRestricted:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif