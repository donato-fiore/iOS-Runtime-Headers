// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBANALYTICS_H
#define DBANALYTICS_H

@class CWFInterface, NSMutableArray, NSOperationQueue, NSDate, NSString, FBSDisplayLayoutMonitor, CARAutomaticDNDStatus, NSMutableDictionary, CRSSiriPreferences, NSDictionary;
@protocol CARSessionCommandObserving, CRSSiriPreferencesObserver, DBKeybagMonitorObserver, DBNowPlayingDelegate, DBThermalMonitorObserver, BSInvalidatable, DBDashboardStateObserver, DBEnvironmentConfigurationObserving;

#import <Foundation/Foundation.h>

#import "_DBAnalyticsChargeInfo.h"
#import "DBEnvironmentConfiguration.h"
#import "DBKeybagMonitor.h"
#import "DBNowPlayingObserver.h"
#import "DBThermalMonitor.h"

@interface DBAnalytics : NSObject <CARSessionCommandObserving, CRSSiriPreferencesObserver, DBKeybagMonitorObserver, DBNowPlayingDelegate, DBThermalMonitorObserver, BSInvalidatable, DBDashboardStateObserver, DBEnvironmentConfigurationObserving>

 {
    *__WiFiManagerClient _wifiManager;
    CWFInterface *_interface;
    unsigned int _powerSource;
    *IONotificationPort _powerNotificationPort;
    unsigned int _powerSourceNotification;
}


@property (nonatomic) BOOL accessorySupportsLocation; // ivar: _accessorySupportsLocation
@property (nonatomic) BOOL accessorySupportsLocationChinaShifted; // ivar: _accessorySupportsLocationChinaShifted
@property (nonatomic) BOOL accessorySupportsLocationDeadReckoning; // ivar: _accessorySupportsLocationDeadReckoning
@property (nonatomic) BOOL accessorySupportsLocationGPGGA; // ivar: _accessorySupportsLocationGPGGA
@property (nonatomic) BOOL accessorySupportsLocationGPRMC; // ivar: _accessorySupportsLocationGPRMC
@property (nonatomic) BOOL accessorySupportsLocationPASCDSpeed; // ivar: _accessorySupportsLocationPASCDSpeed
@property (retain, nonatomic) NSMutableArray *analyticsAppInfo; // ivar: _analyticsAppInfo
@property (retain, nonatomic) _DBAnalyticsChargeInfo *analyticsChargeInfo; // ivar: _analyticsChargeInfo
@property (retain, nonatomic) NSOperationQueue *analyticsQueue; // ivar: _analyticsQueue
@property (retain, nonatomic) NSMutableArray *analyticsScreenInfo; // ivar: _analyticsScreenInfo
@property (nonatomic) NSInteger announceEnablementType; // ivar: _announceEnablementType
@property (nonatomic) BOOL announceMuted; // ivar: _announceMuted
@property (retain, nonatomic) NSDate *audioOwnershipDate; // ivar: _audioOwnershipDate
@property (nonatomic) CGFloat audioOwnershipDuration; // ivar: _audioOwnershipDuration
@property (weak, nonatomic) DBEnvironmentConfiguration *configuration; // ivar: _configuration
@property (nonatomic) NSInteger currentThermalLevel; // ivar: _currentThermalLevel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor; // ivar: _displayLayoutMonitor
@property (retain, nonatomic) CARAutomaticDNDStatus *dndStatus; // ivar: _dndStatus
@property (weak, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DBKeybagMonitor *keybagMonitor; // ivar: _keybagMonitor
@property (copy, nonatomic) NSString *lastActiveBundleIdentifier; // ivar: _lastActiveBundleIdentifier
@property (copy, nonatomic) NSString *lastDashboardAudioWidgetBundleIdentifier; // ivar: _lastDashboardAudioWidgetBundleIdentifier
@property (copy, nonatomic) NSString *lastDashboardNavigationBundleIdentifier; // ivar: _lastDashboardNavigationBundleIdentifier
@property (nonatomic) NSUInteger lastHomeScreenPageType; // ivar: _lastHomeScreenPageType
@property (nonatomic) NSInteger mapsAppearanceStyle; // ivar: _mapsAppearanceStyle
@property (retain, nonatomic) NSDate *mediaserverdDiedDate; // ivar: _mediaserverdDiedDate
@property (retain, nonatomic) DBNowPlayingObserver *nowPlayingObserver; // ivar: _nowPlayingObserver
@property (retain, nonatomic) NSDate *screenOwnershipDate; // ivar: _screenOwnershipDate
@property (nonatomic) CGFloat screenOwnershipDuration; // ivar: _screenOwnershipDuration
@property (retain, nonatomic) NSMutableDictionary *sessionAppLaunches; // ivar: _sessionAppLaunches
@property (retain, nonatomic) NSMutableDictionary *sessionDeviceAppLaunches; // ivar: _sessionDeviceAppLaunches
@property (retain, nonatomic) NSMutableDictionary *sessionNavigationOwners; // ivar: _sessionNavigationOwners
@property (nonatomic) NSUInteger sessionRequestUIBundleIdentifierCount; // ivar: _sessionRequestUIBundleIdentifierCount
@property (nonatomic) NSUInteger sessionRequestUIMapsCount; // ivar: _sessionRequestUIMapsCount
@property (nonatomic) NSUInteger sessionRequestUIMessagesCount; // ivar: _sessionRequestUIMessagesCount
@property (nonatomic) NSUInteger sessionRequestUIMusicCount; // ivar: _sessionRequestUIMusicCount
@property (nonatomic) NSUInteger sessionRequestUIPhoneCount; // ivar: _sessionRequestUIPhoneCount
@property (nonatomic) NSUInteger sessionShowUIMapCount; // ivar: _sessionShowUIMapCount
@property (nonatomic) NSUInteger sessionShowUITurnCardCount; // ivar: _sessionShowUITurnCardCount
@property (retain, nonatomic) NSDate *sessionStartDate; // ivar: _sessionStartDate
@property (nonatomic) BOOL sessionStartedEventSent; // ivar: _sessionStartedEventSent
@property (nonatomic) NSUInteger sessionUnlockCount; // ivar: _sessionUnlockCount
@property (copy, nonatomic) NSString *siriHostedBundleIdentifier; // ivar: _siriHostedBundleIdentifier
@property (retain, nonatomic) CRSSiriPreferences *siriPreferences; // ivar: _siriPreferences
@property (copy, nonatomic) NSString *startBundleIdentifier; // ivar: _startBundleIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) DBThermalMonitor *thermalMonitor; // ivar: _thermalMonitor
@property (retain, nonatomic) NSDate *thermalTrapDate; // ivar: _thermalTrapDate
@property (copy, nonatomic) NSDictionary *vehicleAnalyticsRepresentation; // ivar: _vehicleAnalyticsRepresentation
@property (retain, nonatomic) NSDate *wifiLinkDownDate; // ivar: _wifiLinkDownDate
@property (retain, nonatomic) NSString *wifiLinkDownReason; // ivar: _wifiLinkDownReason
@property (retain, nonatomic) NSDate *wifidDiedDate; // ivar: _wifidDiedDate


+(BOOL)shouldSendAnalyticsEvents;
+(void)biome_CarPlayStarted:(BOOL)arg0 wireless:(BOOL)arg1 ;
-(BOOL)_isAnnounceMuted;
-(BOOL)_queue_stateProviderIsReadyForAnalytics:(id)arg0 ;
-(id)_analyticsInfoPassingTest:(id)arg0 ;
-(id)appAnalyticsInfoForApp:(id)arg0 ;
-(id)appAnalyticsInfoForBundleIdentifier:(id)arg0 ;
-(id)dictionaryFromInterrupt;
-(id)initWithEnvironmentConfiguration:(id)arg0 ;
-(id)nowPlayingAppAnalyticsInfo;
-(id)stringFromInterruptDictionary:(id)arg0 ;
-(id)stringFromSessionSummary;
-(id)visibleAppsAnalyticsInfo;
-(id)visibleDashboardAppsAnalyticsInfo;
-(void)_DBLayoutMonitor:(id)arg0 didUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;
-(void)_appStartedNavigation:(id)arg0 ;
-(void)_applicationDidLaunch:(id)arg0 ;
-(void)_carHasMainAudio:(id)arg0 ;
-(void)_dashboardNowPlayingWidgetTapped:(id)arg0 ;
-(void)_dashboardSmartWidgetUpdated:(id)arg0 ;
-(void)_iosHasMainAudio:(id)arg0 ;
-(void)_mediaserverdConnectionDied;
-(void)_queue_deviceDidChangeToBundleIdentifier:(id)arg0 ;
-(void)_queue_didChangeToBundleIdentifier:(id)arg0 ;
-(void)_queue_fetchLocationBits;
-(void)_queue_mediaserverdConnectionDied;
-(void)_queue_nowPlayingUpdatedToApp:(id)arg0 isPlaying:(BOOL)arg1 ;
-(void)_queue_powerStateDidChange;
-(void)_queue_screenViewAreaChanged:(id)arg0 screenInfo:(id)arg1 configuration:(id)arg2 duration:(CGFloat)arg3 ;
-(void)_queue_sendAnnounceMessagesEventWithEnablementType:(NSInteger)arg0 disabled:(BOOL)arg1 ;
-(void)_queue_sessionEnded;
-(void)_queue_sessionStarted;
-(void)_queue_thermalTrapOccurred;
-(void)_queue_wifidConnectionDied;
-(void)_screenBecameAvailable:(id)arg0 ;
-(void)_screenBecameUnavailable:(id)arg0 ;
-(void)applySessionStartedStorage:(id)arg0 ;
-(void)dashboardAudioWidgetDidChangeToBundleIdentifier:(id)arg0 ;
-(void)dashboardNavigationDidChangeToBundleIdentifier:(id)arg0 ;
-(void)dashboardStateProvider:(id)arg0 didChangeActiveBundleIdentifier:(id)arg1 ;
-(void)dashboardStateProvider:(id)arg0 didChangeConnectionReady:(BOOL)arg1 ;
-(void)dashboardStateProvider:(id)arg0 didChangeHomeScreenPageType:(NSUInteger)arg1 ;
-(void)dashboardStateProvider:(id)arg0 didChangeLockoutState:(NSUInteger)arg1 ;
-(void)environmentConfigurationPairedVehiclesDidChange:(id)arg0 ;
-(void)invalidate;
-(void)keybagMonitorLockStateDidChange:(id)arg0 ;
-(void)nowPlayingObserver:(id)arg0 didChangeNowPlayingApplication:(id)arg1 ;
-(void)nowPlayingObserver:(id)arg0 didUpdatePlaybackState:(BOOL)arg1 inApplication:(id)arg2 ;
-(void)preferences:(id)arg0 announceNotificationsInCarPlayTemporarilyDisabledChanged:(BOOL)arg1 ;
-(void)preferences:(id)arg0 carPlayAnnounceEnablementTypeChanged:(NSInteger)arg1 ;
-(void)sendEvent:(NSUInteger)arg0 withParameters:(id)arg1 ;
-(void)session:(id)arg0 didSetViewArea:(id)arg1 forScreenID:(id)arg2 withDuration:(CGFloat)arg3 transitionControlType:(NSUInteger)arg4 ;
-(void)session:(id)arg0 openURL:(id)arg1 ;
-(void)session:(id)arg0 showUIForScreenInfo:(id)arg1 withURL:(id)arg2 ;
-(void)siriDidDismiss;
-(void)siriDidPresent;
-(void)siriDidStartHostingBundleIdentifier:(id)arg0 ;
-(void)thermalMonitorLevelDidChange:(id)arg0 ;
-(void)userPressedTransitionControl;


@end


#endif