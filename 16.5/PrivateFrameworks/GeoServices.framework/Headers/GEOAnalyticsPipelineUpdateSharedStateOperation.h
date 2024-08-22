// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOANALYTICSPIPELINEUPDATESHAREDSTATEOPERATION_H
#define GEOANALYTICSPIPELINEUPDATESHAREDSTATEOPERATION_H



#import "GEOAnalyticsPipelineReportOperation.h"
#import "GEOLogMsgState.h"

@interface GEOAnalyticsPipelineUpdateSharedStateOperation : GEOAnalyticsPipelineReportOperation {
    int _stateType;
    GEOLogMsgState *_state;
}




-(void)main;


@end


#endif