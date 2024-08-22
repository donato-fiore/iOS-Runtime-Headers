// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFOCUSMODESIGNALSMETRIC_H
#define ATXFOCUSMODESIGNALSMETRIC_H

@class ATXCoreAnalyticsMetric, NSString, NSNumber;



@interface ATXFocusModeSignalsMetric : ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (retain, nonatomic) NSString *activeConfigurationType; // ivar: _activeConfigurationType
@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (retain, nonatomic) NSNumber *categoryScore; // ivar: _categoryScore
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsClearedForEntity; // ivar: _classConditionalOfNotificationsClearedForEntity
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsReceivedForEntity; // ivar: _classConditionalOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *classConditionalProbabilityOfModeGivenEntity; // ivar: _classConditionalProbabilityOfModeGivenEntity
@property (retain, nonatomic) NSNumber *deploymentId; // ivar: _deploymentId
@property (retain, nonatomic) NSNumber *entityModeEntityScore; // ivar: _entityModeEntityScore
@property (nonatomic) BOOL entityOccurredGloballyOverLastNDays; // ivar: _entityOccurredGloballyOverLastNDays
@property (nonatomic) BOOL entityOccurredInModeOverLastNDays; // ivar: _entityOccurredInModeOverLastNDays
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) NSUInteger focusMode; // ivar: _focusMode
@property (retain, nonatomic) NSNumber *globalAppInterruptionsCountByEntity; // ivar: _globalAppInterruptionsCountByEntity
@property (retain, nonatomic) NSNumber *globalClearanceRateForEntity; // ivar: _globalClearanceRateForEntity
@property (retain, nonatomic) NSNumber *globalInterruptingPrior; // ivar: _globalInterruptingPrior
@property (retain, nonatomic) NSNumber *globalModeAffinityPrior; // ivar: _globalModeAffinityPrior
@property (retain, nonatomic) NSNumber *globalOccurrencesOfEntity; // ivar: _globalOccurrencesOfEntity
@property (retain, nonatomic) NSNumber *globalPopularityForEntity; // ivar: _globalPopularityForEntity
@property (retain, nonatomic) NSNumber *globalPopularityOfInterruptingEntity; // ivar: _globalPopularityOfInterruptingEntity
@property (retain, nonatomic) NSNumber *globalPopularityOfNotificationsReceivedForEntity; // ivar: _globalPopularityOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSString *intentHash; // ivar: _intentHash
@property (nonatomic) BOOL isAppCandidateSuggestion; // ivar: _isAppCandidateSuggestion
@property (nonatomic) BOOL isAppRecommendedSuggestion; // ivar: _isAppRecommendedSuggestion
@property (retain, nonatomic) NSNumber *localClearanceRateForEntity; // ivar: _localClearanceRateForEntity
@property (retain, nonatomic) NSNumber *localOccurrencesOfEntityInMode; // ivar: _localOccurrencesOfEntityInMode
@property (retain, nonatomic) NSNumber *localPopularityOfNotificationsReceivedForEntity; // ivar: _localPopularityOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *modeAppInterruptionsClassConditionalProbabilityByEntity; // ivar: _modeAppInterruptionsClassConditionalProbabilityByEntity
@property (retain, nonatomic) NSNumber *modeAppInterruptionsCountByEntity; // ivar: _modeAppInterruptionsCountByEntity
@property (retain, nonatomic) NSNumber *modePopularityForEntity; // ivar: _modePopularityForEntity
@property (retain, nonatomic) NSNumber *modePopularityOfInterruptingEntity; // ivar: _modePopularityOfInterruptingEntity
@property (retain, nonatomic) NSNumber *notificationsClearedGlobally; // ivar: _notificationsClearedGlobally
@property (retain, nonatomic) NSNumber *notificationsClearedInMode; // ivar: _notificationsClearedInMode
@property (retain, nonatomic) NSNumber *notificationsMuted; // ivar: _notificationsMuted
@property (retain, nonatomic) NSNumber *notificationsReceivedGlobally; // ivar: _notificationsReceivedGlobally
@property (retain, nonatomic) NSNumber *notificationsReceivedInMode; // ivar: _notificationsReceivedInMode
@property (retain, nonatomic) NSNumber *posteriorProbabilityOfEntityGivenMode; // ivar: _posteriorProbabilityOfEntityGivenMode
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalNotificationsClearedRateForEntity; // ivar: _ratioOfLocalToGlobalNotificationsClearedRateForEntity
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity; // ivar: _ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *ratioOfModePopularityToGlobalPopularityOfEntity; // ivar: _ratioOfModePopularityToGlobalPopularityOfEntity
@property (retain, nonatomic) NSNumber *ratioOfModePopularityToGlobalPopularityOfInterruptingEntity; // ivar: _ratioOfModePopularityToGlobalPopularityOfInterruptingEntity
@property (retain, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (retain, nonatomic) NSNumber *uniqueOccurrencesOfEntityInMode; // ivar: _uniqueOccurrencesOfEntityInMode
@property (nonatomic) BOOL wasAppSuggestedDuringModeSetup; // ivar: _wasAppSuggestedDuringModeSetup
@property (nonatomic) BOOL wasAppSuggestionDuringModeSetupAccepted; // ivar: _wasAppSuggestionDuringModeSetupAccepted
@property (retain, nonatomic) NSString *widgetBundleIdAndKind; // ivar: _widgetBundleIdAndKind
@property (retain, nonatomic) NSString *widgetSize; // ivar: _widgetSize


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif