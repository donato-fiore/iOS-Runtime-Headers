// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXTIMELINEABUSECONTROLCONFIG_H
#define ATXTIMELINEABUSECONTROLCONFIG_H

@class NSDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "ATXTimelineRelevancePersonalizedConfig.h"

@interface ATXTimelineAbuseControlConfig : NSObject {
    NSDictionary *_config;
    ATXTimelineRelevancePersonalizedConfig *_personalizedConfig;
}


@property (readonly, nonatomic) NSUInteger defaultDurationForFallbackTimelineSuggestions; // ivar: _defaultDurationForFallbackTimelineSuggestions
@property (readonly, nonatomic) NSUInteger defaultDurationForTimelineSuggestions; // ivar: _defaultDurationForTimelineSuggestions
@property (readonly, nonatomic) NSInteger defaultDurationLimit; // ivar: _defaultDurationLimit
@property (readonly, nonatomic) NSInteger defaultDurationLimitForDiverseSchemas; // ivar: _defaultDurationLimitForDiverseSchemas
@property (readonly, nonatomic) NSInteger defaultDurationLimitForLikelyDiverseSchemas; // ivar: _defaultDurationLimitForLikelyDiverseSchemas
@property (readonly, nonatomic) NSInteger defaultDurationLimitForSingleScoreSchemas; // ivar: _defaultDurationLimitForSingleScoreSchemas
@property (readonly, nonatomic) NSInteger defaultHardRotationQuota; // ivar: _defaultHardRotationQuota
@property (nonatomic) NSInteger defaultHardRotationQuotaForDiverseSchemas; // ivar: _defaultHardRotationQuotaForDiverseSchemas
@property (readonly, nonatomic) NSInteger defaultHardRotationQuotaForLikelyDiverseSchemas; // ivar: _defaultHardRotationQuotaForLikelyDiverseSchemas
@property (readonly, nonatomic) NSInteger defaultHardRotationQuotaForSingleScoreSchemas; // ivar: _defaultHardRotationQuotaForSingleScoreSchemas
@property (readonly, nonatomic) NSInteger defaultSoftRotationQuota; // ivar: _defaultSoftRotationQuota
@property (nonatomic) NSInteger defaultSoftRotationQuotaForDiverseSchemas; // ivar: _defaultSoftRotationQuotaForDiverseSchemas
@property (readonly, nonatomic) NSInteger defaultSoftRotationQuotaForLikelyDiverseSchemas; // ivar: _defaultSoftRotationQuotaForLikelyDiverseSchemas
@property (readonly, nonatomic) NSInteger defaultSoftRotationQuotaForSingleScoreSchemas; // ivar: _defaultSoftRotationQuotaForSingleScoreSchemas
@property (readonly, nonatomic) NSArray *denyList; // ivar: _denyList
@property (readonly, nonatomic) NSUInteger minimumSecondsBetweenMetadataUpdatesPerSource; // ivar: _minimumSecondsBetweenMetadataUpdatesPerSource
@property (retain, nonatomic) NSString *timelineRelevanceABGroup; // ivar: _timelineRelevanceABGroup
@property (readonly, nonatomic) NSUInteger timelineUpdateLimitPerAppBundleId; // ivar: _timelineUpdateLimitPerAppBundleId
@property (readonly, nonatomic) NSUInteger timelineUpdateLimitPerSource; // ivar: _timelineUpdateLimitPerSource
@property (retain, nonatomic) NSArray *widgetsExcludedFromPersonalizedQuotaUpdate; // ivar: _widgetsExcludedFromPersonalizedQuotaUpdate


-(BOOL)randomizationDisabledForWidgetWithIdentifier:(id)arg0 kind:(id)arg1 ;
-(BOOL)shouldUsePersonalizedBudgets;
-(BOOL)stalenessDisabledForWidgetWithIdentifier:(id)arg0 kind:(id)arg1 ;
-(CGFloat)coolDownIntervalForWidgetWithIdentifier:(id)arg0 kind:(id)arg1 ;
-(CGFloat)durationLimitForWidgetWithIdentifier:(id)arg0 kind:(id)arg1 ;
-(NSInteger)hardRotationQuotaForWidgetWithIdentifier:(id)arg0 kind:(id)arg1 ;
-(NSInteger)resolvedValueForConfigWithKey:(id)arg0 forWidgetWithIdentifier:(id)arg1 kind:(id)arg2 ;
-(NSInteger)softRotationQuotaForWidgetWithIdentifier:(id)arg0 kind:(id)arg1 ;
-(id)init;


@end


#endif