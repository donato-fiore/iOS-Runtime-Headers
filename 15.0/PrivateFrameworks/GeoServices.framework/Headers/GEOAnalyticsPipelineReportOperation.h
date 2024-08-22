// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOANALYTICSPIPELINEREPORTOPERATION_H
#define GEOANALYTICSPIPELINEREPORTOPERATION_H

@class NSOperation;
@protocol OS_dispatch_queue;


#import "GEOAnalyticsPipelineRemoteProxy.h"

@interface GEOAnalyticsPipelineReportOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
    id *_transaction;
    NSObject<OS_dispatch_queue> *_runQueue;
    GEOAnalyticsPipelineRemoteProxy *_remoteProxy;
    NSObject<OS_dispatch_queue> *_completionQueue;
    id *_completionBlock;
}




-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)initWithRemoteProxy:(id)arg0 runQueue:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3 ;
-(void)_completeOperation;
-(void)start;


@end


#endif