// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOANALYTICSPIPELINEMANAGER_H
#define GEOANALYTICSPIPELINEMANAGER_H

@class geo_isolater, NSString;
@protocol GEOAnalyticsPipelineProxy;

#import <Foundation/Foundation.h>


@interface GEOAnalyticsPipelineManager : NSObject <GEOAnalyticsPipelineProxy>

 {
    id<GEOAnalyticsPipelineProxy> *_proxy;
    id *_evDirectionsFeedbackAllowedListener;
    id *_evDirectionsFeedbackAuthListener;
    geo_isolater *_evInfoIsolator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL directionsFeedbackAllowed; // ivar: _directionsFeedbackAllowed
@property (nonatomic) BOOL evDirectionsFeedbackAllowed; // ivar: _evDirectionsFeedbackAllowed
@property (readonly, nonatomic) BOOL evDirectionsFeedbackAuth; // ivar: _evDirectionsFeedbackAuth
@property (readonly, nonatomic) BOOL evalModeEnabled;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
+(void)useProxyClass:(Class)arg0 ;
-(BOOL)AppleInternal;
-(BOOL)PlatformDiagAndUsage;
-(BOOL)PlatformDiagAndUsageOrAppleInternal;
-(BOOL)getEvDirectionsFeedbackAllowed;
-(BOOL)getEvDirectionsFeedbackAuth;
-(id)init;
-(int)functionalAppGroup;
-(void)dealloc;
-(void)flushEvalData;
-(void)logToDiagAndUsageUnderBugId:(id)arg0 filePrefix:(id)arg1 logData:(id)arg2 ;
-(void)processMapsDeletionWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
-(void)reportCuratedCollectionActionType:(NSUInteger)arg0 collectionId:(NSUInteger)arg1 ;
// -(void)reportCuratedCollectionActionType:(NSUInteger)arg0 collectionId:(NSUInteger)arg1 completion:(id)arg2 completionQueue:(unk)arg3  ;
-(void)reportDailySettings:(id)arg0 ;
// -(void)reportDailySettings:(id)arg0 completion:(id)arg1 completionQueue:(unk)arg2  ;
-(void)reportDailyUsageCountType:(int)arg0 ;
-(void)reportDailyUsageCountType:(int)arg0 usageString:(id)arg1 usageBool:(id)arg2 appId:(id)arg3 ;
// -(void)reportDailyUsageCountType:(int)arg0 usageString:(id)arg1 usageBool:(id)arg2 appId:(id)arg3 completion:(id)arg4 completionQueue:(unk)arg5  ;
-(void)reportLogMsg:(id)arg0 uploadBatchId:(NSUInteger)arg1 completionQueue:(id)arg2 completion:(id)arg3 ;
-(void)reportMonthlyUsageCountType:(int)arg0 ;
-(void)reportMonthlyUsageCountType:(int)arg0 usageString:(id)arg1 usageBool:(id)arg2 appId:(id)arg3 ;
// -(void)reportMonthlyUsageCountType:(int)arg0 usageString:(id)arg1 usageBool:(id)arg2 appId:(id)arg3 completion:(id)arg4 completionQueue:(unk)arg5  ;
-(void)reportRRLogMessage:(id)arg0 ;
-(void)runAggregationTasks;
-(void)setEvalMode:(BOOL)arg0 ;
-(void)showEvalDataWithVisitorBlock:(id)arg0 ;
-(void)toggleEVDirectionsFeedbackAllowed;
-(void)updateSharedStateType:(int)arg0 state:(id)arg1 ;
// -(void)updateSharedStateType:(int)arg0 state:(id)arg1 completion:(id)arg2 completionQueue:(unk)arg3  ;


@end


#endif