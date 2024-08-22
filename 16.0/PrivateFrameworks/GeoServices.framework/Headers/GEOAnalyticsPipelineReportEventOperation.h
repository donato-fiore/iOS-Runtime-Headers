// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOANALYTICSPIPELINEREPORTEVENTOPERATION_H
#define GEOANALYTICSPIPELINEREPORTEVENTOPERATION_H

@class NSData;


#import "GEOAnalyticsPipelineReportOperation.h"

@interface GEOAnalyticsPipelineReportEventOperation : GEOAnalyticsPipelineReportOperation {
    NSUInteger _uploadBatchId;
    NSData *_logMsg;
}




-(id)initWithLogMsg:(id)arg0 uploadBatchId:(NSUInteger)arg1 remoteProxy:(id)arg2 runQueue:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5 ;
-(void)main;


@end


#endif