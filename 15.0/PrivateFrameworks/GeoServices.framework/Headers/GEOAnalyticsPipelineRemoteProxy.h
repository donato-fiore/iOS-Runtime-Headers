// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOANALYTICSPIPELINEREMOTEPROXY_H
#define GEOANALYTICSPIPELINEREMOTEPROXY_H

@class NSOperationQueue, geo_isolater, NSString;
@protocol GEOAnalyticsPipelineProxy;

#import <Foundation/Foundation.h>


@interface GEOAnalyticsPipelineRemoteProxy : NSObject <GEOAnalyticsPipelineProxy>

 {
    NSOperationQueue *_opQueue;
    NSUInteger _maxOpCount;
    NSUInteger _droppedLogMsgCount;
    geo_isolater *_enqueueLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_enqueueOperation:(id)arg0 ;
// -(void)_reportCuratedCollectionActionType:(NSUInteger)arg0 collectionId:(NSUInteger)arg1 completion:(id)arg2 completionQueue:(unk)arg3  ;
// -(void)_reportDailySettings:(id)arg0 completion:(id)arg1 completionQueue:(unk)arg2  ;
// -(void)_reportDailyUsageCountType:(int)arg0 usageString:(id)arg1 usageBool:(id)arg2 appId:(id)arg3 completion:(id)arg4 completionQueue:(unk)arg5  ;
// -(void)_reportLogMsg:(id)arg0 uploadBatchId:(NSUInteger)arg1 completion:(id)arg2 completionQueue:(unk)arg3  ;
-(void)flushEvalData;
-(void)processMapsDeletionWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
// -(void)reportCuratedCollectionActionType:(NSUInteger)arg0 collectionId:(NSUInteger)arg1 completion:(id)arg2 completionQueue:(unk)arg3  ;
// -(void)reportDailySettings:(id)arg0 completion:(id)arg1 completionQueue:(unk)arg2  ;
// -(void)reportDailyUsageCountType:(int)arg0 usageString:(id)arg1 usageBool:(id)arg2 appId:(id)arg3 completion:(id)arg4 completionQueue:(unk)arg5  ;
-(void)reportLogMsg:(id)arg0 uploadBatchId:(NSUInteger)arg1 completionQueue:(id)arg2 completion:(id)arg3 ;
-(void)reportRRLogMessage:(id)arg0 ;
-(void)runAggregationTasks;
-(void)setEvalMode:(BOOL)arg0 ;
-(void)showEvalDataWithVisitorBlock:(id)arg0 ;


@end


#endif