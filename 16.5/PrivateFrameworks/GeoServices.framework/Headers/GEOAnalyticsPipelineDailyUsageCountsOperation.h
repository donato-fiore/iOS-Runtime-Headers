// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOANALYTICSPIPELINEDAILYUSAGECOUNTSOPERATION_H
#define GEOANALYTICSPIPELINEDAILYUSAGECOUNTSOPERATION_H

@class NSString, NSNumber;


#import "GEOAnalyticsPipelineReportOperation.h"

@interface GEOAnalyticsPipelineDailyUsageCountsOperation : GEOAnalyticsPipelineReportOperation {
    int _countType;
    NSString *_usageString;
    NSNumber *_usageBool;
    NSString *_appId;
}




-(void)main;


@end


#endif