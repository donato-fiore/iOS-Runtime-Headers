// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HSCLOUDAVAILABILITYCONTROLLER_H
#define HSCLOUDAVAILABILITYCONTROLLER_H

@class RadiosPreferences, NSString;
@protocol RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, HSCloudAvailability, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HSCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, HSCloudAvailability>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasProperNetworkConditionsToShowCloudMedia;
    BOOL _isAirplaneModeActive;
    BOOL _isAutoDownloadOnCellularAllowed;
    BOOL _isCellularDataActive;
    BOOL _isCellularDataRestrictedForMusic;
    BOOL _isShowingAllMusic;
    BOOL _isShowingAllVideo;
    BOOL _isUpdateInProgress;
    BOOL _isWiFiEnabled;
    BOOL _isWiFiAssociated;
    BOOL _isNetworkReachable;
    BOOL _canShowCloudMusic;
    BOOL _canShowCloudVideo;
    BOOL _canShowCloudDownloadButtons;
    int _preferencesChangedNotifyToken;
    BOOL _preferencesChangedNotifyTokenIsValid;
    NSInteger _networkType;
    RadiosPreferences *_radiosPreferences;
    NSUInteger _networkReachabilityObservationCount;
    *__CTServerConnection _ctServerConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedController;
-(BOOL)_hasCellularCapability;
-(BOOL)_hasWiFiCapability;
-(BOOL)_isAutoDownloadOnCellularAllowed;
-(BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
-(BOOL)_uncachedIsShowingAllMusic;
-(BOOL)_uncachedIsShowingAllVideo;
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)canShowCloudMusic;
-(BOOL)canShowCloudVideo;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)isCellularDataRestricted;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)isNetworkReachable;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(id)init;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_onQueue_beginObservingReachabilityChanges;
-(void)_onQueue_endObservingReachabilityChanges;
-(void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)arg0 ;
-(void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)arg0 ;
-(void)_onQueue_updateIsCellularDataRestrictedForMusic;
-(void)_setNewIsNetworkReachable:(BOOL)arg0 networkType:(NSInteger)arg1 ;
-(void)_wifiStateDidChangeNotification:(id)arg0 ;
-(void)airplaneModeChanged;
-(void)beginObservingNetworkReachability;
-(void)dealloc;
-(void)endObservingNetworkReachability;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;
-(void)environmentMonitorDidChangeNetworkType:(id)arg0 ;


@end


#endif