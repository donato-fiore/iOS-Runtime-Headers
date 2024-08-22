// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DRTOPICENUMERATIONQUERY_H
#define _DRTOPICENUMERATIONQUERY_H

@class DKQuery, NSPredicate;
@protocol _DKExecutableQuery, OS_dispatch_queue;



@interface _DRTopicEnumerationQuery : DKQuery <_DKExecutableQuery>

 {
    NSObject<OS_dispatch_queue> *_defaultQueue;
}


@property NSUInteger limit; // ivar: _limit
@property (retain) NSPredicate *predicate; // ivar: _predicate
@property (copy) id *topicEnumerator; // ivar: _topicEnumerator


+(id)enumerationCountExpresion;
+(id)enumerationSumExpression;
+(id)topicEnumerationQueryWithPredicate:(id)arg0 topicEnumerator:(id)arg1 ;
-(id)executeUsingCoreDataStorage:(id)arg0 error:(*id)arg1 ;
-(id)handleResults:(id)arg0 error:(id)arg1 ;
-(id)initWithPredicate:(id)arg0 topicEnumerator:(id)arg1 ;


@end


#endif