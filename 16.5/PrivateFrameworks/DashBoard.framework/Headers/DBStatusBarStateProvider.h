// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSTATUSBARSTATEPROVIDER_H
#define DBSTATUSBARSTATEPROVIDER_H

@class NSString, STBatteryStatusDomainData, STBatteryStatusDomain, STCallingStatusDomainData, STCallingStatusDomain, DNDStateService, NSNumber, STMediaStatusDomainData, STMediaStatusDomain, CRSSiriPreferences, NSHashTable, STTelephonyStatusDomainData, STTelephonyStatusDomain, NSTimer, STWifiStatusDomainData, STWifiStatusDomain;
@protocol CRSSiriPreferencesObserver, DNDStateUpdateListener, UNNotificationSettingsCenterDelegate, BSInvalidatable, DBWorkspaceObserver, UIStatusBarStateProvider, UIStatusBarStyleDelegate_SpringBoardOnly, DBEnvironment;

#import <Foundation/Foundation.h>

#import "DBStatusBarSensorIndicatorView.h"

@interface DBStatusBarStateProvider : NSObject <CRSSiriPreferencesObserver, DNDStateUpdateListener, UNNotificationSettingsCenterDelegate, BSInvalidatable, DBWorkspaceObserver, UIStatusBarStateProvider, UIStatusBarStyleDelegate_SpringBoardOnly>



@property (copy, nonatomic) NSString *activeBundleIdentifier; // ivar: _activeBundleIdentifier
@property (copy, nonatomic) NSString *activeModeSymbolName; // ivar: _activeModeSymbolName
@property (retain, nonatomic) STBatteryStatusDomainData *batteryData; // ivar: _batteryData
@property (retain, nonatomic) STBatteryStatusDomain *batteryDomain; // ivar: _batteryDomain
@property (nonatomic) NSInteger cachedCarPlayAnnounceSetting; // ivar: _cachedCarPlayAnnounceSetting
@property (copy, nonatomic) NSString *cachedTimeString; // ivar: _cachedTimeString
@property (retain, nonatomic) STCallingStatusDomainData *callingData; // ivar: _callingData
@property (retain, nonatomic) STCallingStatusDomain *callingDomain; // ivar: _callingDomain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DNDStateService *dndStateService; // ivar: _dndStateService
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (retain, nonatomic) NSNumber *etcStatus; // ivar: _etcStatus
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inCallServiceActive;
@property (retain, nonatomic) STMediaStatusDomainData *mediaData; // ivar: _mediaData
@property (retain, nonatomic) STMediaStatusDomain *mediaDomain; // ivar: _mediaDomain
@property (copy, nonatomic) NSString *nowRecordingBundleIdentifier; // ivar: _nowRecordingBundleIdentifier
@property (retain, nonatomic) DBStatusBarSensorIndicatorView *sensorIndicatorView; // ivar: _sensorIndicatorView
@property (retain, nonatomic) CRSSiriPreferences *siriPreferences; // ivar: _siriPreferences
@property (retain, nonatomic) NSHashTable *stateObservers; // ivar: _stateObservers
@property (readonly) Class superclass;
@property (copy, nonatomic) STTelephonyStatusDomainData *telephonyData; // ivar: _telephonyData
@property (retain, nonatomic) STTelephonyStatusDomain *telephonyDomain; // ivar: _telephonyDomain
@property (retain, nonatomic) NSTimer *timeUpdateTimer; // ivar: _timeUpdateTimer
@property (retain, nonatomic) STWifiStatusDomainData *wifiData; // ivar: _wifiData
@property (retain, nonatomic) STWifiStatusDomain *wifiDomain; // ivar: _wifiDomain


+(BOOL)_showIndicatorForData:(id)arg0 ;
+(NSInteger)_sensorIndicatorTypeForData:(id)arg0 ;
-(BOOL)_isAnnounceNotificationsEnabledForSystemSettings;
-(BOOL)_radarItemEnabled;
-(BOOL)_radarItemVisible;
-(NSInteger)overriddenRequestedStyleFromStyle:(NSInteger)arg0 ;
-(NSInteger)statusBar:(id)arg0 styleForRequestedStyle:(NSInteger)arg1 overrides:(NSUInteger)arg2 ;
-(NSUInteger)statusBar:(id)arg0 effectiveStyleOverridesForRequestedStyle:(NSInteger)arg1 overrides:(NSUInteger)arg2 ;
-(id)initWithEnvironment:(id)arg0 ;
-(int)_statusBarNetworkTypeForSystemStatusNetworkType:(NSUInteger)arg0 ;
-(struct ? )_generateData;
-(void)_batteryDataUpdatedWithData:(id)arg0 ;
-(void)_callingDataUpdatedWithData:(id)arg0 ;
-(void)_etcChanged:(id)arg0 ;
-(void)_fetchAnnounceNotificationsSetting;
-(void)_focusStatusUpdated:(id)arg0 ;
-(void)_getAnnounceNotificationsData:(struct ? *)arg0 ;
-(void)_getBatteryData:(struct ? *)arg0 ;
-(void)_getETCData:(struct ? *)arg0 ;
-(void)_getFocusData:(struct ? *)arg0 ;
-(void)_getMediaData:(struct ? *)arg0 ;
-(void)_getTTRData:(struct ? *)arg0 ;
-(void)_getTelephonyData:(struct ? *)arg0 ;
-(void)_getTimeData:(struct ? *)arg0 ;
-(void)_localeChanged:(id)arg0 ;
-(void)_mediaDataUpdatedWithData:(id)arg0 ;
-(void)_registerForNotifications;
-(void)_setupSystemStatusDomains;
-(void)_telephonyDataUpdatedWithData:(id)arg0 ;
-(void)_timeZoneChanged:(id)arg0 ;
-(void)_updateETCStateWithSession:(id)arg0 ;
-(void)_wifiDataUpdatedWithData:(id)arg0 ;
-(void)addStatusBarStateObserver:(id)arg0 ;
-(void)getStatusBarData:(struct ? *)arg0 ;
-(void)invalidate;
-(void)preferences:(id)arg0 announceNotificationsInCarPlayTemporarilyDisabledChanged:(BOOL)arg1 ;
-(void)removeStatusBarStateObserver:(id)arg0 ;
-(void)stateService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;
-(void)statusBar:(id)arg0 didAnimateFromHeight:(CGFloat)arg1 toHeight:(CGFloat)arg2 animation:(int)arg3 ;
-(void)statusBar:(id)arg0 willAnimateFromHeight:(CGFloat)arg1 toHeight:(CGFloat)arg2 duration:(CGFloat)arg3 animation:(int)arg4 ;
-(void)updateStatusBarData;
-(void)userNotificationSettingsCenter:(id)arg0 didUpdateNotificationSystemSettings:(id)arg1 ;
-(void)workspace:(id)arg0 stateDidChangeFromState:(id)arg1 toState:(id)arg2 ;


@end


#endif