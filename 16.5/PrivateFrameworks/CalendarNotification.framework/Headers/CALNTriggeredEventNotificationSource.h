// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNTRIGGEREDEVENTNOTIFICATIONSOURCE_H
#define CALNTRIGGEREDEVENTNOTIFICATIONSOURCE_H

@class NSArray, NSString, NSMutableDictionary;
@protocol CALNTriggeredEventNotificationDataSourceDelegate, CALNSnoozeUpdateTimerDelegate, CALNNotificationSource, CALNTriggeredEventNotificationBodyDescriptionProvider, CALNTriggeredEventNotificationDataSource, CalDateProvider, CALNCalendarIconIdentifierProvider, CALNTriggeredEventNotificationMapItemURLProvider, CALNTriggeredEventNotificationDataStorage, CALNNotificationManager, CALNSnoozeUpdateTimer, CALNSourceEventRepresentationProvider, CALNTimeToLeaveRefreshStorage, CALNTriggeredEventNotificationTransitionProvider, CALNTravelAdvisoryTimelinessAuthority, CALNTriggeredEventNotificationTriggerHelper, CALNURLHandler, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CALNTriggeredEventNotificationSource : NSObject <CALNTriggeredEventNotificationDataSourceDelegate, CALNSnoozeUpdateTimerDelegate, CALNNotificationSource>



@property (readonly, nonatomic) NSObject<CALNTriggeredEventNotificationBodyDescriptionProvider> *bodyDescriptionProvider; // ivar: _bodyDescriptionProvider
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSObject<CALNTriggeredEventNotificationDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSObject<CalDateProvider> *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *eventURLToObjectIDMap; // ivar: _eventURLToObjectIDMap
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CALNCalendarIconIdentifierProvider> *iconIdentifierProvider; // ivar: _iconIdentifierProvider
@property (readonly, nonatomic) NSObject<CALNTriggeredEventNotificationMapItemURLProvider> *mapItemURLProvider; // ivar: _mapItemURLProvider
@property (readonly, nonatomic) NSObject<CALNTriggeredEventNotificationDataStorage> *notificationDataStorage; // ivar: _notificationDataStorage
@property (readonly, weak, nonatomic) NSObject<CALNNotificationManager> *notificationManager; // ivar: _notificationManager
@property (readonly, nonatomic) NSObject<CALNSnoozeUpdateTimer> *snoozeUpdateTimer; // ivar: _snoozeUpdateTimer
@property (readonly, nonatomic) NSObject<CALNSourceEventRepresentationProvider> *sourceEventRepresentationProvider; // ivar: _sourceEventRepresentationProvider
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CALNTimeToLeaveRefreshStorage> *timeToLeaveRefreshStorage; // ivar: _timeToLeaveRefreshStorage
@property (readonly, nonatomic) NSObject<CALNTriggeredEventNotificationTransitionProvider> *transitionProvider; // ivar: _transitionProvider
@property (readonly, nonatomic) NSObject<CALNTravelAdvisoryTimelinessAuthority> *travelAdvisoryTimelinessAuthority; // ivar: _travelAdvisoryTimelinessAuthority
@property (readonly, nonatomic) NSObject<CALNTriggeredEventNotificationTriggerHelper> *triggerHelper; // ivar: _triggerHelper
@property (readonly, nonatomic) NSObject<CALNURLHandler> *urlHandler; // ivar: _urlHandler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)_conferenceURLForNotification:(id)arg0 ;
+(id)_mailtoURLForNotification:(id)arg0 ;
+(id)_mapItemURLForNotification:(id)arg0 ;
+(id)_mergeDataFromUnprotectedStore:(id)arg0 withDataInProtectedStore:(id)arg1 ;
+(id)conferenceCallActionIdentifier;
+(id)conferenceURLUserInfoKey;
+(id)directionsActionIdentifier;
+(id)mailOrganizerActionIdentifier;
+(id)mailToURLUserInfoKey;
+(id)mapItemURLUserInfoKey;
+(id)snoozeActionIdentifier;
-(BOOL)_isNotificationMetaDataExpired:(id)arg0 eventID:(id)arg1 ;
-(BOOL)_itemWithEventID:(id)arg0 affectedByChangesToObjects:(id)arg1 ;
-(BOOL)_mayCeaseRouteMonitoringForExistingNotificationData:(id)arg0 ;
-(BOOL)_notificationWithSourceClientIdentifier:(id)arg0 affectedByChangesToObjects:(id)arg1 ;
-(BOOL)_shouldCeaseRouteMonitoringEventForSourceClientIdentifier:(id)arg0 ;
-(BOOL)_shouldRemoveNotificationMetaData:(id)arg0 eventID:(id)arg1 ;
-(BOOL)_shouldRemoveStoredNotificationDataGivenShouldWithdrawNotification:(BOOL)arg0 hasExistingTravelInformation:(BOOL)arg1 mayCeaseRouteMonitoring:(BOOL)arg2 ;
-(BOOL)_shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)arg0 eventID:(id)arg1 ;
-(BOOL)_shouldUpdateStoredNotificationDataGivenTransition:(NSUInteger)arg0 ;
-(BOOL)_sourceClientIdentifier:(id)arg0 matchesEventForSourceClientIdentifier:(id)arg1 ;
-(BOOL)migrateToStorage:(id)arg0 ;
-(BOOL)sourceClientIdentifier:(id)arg0 matchesEventForSourceClientIdentifier:(id)arg1 ;
-(NSUInteger)_calnTravelAdvisoryTimelinessPeriodFromEKTravelAvisoryTimelinessPeriod:(NSUInteger)arg0 ;
-(NSUInteger)_travelAdvisoryTimelinessPeriodForHypothesis:(id)arg0 ;
-(id)_contentForNotificationWithSourceClientIdentifier:(id)arg0 ;
-(id)_contentForNotificationWithSourceClientIdentifier:(id)arg0 shouldClearHypothesis:(BOOL)arg1 ;
-(id)_eventRepresentationDictionaryWithSourceNotificationInfo:(id)arg0 hypothesisMessage:(id)arg1 ;
-(id)_existingNotificationDataMatchingEventForSourceClientIdentifier:(id)arg0 ;
-(id)_existingRecordMatchingEventForSourceClientIdentifier:(id)arg0 ;
-(id)_existingRecordMatchingEventForSourceClientIdentifier:(id)arg0 existingRecords:(id)arg1 ;
-(id)_launchURLForResponse:(id)arg0 ;
-(id)_notificationDataForSourceNotificationInfo:(id)arg0 existingNotificationData:(id)arg1 transition:(NSUInteger)arg2 now:(id)arg3 ;
-(id)_notificationResponseDataForRecord:(id)arg0 ;
-(id)_notificationResponseDataForSourceNotificationInfo:(id)arg0 ;
-(id)_resolvedSourceClientIdentifierForNewSourceClientIdentifier:(id)arg0 oldSourceClientIdentifier:(id)arg1 ;
-(id)_sourceNotificationInfoForSourceClientIdentifier:(id)arg0 notificationInfo:(id)arg1 existingNotificationData:(id)arg2 hypothesis:(id)arg3 shouldClearHypothesis:(BOOL)arg4 isOffsetFromTravelTimeStart:(BOOL)arg5 isForContentCreation:(BOOL)arg6 ;
-(id)_sourceNotificationInfoForSourceClientIdentifier:(id)arg0 shouldClearHypothesis:(BOOL)arg1 isForContentCreation:(BOOL)arg2 ;
-(id)_updatedLastFireTimeOfAlertOffsetFromTravelTimeGivenIsOffsetFromTravelTime:(BOOL)arg0 ;
-(id)_updatedNotificationDataResettingTimeToLeaveDisplayState:(id)arg0 ;
-(id)_updatedSourceNotificationInfoForContentCreation:(id)arg0 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg0 ;
-(id)contentForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 isProtectedDataAvailable:(BOOL)arg2 ;
-(id)initWithDataSource:(id)arg0 notificationManager:(id)arg1 iconIdentifierProvider:(id)arg2 sourceEventRepresentationProvider:(id)arg3 triggerHelper:(id)arg4 transitionProvider:(id)arg5 bodyDescriptionProvider:(id)arg6 travelAdvisoryTimelinessAuthority:(id)arg7 dateProvider:(id)arg8 notificationDataStorage:(id)arg9 urlHandler:(id)arg10 mapItemURLProvider:(id)arg11 timeToLeaveRefreshStorage:(id)arg12 snoozeUpdateTimer:(id)arg13 ;
-(void)_addEventURL:(id)arg0 mappingToEventObjectID:(id)arg1 ;
-(void)_addNotificationData:(id)arg0 forSourceClientIdentifier:(id)arg1 ;
-(void)_addNotificationDataForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 existingNotificationData:(id)arg2 transition:(NSUInteger)arg3 now:(id)arg4 ;
-(void)_addRecord:(id)arg0 sourceNotificationInfo:(id)arg1 existingNotificationData:(id)arg2 trigger:(NSUInteger)arg3 transition:(NSUInteger)arg4 now:(id)arg5 ;
-(void)_clearTravelAdvisoryFromNotificationMetaDataForSourceClientIdentifier:(id)arg0 ;
-(void)_clearTravelAdvisoryHypotheses;
-(void)_commonHandleResponse:(id)arg0 ;
-(void)_didReceiveResponse:(id)arg0 ;
-(void)_handleConferenceCallActionWithResponse:(id)arg0 ;
-(void)_handleDirectionsActionWithResponse:(id)arg0 ;
-(void)_handleMailOrganizerActionWithResponse:(id)arg0 ;
-(void)_notificationAddedWithSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 trigger:(NSUInteger)arg2 ;
-(void)_refreshNotification:(id)arg0 ;
-(void)_refreshNotificationMetaData:(id)arg0 eventID:(id)arg1 ;
-(void)_refreshNotificationMetaDataWithObjectIDs:(id)arg0 ;
-(void)_refreshNotificationRecordsWithObjectIDs:(id)arg0 ;
-(void)_refreshNotifications:(id)arg0 ;
-(void)_refreshTimeToLeaveRefreshTimerWithRefreshDate:(id)arg0 eventID:(id)arg1 ;
-(void)_refreshTimeToLeaveRefreshTimersWithObjectIDs:(id)arg0 ;
-(void)_removeStoredNotificationDataForEventWithEventID:(id)arg0 ;
-(void)_resetStoredNotificationDataTimeToLeaveDisplayStateForSourceClientIdentifier:(id)arg0 ;
-(void)_setNotificationResponseData:(id)arg0 onNotificationContent:(id)arg1 ;
-(void)_travelAdvisoryAuthorizationChanged:(BOOL)arg0 ;
-(void)_travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(id)arg0 ;
-(void)_triggeredWithSourceClientIdentifier:(id)arg0 triggerData:(id)arg1 ;
-(void)_updateNotification:(id)arg0 shouldClearHypothesis:(BOOL)arg1 ;
-(void)_updateSnoozeOptionsForEvents:(id)arg0 ;
-(void)_updateStoredNotificationDataForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 existingNotificationData:(id)arg2 transition:(NSUInteger)arg3 now:(id)arg4 ;
-(void)_updateTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg0 ;
-(void)_updateTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg0 hypothesis:(id)arg1 allowsLocationAlerts:(BOOL)arg2 ;
-(void)dataSource:(id)arg0 travelAdvisoryAuthorizationChanged:(BOOL)arg1 ;
-(void)dataSource:(id)arg0 travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(id)arg1 ;
-(void)dataSource:(id)arg0 triggeredWithSourceClientIdentifier:(id)arg1 triggerData:(id)arg2 ;
-(void)didReceiveResponse:(id)arg0 ;
-(void)refreshNotifications:(id)arg0 ;
-(void)snoozeTimerFiredForEvents:(id)arg0 ;
-(void)updateSnoozeOptionsForPostedNotifications;
-(void)willPostNotification:(id)arg0 ;


@end


#endif