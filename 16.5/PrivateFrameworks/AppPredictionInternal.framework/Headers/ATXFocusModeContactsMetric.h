// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFOCUSMODECONTACTSMETRIC_H
#define ATXFOCUSMODECONTACTSMETRIC_H

@class ATXCoreAnalyticsMetric, NSString, NSNumber;



@interface ATXFocusModeContactsMetric : ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *activeConfigurationType; // ivar: _activeConfigurationType
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsClearedForEntity; // ivar: _classConditionalOfNotificationsClearedForEntity
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsReceivedForEntity; // ivar: _classConditionalOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *classConditionalProbability; // ivar: _classConditionalProbability
@property (nonatomic) BOOL contactEngagedGloballyOverLastNDays; // ivar: _contactEngagedGloballyOverLastNDays
@property (nonatomic) BOOL contactEngagedInModeOverLastNDays; // ivar: _contactEngagedInModeOverLastNDays
@property (nonatomic) BOOL contactIsEmergency; // ivar: _contactIsEmergency
@property (nonatomic) BOOL contactIsFavorite; // ivar: _contactIsFavorite
@property (nonatomic) BOOL contactIsPinned; // ivar: _contactIsPinned
@property (nonatomic) BOOL contactIsVIP; // ivar: _contactIsVIP
@property (nonatomic) BOOL contactIsiCloudFamilyMember; // ivar: _contactIsiCloudFamilyMember
@property (nonatomic) BOOL contactMessageHideAlerts; // ivar: _contactMessageHideAlerts
@property (retain, nonatomic) NSNumber *contactMuted; // ivar: _contactMuted
@property (retain, nonatomic) NSNumber *deploymentId; // ivar: _deploymentId
@property (retain, nonatomic) NSNumber *entityModeEntityScore; // ivar: _entityModeEntityScore
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) NSUInteger focusMode; // ivar: _focusMode
@property (retain, nonatomic) NSNumber *globalNotificationsClearedRateForEntity; // ivar: _globalNotificationsClearedRateForEntity
@property (retain, nonatomic) NSNumber *globalPopularity; // ivar: _globalPopularity
@property (retain, nonatomic) NSNumber *globalPopularityOfNotificationsReceivedForEntity; // ivar: _globalPopularityOfNotificationsReceivedForEntity
@property (nonatomic) BOOL isContactCandidateSuggestion; // ivar: _isContactCandidateSuggestion
@property (nonatomic) BOOL isContactRecommendedSuggestion; // ivar: _isContactRecommendedSuggestion
@property (retain, nonatomic) NSNumber *localNotificationsClearedRateForEntity; // ivar: _localNotificationsClearedRateForEntity
@property (retain, nonatomic) NSNumber *localPopularityOfNotificationsReceivedForEntity; // ivar: _localPopularityOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *modePopularity; // ivar: _modePopularity
@property (retain, nonatomic) NSNumber *notificationsClearedGlobally; // ivar: _notificationsClearedGlobally
@property (retain, nonatomic) NSNumber *notificationsClearedInMode; // ivar: _notificationsClearedInMode
@property (retain, nonatomic) NSNumber *notificationsReceivedGlobally; // ivar: _notificationsReceivedGlobally
@property (retain, nonatomic) NSNumber *notificationsReceivedInMode; // ivar: _notificationsReceivedInMode
@property (retain, nonatomic) NSNumber *posteriorProbability; // ivar: _posteriorProbability
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalNotificationsClearedRateForEntity; // ivar: _ratioOfLocalToGlobalNotificationsClearedRateForEntity
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity; // ivar: _ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *ratioOfModePopularityToGlobalPopularityOfEntity; // ivar: _ratioOfModePopularityToGlobalPopularityOfEntity
@property (retain, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (nonatomic) BOOL wasContactSuggestedDuringModeSetup; // ivar: _wasContactSuggestedDuringModeSetup
@property (nonatomic) BOOL wasContactSuggestionDuringModeSetupAccepted; // ivar: _wasContactSuggestionDuringModeSetupAccepted


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif