// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANALYTICSENGINECORE_H
#define ANALYTICSENGINECORE_H

@class AnalyticsWorkspace, NSMutableDictionary, NSDate;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AnalyticsEngineCore : NSObject {
    AnalyticsWorkspace *workspace;
    NSMutableDictionary *spaces;
    NSObject<OS_dispatch_source> *mem_alerts;
    unsigned int pending_mem_alerts;
    NSDate *lastWorkspaceReset;
    BOOL _enableAdHocDatabaseSave;
}


@property (nonatomic) BOOL isHelper; // ivar: _isHelper
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)handlesEntity:(id)arg0 ;
-(BOOL)predicateFullyAllowsEvaluation:(id)arg0 ;
-(id)entityDictionaryFromObject:(id)arg0 attributeKeys:(id)arg1 relationshipKeys:(id)arg2 includeObjectID:(BOOL)arg3 ;
-(id)extractQueryStringFrom:(id)arg0 isGeneric:(*BOOL)arg1 ;
-(id)getOption:(id)arg0 ;
-(id)initWithWorkspace:(id)arg0 params:(id)arg1 queue:(id)arg2 ;
-(id)safeComparisonPredFrom:(id)arg0 forEntity:(id)arg1 ;
-(id)safeCompoundPredicateFrom:(id)arg0 forEntity:(id)arg1 ;
-(id)safePredFrom:(id)arg0 forEntity:(id)arg1 ;
-(id)setOption:(id)arg0 ;
-(int)performQueryOnEntityFromCache:(id)arg0 pred:(id)arg1 altpred:(*id)arg2 actions:(id)arg3 found:(*id)arg4 ;
-(void)_saveAndUnloadAllState;
-(void)clientEvent:(id)arg0 isAddEvent:(BOOL)arg1 ;
-(void)clientTransactionsRelease;
-(void)createSnapshotFor:(id)arg0 pred:(id)arg1 actions:(id)arg2 reply:(id)arg3 ;
-(void)dealloc;
-(void)inquireNOIFor:(id)arg0 orPredicate:(id)arg1 requestedKeys:(id)arg2 options:(id)arg3 connection:(id)arg4 reply:(id)arg5 ;
-(void)performQueryOnEntity:(id)arg0 fetchRequestProperties:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(id)arg7 ;
-(void)performQueryOnEntity:(id)arg0 pred:(id)arg1 sort:(id)arg2 actions:(id)arg3 service:(id)arg4 connection:(id)arg5 reply:(id)arg6 ;
-(void)performQueryOnEntityCore:(id)arg0 fetchRequestProperties:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 reply:(id)arg6 ;
-(void)performQueryOnEntityCore:(id)arg0 pred:(id)arg1 sort:(id)arg2 actions:(id)arg3 service:(id)arg4 reply:(id)arg5 ;
-(void)performQueryPostProcessing:(id)arg0 actions:(id)arg1 processOutcome:(id)arg2 ;
-(void)resetDataFor:(id)arg0 nameKind:(id)arg1 ;
-(void)shutdown;
-(void)subscribeToNOIsFor:(id)arg0 orPredicate:(id)arg1 options:(id)arg2 connection:(id)arg3 ;
-(void)unsubscribeToNOIs:(id)arg0 connection:(id)arg1 ;


@end


#endif