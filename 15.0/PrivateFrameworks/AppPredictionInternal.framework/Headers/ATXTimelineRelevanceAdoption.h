// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXTIMELINERELEVANCEADOPTION_H
#define ATXTIMELINERELEVANCEADOPTION_H

@class NSDictionary, ATXInformationStore;

#import <Foundation/Foundation.h>

#import "ATXTimelineAbuseControlConfig.h"
#import "ATXAdoptionTypeToBudgetMapper.h"

@interface ATXTimelineRelevanceAdoption : NSObject {
    NSDictionary *_globalAdoptionPlist;
    ATXInformationStore *_informationStore;
    NSDictionary *_distinctScoreCounts;
    ATXTimelineAbuseControlConfig *_abuseControlConfig;
    ATXAdoptionTypeToBudgetMapper *_budgetMapper;
}




-(BOOL)_hasDiverseSchemaGlobally:(id)arg0 kind:(id)arg1 ;
-(NSUInteger)adoptionTypeForWidgetBundleId:(id)arg0 kind:(id)arg1 ;
-(id)globalDiverseSchemaRawNumber:(id)arg0 kind:(id)arg1 ;
-(id)init;
-(id)initWithGlobalAdoptionPlist:(id)arg0 informationStore:(id)arg1 abuseControlConfig:(id)arg2 ;
-(void)_updateQuotasDictionary:(id)arg0 forWidgetBundleId:(id)arg1 widgetKind:(id)arg2 parameterName:(id)arg3 withValue:(NSInteger)arg4 ;
-(void)_updateQuotasForWidgetBundleId:(id)arg0 widgetKind:(id)arg1 quotasDictionary:(id)arg2 ;
-(void)persistQuotasWithActivity:(id)arg0 ;
-(void)trainWidgetPredictionModelWithActivity:(id)arg0 ;


@end


#endif