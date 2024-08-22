// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNTRIGGEREDEVENTNOTIFICATIONEKDATASOURCE_H
#define CALNTRIGGEREDEVENTNOTIFICATIONEKDATASOURCE_H

@class NSString;
@protocol CALNTravelEngineDelegate, CALNTimeToLeaveRefreshMonitorDelegate, CALNTriggeredEventNotificationDataSource, CALNAlarmEngineMonitor, CALNDataSourceEventRepresentationProvider, CALNDebugPreferences, CALNTriggeredEventNotificationDataSourceDelegate, EKEventStoreProvider, CALNFoundInAppsEventTracker, CALNRemoteMutator, CALNRouteHypothesizerProvider, CALNSuggestionsServiceLogger, CALNTimeToLeaveRefreshMonitor, CALNTravelEngine, CALNTTLEventTracker;

#import <Foundation/Foundation.h>

#import "CALNCalendarCoreLocationManager.h"
#import "CALNTriggeredEventNotificationMailtoURLProvider.h"

@interface CALNTriggeredEventNotificationEKDataSource : NSObject <CALNTravelEngineDelegate, CALNTimeToLeaveRefreshMonitorDelegate, CALNTriggeredEventNotificationDataSource>



@property (readonly, nonatomic) NSObject<CALNAlarmEngineMonitor> *alarmEngineMonitor; // ivar: _alarmEngineMonitor
@property (readonly, nonatomic) CALNCalendarCoreLocationManager *coreLocationManager; // ivar: _coreLocationManager
@property (readonly, nonatomic) NSObject<CALNDataSourceEventRepresentationProvider> *dataSourceEventRepresentationProvider; // ivar: _dataSourceEventRepresentationProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<CALNDebugPreferences> *debugPreferences; // ivar: _debugPreferences
@property (weak, nonatomic) NSObject<CALNTriggeredEventNotificationDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<EKEventStoreProvider> *eventStoreProvider; // ivar: _eventStoreProvider
@property (readonly, nonatomic) NSObject<CALNFoundInAppsEventTracker> *foundInAppsEventTracker; // ivar: _foundInAppsEventTracker
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CALNTriggeredEventNotificationMailtoURLProvider *mailtoURLProvider; // ivar: _mailtoURLProvider
@property (readonly, nonatomic) NSObject<CALNRemoteMutator> *remoteMutator; // ivar: _remoteMutator
@property (readonly, nonatomic) NSObject<CALNRouteHypothesizerProvider> *routeHypothesizerProvider; // ivar: _routeHypothesizerProvider
@property (readonly, nonatomic) NSObject<CALNSuggestionsServiceLogger> *suggestionsServiceLogger; // ivar: _suggestionsServiceLogger
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CALNTimeToLeaveRefreshMonitor> *timeToLeaveRefreshMonitor; // ivar: _timeToLeaveRefreshMonitor
@property (readonly, nonatomic) NSObject<CALNTravelEngine> *travelEngine; // ivar: _travelEngine
@property (readonly, nonatomic) NSObject<CALNTTLEventTracker> *ttlEventTracker; // ivar: _ttlEventTracker


+(CGFloat)snoozeInterval;
+(id)_alarmDateForAlarm:(id)arg0 eventStartDate:(id)arg1 ;
+(id)_alarmForEvent:(id)arg0 withAlarmID:(id)arg1 ;
+(id)_sourceClientIdentifierForAlertInfo:(id)arg0 ;
-(BOOL)_shouldTriggerForAlertInfo:(id)arg0 ;
-(BOOL)_shouldWithdrawNotificationWithSourceClientIdentifier:(id)arg0 event:(id)arg1 alarmID:(id)arg2 ;
-(BOOL)shouldRemoveNotificationMetaDataWithEventID:(id)arg0 ;
-(BOOL)shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)arg0 eventID:(id)arg1 ;
-(BOOL)shouldWithdrawNotificationWithSourceClientIdentifier:(id)arg0 ;
-(CGFloat)_requestHypothesisRefreshInterval;
-(id)_eventForEventID:(id)arg0 ;
-(id)_eventForSourceClientIdentifier:(id)arg0 ;
-(id)_filterAlerts:(id)arg0 ;
-(id)_notificationExpirationDateForAlarmDate:(id)arg0 eventEndDate:(id)arg1 ;
-(id)_notificationExpirationDateForNullableAlarmDate:(id)arg0 eventEndDate:(id)arg1 ;
-(id)eventObjectIDForEventID:(id)arg0 ;
-(id)fetchTriggeredEventNotificationInfoWithSourceClientIdentifier:(id)arg0 isProtectedDataAvailable:(BOOL)arg1 ;
-(id)initWithEventStoreProvider:(id)arg0 remoteMutator:(id)arg1 dataSourceEventRepresentationProvider:(id)arg2 coreLocationProvider:(id)arg3 ttlEventTracker:(id)arg4 alarmEngineMonitor:(id)arg5 travelEngine:(id)arg6 foundInAppsEventTracker:(id)arg7 suggestionsServiceLogger:(id)arg8 routeHypothesizerProvider:(id)arg9 timeToLeaveRefreshMonitor:(id)arg10 debugPreferences:(id)arg11 mailtoURLProvider:(id)arg12 ;
-(id)notificationExpirationDateForEventID:(id)arg0 alarmID:(id)arg1 ;
-(void)_alertFiredForAlertInfo:(id)arg0 ;
-(void)_alertsFired:(id)arg0 ;
-(void)_didSetUpTimeToLeaveRefreshTimerForEventID:(id)arg0 triggerDate:(id)arg1 ;
-(void)_handleNotificationActionForSourceClientIdentifier:(id)arg0 acknowledgeAlarm:(BOOL)arg1 eventActions:(id)arg2 ;
-(void)acknowledgeEventWithSourceClientIdentifier:(id)arg0 shouldMarkAsHavingReceivedLocation:(BOOL)arg1 ;
-(void)ceaseRouteMonitoringEventForSourceClientIdentifier:(id)arg0 ;
-(void)ceaseRouteMonitoringEventWithEventID:(id)arg0 ;
-(void)didDismissUINotification:(NSUInteger)arg0 forPlannedDestination:(id)arg1 dismissalType:(NSUInteger)arg2 ;
-(void)handleConferenceCallActionWithSourceClientIdentifier:(id)arg0 ;
-(void)handleDirectionsActionWithSourceClientIdentifier:(id)arg0 hypothesis:(id)arg1 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg2 ;
-(void)handleMailOrganizerActionWithSourceClientIdentifier:(id)arg0 hypothesis:(id)arg1 ;
-(void)removeTimeToLeaveRefreshTimerForEventID:(id)arg0 ;
-(void)removeTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg0 ;
-(void)sendFeedbackForAddedLeaveNowNotificationWithSourceClientIdentifier:(id)arg0 ;
-(void)sendFeedbackForAddedTravelAdvisoryNotificationWithSourceClientIdentifier:(id)arg0 hypothesis:(id)arg1 travelAdvisoryTimelinessPeriod:(NSUInteger)arg2 ;
-(void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)arg0 eventID:(id)arg1 ;
-(void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)arg0 sourceClientIdentifier:(id)arg1 ;
-(void)snoozeEventWithSourceClientIdentifier:(id)arg0 snoozeType:(NSUInteger)arg1 ;
-(void)timeToLeaveRefreshMonitor:(id)arg0 refreshTimerFiredForEventExternalURL:(id)arg1 ;
-(void)travelEngine:(id)arg0 authorizationChanged:(BOOL)arg1 ;
-(void)travelEngine:(id)arg0 eventSignificantlyChangedWithEventExternalURL:(id)arg1 ;
-(void)travelEngine:(id)arg0 receivedHypothesis:(id)arg1 eventExternalURL:(id)arg2 ;


@end


#endif