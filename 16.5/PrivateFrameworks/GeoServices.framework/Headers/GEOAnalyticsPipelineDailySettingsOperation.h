// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOANALYTICSPIPELINEDAILYSETTINGSOPERATION_H
#define GEOANALYTICSPIPELINEDAILYSETTINGSOPERATION_H



#import "GEOAnalyticsPipelineReportOperation.h"
#import "GEOLogMsgEventPeriodicSettingsSummary.h"

@interface GEOAnalyticsPipelineDailySettingsOperation : GEOAnalyticsPipelineReportOperation {
    GEOLogMsgEventPeriodicSettingsSummary *_settings;
}




-(void)main;


@end


#endif