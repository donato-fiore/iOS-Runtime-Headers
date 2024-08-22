// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODECONFIGURATIONUIFLOWMETRIC_H
#define ATXMODECONFIGURATIONUIFLOWMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXModeConfigurationUIFlowMetric : ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *modeConfigurationUI; // ivar: _modeConfigurationUI
@property (retain, nonatomic) NSString *modeSemanticType; // ivar: _modeSemanticType
@property (retain, nonatomic) NSString *modeUUID; // ivar: _modeUUID
@property (nonatomic) NSUInteger numAppsAdded; // ivar: _numAppsAdded
@property (nonatomic) NSUInteger numAppsRemoved; // ivar: _numAppsRemoved
@property (nonatomic) NSUInteger numAppsSuggested; // ivar: _numAppsSuggested
@property (nonatomic) NSUInteger numContactsAdded; // ivar: _numContactsAdded
@property (nonatomic) NSUInteger numContactsRemoved; // ivar: _numContactsRemoved
@property (nonatomic) NSUInteger numContactsSuggested; // ivar: _numContactsSuggested
@property (nonatomic) NSUInteger numExistingAllowedApps; // ivar: _numExistingAllowedApps
@property (nonatomic) NSUInteger numExistingAllowedContacts; // ivar: _numExistingAllowedContacts
@property (nonatomic) NSUInteger numSuggestedAppsAdded; // ivar: _numSuggestedAppsAdded
@property (nonatomic) NSUInteger numSuggestedAppsRemoved; // ivar: _numSuggestedAppsRemoved
@property (nonatomic) NSUInteger numSuggestedContactsAdded; // ivar: _numSuggestedContactsAdded
@property (nonatomic) NSUInteger numSuggestedContactsRemoved; // ivar: _numSuggestedContactsRemoved


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif