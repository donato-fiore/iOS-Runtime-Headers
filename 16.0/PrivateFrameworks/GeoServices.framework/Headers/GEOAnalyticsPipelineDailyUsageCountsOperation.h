// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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




-(id)initWithDailyUsageCountType:(int)arg0 usageString:(id)arg1 usageBool:(id)arg2 appId:(id)arg3 remoteProxy:(id)arg4 runQueue:(id)arg5 completionQueue:(id)arg6 completionBlock:(id)arg7 ;
-(void)main;


@end


#endif