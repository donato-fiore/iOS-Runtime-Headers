// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODECONFIGURATIONMETRIC_H
#define ATXMODECONFIGURATIONMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXModeConfigurationMetric : ATXCoreAnalyticsMetric

@property (nonatomic) BOOL doesImpactAvailability; // ivar: _doesImpactAvailability
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
@property (retain, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (retain, nonatomic) NSString *modeSemanticType; // ivar: _modeSemanticType
@property (nonatomic) NSUInteger numAllowedApps; // ivar: _numAllowedApps
@property (nonatomic) NSUInteger numAllowedContacts; // ivar: _numAllowedContacts
@property (nonatomic) NSUInteger numCustomHomeScreens; // ivar: _numCustomHomeScreens


-(id)coreAnalyticsDictionary;
-(id)init;
-(id)metricName;


@end


#endif