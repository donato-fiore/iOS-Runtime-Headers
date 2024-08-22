// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXTIMELINERELEVANCEMETRICHARVESTER_H
#define ATXTIMELINERELEVANCEMETRICHARVESTER_H

@class ATXInformationStore, NSUserDefaults, NSDate;

#import <Foundation/Foundation.h>

#import "ATXTimelineAbuseControlConfig.h"

@interface ATXTimelineRelevanceMetricHarvester : NSObject {
    ATXInformationStore *_informationStore;
    NSUserDefaults *_defaults;
    NSDate *_loggingStartDate;
    ATXTimelineAbuseControlConfig *_abuseControlConfig;
}




+(CGFloat)roundNumber:(id)arg0 toSignificantFigures:(NSUInteger)arg1 ;
+(int)PBClientModelFromString:(id)arg0 ;
+(int)PBTimelineEntrySuggestionMappingReasonFrom:(NSInteger)arg0 ;
+(int)PBTimelineRelevanceAbuseControlOutcomeTypeFrom:(NSInteger)arg0 ;
+(int)PBTimelineRelevanceEngagementFromATXStackRotationEngagementStatus:(NSUInteger)arg0 ;
+(int)PBTimelineRelevanceRotationEventTypeFromReason:(id)arg0 ;
+(int)PBWidgetFamilyFromCHSWidgetFamily:(NSInteger)arg0 ;
-(BOOL)_shouldLogHomeScreenEvent:(id)arg0 widgetBundleId:(id)arg1 appBundleId:(id)arg2 widgetKind:(id)arg3 widgetFamily:(NSInteger)arg4 ;
-(BOOL)_shouldProcessEvent:(id)arg0 ;
-(BOOL)addTimelineRelevanceScoresToTimelineRelevanceContainer:(id)arg0 forWidget:(id)arg1 withDistributionsLogged:(NSUInteger)arg2 updatingDictionary:(id)arg3 anonymizeTimestampsRelativeTo:(CGFloat)arg4 ;
-(BOOL)isFirstParty:(id)arg0 ;
-(id)_timeBasedMergePublisher:(id)arg0 withOtherPublishers:(id)arg1 ;
-(id)fetchStackConfigSummaryForWidgetBundleId:(id)arg0 appBundleId:(id)arg1 widgetKind:(id)arg2 widgetSize:(NSInteger)arg3 withPBTimelineRelevanceContainer:(id)arg4 anonymizeTimestampsRelativeTo:(CGFloat)arg5 ;
-(id)init;
-(id)initWithInformationStore:(id)arg0 ;
-(id)timeOfLatestMetricsSubmission;
-(id)widgetsForDataCollection:(id)arg0 ;
-(void)_addAbuseControlOutcomesForSuggestionId:(id)arg0 withPBTimelineRelevanceSuggestion:(id)arg1 anonymizeTimestampsRelativeTo:(CGFloat)arg2 ;
-(void)_addRotationHistoryForWidgetBundleId:(id)arg0 appBundleId:(id)arg1 widgetKind:(id)arg2 widgetSize:(NSInteger)arg3 withPBTimelineRelevanceContainer:(id)arg4 anonymizeTimestampsRelativeTo:(CGFloat)arg5 ;
-(void)_updateMetricsSubmissionDateTo:(id)arg0 ;
-(void)_updateTimelineEntriesDictionaryWithEntries:(id)arg0 withKey:(id)arg1 withScoreEntry:(id)arg2 ;
-(void)addFeatureVectorToTimelineRelevanceContainer:(id)arg0 ;
-(void)addRotationsToContainer:(id)arg0 withStackRotationSesssion:(id)arg1 anonymizeTimestampsRelativeTo:(CGFloat)arg2 ;
-(void)addStackConfigSummaryToTimelineRelevanceContainer:(id)arg0 withStackConfigSummary:(id)arg1 ;
-(void)addTimelineRelevanceSuggestionsToContainer:(id)arg0 withTimelineEntries:(id)arg1 anonymizeTimestampsRelativeTo:(CGFloat)arg2 ;
-(void)harvestWithActivity:(id)arg0 ;


@end


#endif