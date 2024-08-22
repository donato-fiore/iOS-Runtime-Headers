// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DRTOPICSTATISTICSQUERY_H
#define _DRTOPICSTATISTICSQUERY_H

@class DKQuery, NSPredicate;
@protocol _DKExecutableQuery, OS_dispatch_queue;


#import "_DRTopicInterestSummary.h"

@interface _DRTopicStatisticsQuery : DKQuery <_DKExecutableQuery>

 {
    NSObject<OS_dispatch_queue> *_defaultQueue;
    NSPredicate *_predicate;
}


@property (retain) _DRTopicInterestSummary *summary; // ivar: _summary


+(id)countExpression;
+(id)sumExpression;
+(id)topicStatisticsQuery;
+(id)topicStatisticsQueryWithFilter:(id)arg0 ;
-(id)executeUsingCoreDataStorage:(id)arg0 error:(*id)arg1 ;
-(id)handleResults:(id)arg0 error:(id)arg1 ;
-(id)initWithPredicate:(id)arg0 ;
-(void)clearSummary;


@end


#endif