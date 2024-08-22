// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODECONFIGURATIONMETRIC_H
#define ATXMODECONFIGURATIONMETRIC_H

@class ATXCoreAnalyticsMetric, NSString, NSNumber;



@interface ATXModeConfigurationMetric : ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *appConfigurationType; // ivar: _appConfigurationType
@property (copy, nonatomic) NSString *contactConfigurationType; // ivar: _contactConfigurationType
@property (retain, nonatomic) NSNumber *deploymentId; // ivar: _deploymentId
@property (nonatomic) BOOL didRemoveSuggestedPage; // ivar: _didRemoveSuggestedPage
@property (nonatomic) BOOL doesImpactAvailability; // ivar: _doesImpactAvailability
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) BOOL hasAppTrigger; // ivar: _hasAppTrigger
@property (nonatomic) BOOL hasAreaTrigger; // ivar: _hasAreaTrigger
@property (nonatomic) BOOL hasCustomHomeScreen; // ivar: _hasCustomHomeScreen
@property (nonatomic) BOOL hasCustomHomeScreenUsedInOtherModes; // ivar: _hasCustomHomeScreenUsedInOtherModes
@property (nonatomic) BOOL hasDrivingTrigger; // ivar: _hasDrivingTrigger
@property (nonatomic) BOOL hasScreenActivityTrigger; // ivar: _hasScreenActivityTrigger
@property (nonatomic) BOOL hasSleepTrigger; // ivar: _hasSleepTrigger
@property (nonatomic) BOOL hasSmartTrigger; // ivar: _hasSmartTrigger
@property (nonatomic) BOOL hasTimeTrigger; // ivar: _hasTimeTrigger
@property (nonatomic) BOOL hasWorkoutTrigger; // ivar: _hasWorkoutTrigger
@property (nonatomic) BOOL isAutomaticallyGenerated; // ivar: _isAutomaticallyGenerated
@property (nonatomic) BOOL isSharingAcrossDevices; // ivar: _isSharingAcrossDevices
@property (nonatomic) BOOL isSleepMigrated; // ivar: _isSleepMigrated
@property (retain, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (retain, nonatomic) NSString *modeSemanticType; // ivar: _modeSemanticType
@property (nonatomic) NSUInteger numAcceptedSuggestedApps; // ivar: _numAcceptedSuggestedApps
@property (nonatomic) NSUInteger numAcceptedSuggestedContacts; // ivar: _numAcceptedSuggestedContacts
@property (nonatomic) NSUInteger numAcceptedSuggestedHomePages; // ivar: _numAcceptedSuggestedHomePages
@property (nonatomic) NSUInteger numAcceptedSuggestedLockScreens; // ivar: _numAcceptedSuggestedLockScreens
@property (nonatomic) NSUInteger numAllowedApps; // ivar: _numAllowedApps
@property (nonatomic) NSUInteger numAllowedContacts; // ivar: _numAllowedContacts
@property (nonatomic) NSUInteger numAppConfigurations; // ivar: _numAppConfigurations
@property (nonatomic) NSUInteger numCustomHomeScreens; // ivar: _numCustomHomeScreens
@property (nonatomic) NSUInteger numDeniedApps; // ivar: _numDeniedApps
@property (nonatomic) NSUInteger numDeniedContacts; // ivar: _numDeniedContacts
@property (nonatomic) NSUInteger numLockScreenPosters; // ivar: _numLockScreenPosters
@property (retain, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (nonatomic) BOOL wasColoringBookSeen; // ivar: _wasColoringBookSeen
@property (nonatomic) BOOL wasQuickStartPlatterShown; // ivar: _wasQuickStartPlatterShown


-(NSUInteger)cappedForPrivacyWithValue:(NSInteger)arg0 ;
-(id)coreAnalyticsDictionary;
-(id)description;
-(id)init;
-(id)metricName;


@end


#endif