// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOANALYTICSPIPELINEDAILYSETTINGSOPERATION_H
#define GEOANALYTICSPIPELINEDAILYSETTINGSOPERATION_H



#import "GEOAnalyticsPipelineReportOperation.h"
#import "GEOLogMsgEventPeriodicSettingsSummary.h"

@interface GEOAnalyticsPipelineDailySettingsOperation : GEOAnalyticsPipelineReportOperation {
    GEOLogMsgEventPeriodicSettingsSummary *_settings;
}




-(id)initWithSettings:(id)arg0 remoteProxy:(id)arg1 runQueue:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4 ;
-(void)main;


@end


#endif