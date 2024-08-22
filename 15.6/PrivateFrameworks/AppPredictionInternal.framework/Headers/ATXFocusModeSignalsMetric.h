// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXFOCUSMODESIGNALSMETRIC_H
#define ATXFOCUSMODESIGNALSMETRIC_H

@class ATXCoreAnalyticsMetric, NSString, NSNumber;



@interface ATXFocusModeSignalsMetric : ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (retain, nonatomic) NSNumber *categoryScore; // ivar: _categoryScore
@property (retain, nonatomic) NSNumber *classConditionalProbabilityOfModeGivenEntity; // ivar: _classConditionalProbabilityOfModeGivenEntity
@property (retain, nonatomic) NSNumber *entityModeEntityScore; // ivar: _entityModeEntityScore
@property (nonatomic) NSUInteger focusMode; // ivar: _focusMode
@property (retain, nonatomic) NSNumber *globalOccurrencesOfEntity; // ivar: _globalOccurrencesOfEntity
@property (retain, nonatomic) NSNumber *globalPopularityForEntity; // ivar: _globalPopularityForEntity
@property (retain, nonatomic) NSString *intentHash; // ivar: _intentHash
@property (retain, nonatomic) NSNumber *localOccurrencesOfEntityInMode; // ivar: _localOccurrencesOfEntityInMode
@property (retain, nonatomic) NSNumber *modePopularityForEntity; // ivar: _modePopularityForEntity
@property (retain, nonatomic) NSNumber *posteriorProbabilityOfEntityGivenMode; // ivar: _posteriorProbabilityOfEntityGivenMode
@property (retain, nonatomic) NSNumber *uniqueOccurrencesOfEntityInMode; // ivar: _uniqueOccurrencesOfEntityInMode
@property (nonatomic) BOOL wasAppSuggestedDuringModeSetup; // ivar: _wasAppSuggestedDuringModeSetup
@property (nonatomic) BOOL wasAppSuggestionDuringModeSetupAccepted; // ivar: _wasAppSuggestionDuringModeSetupAccepted
@property (retain, nonatomic) NSString *widgetBundleIdAndKind; // ivar: _widgetBundleIdAndKind
@property (retain, nonatomic) NSString *widgetSize; // ivar: _widgetSize


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif