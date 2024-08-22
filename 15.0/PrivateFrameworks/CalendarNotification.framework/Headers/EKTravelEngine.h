// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKTRAVELENGINE_H
#define EKTRAVELENGINE_H

@class NSMutableDictionary, CLLocationManager, EKTimedEventStorePurger, NSDate, NSString;
@protocol CLLocationManagerDelegate, OS_dispatch_queue, OS_dispatch_source, CALNRouteHypothesizerProvider;

#import <Foundation/Foundation.h>


@interface EKTravelEngine : NSObject <CLLocationManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_syncYieldTimer;
    BOOL _running;
    BOOL _needsRefresh;
    BOOL _databaseIsEncryptedAndUnreadable;
    BOOL _yieldingToSync;
    NSMutableDictionary *_eventExternalURLsToAgendaEntries;
    CLLocationManager *_locationManager;
    EKTimedEventStorePurger *_timedEventStorePurger;
    NSDate *_lastRefreshDate;
}


@property (copy, nonatomic) id *adviceBlock; // ivar: _adviceBlock
@property (copy, nonatomic) id *authorizationChangedBlock; // ivar: _authorizationChangedBlock
@property (readonly, nonatomic) BOOL authorized;
@property (nonatomic) BOOL authorizedInternal; // ivar: _authorizedInternal
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *eventSignificantlyChangedBlock; // ivar: _eventSignificantlyChangedBlock
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CALNRouteHypothesizerProvider> *routeHypothesizerProvider; // ivar: _routeHypothesizerProvider
@property (readonly) Class superclass;


+(CGFloat)_periodicRefreshInterval;
+(CGFloat)_travelAgendaTimeWindowInterval;
+(CGFloat)requestRefreshTimeInterval;
+(id)requestedDarwinNotifications;
+(id)travelEligibleEvents:(id)arg0 fromStartDate:(id)arg1 untilEndDate:(id)arg2 ;
+(id)travelEligibleEventsInEventStore:(id)arg0 ;
-(BOOL)_isProtectedDataAvailable;
-(BOOL)isLocationManagerStatusAuthorized:(int)arg0 ;
-(id)_eventStore;
-(id)alarmName;
-(id)initWithRouteHypothesizerProvider:(id)arg0 ;
-(void)_calDatabaseChangedNotificationReceived;
-(void)_calSyncClientBeginningMultiSaveNotificationReceived;
-(void)_calSyncClientFinishedMultiSaveNotificationReceived;
-(void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
-(void)_eventKitFeatureSetChanged;
-(void)_installLocationManager;
-(void)_installPeriodicRefreshTimer;
-(void)_installSyncYieldTimer;
-(void)_periodicRefreshTimerFired;
-(void)_refreshIfNeeded;
-(void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)arg0 feedback:(id)arg1 ;
-(void)_significantTimeChangeNotificationReceived;
-(void)_stopInternal;
-(void)_suggestEventLocationsSettingChanged;
-(void)_trimAgendaEntriesBeforeDate:(id)arg0 andAfterDate:(id)arg1 ;
-(void)_uninstallLocationManager;
-(void)_uninstallPeriodicRefreshTimer;
-(void)_uninstallSyncYieldTimer;
-(void)_unregisterAllAgendaEntries;
-(void)_updateDatabaseEncryptionState;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg0 ;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg0 ;
-(void)dealloc;
-(void)handleDarwinNotification:(id)arg0 ;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)receivedAlarmNamed:(id)arg0 ;
-(void)requestHypothesisRefreshAtDate:(id)arg0 forEventWithExternalURL:(id)arg1 ;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg0 ;
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif