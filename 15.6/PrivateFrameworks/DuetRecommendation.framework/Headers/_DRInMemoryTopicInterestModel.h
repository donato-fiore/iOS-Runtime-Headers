// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DRINMEMORYTOPICINTERESTMODEL_H
#define _DRINMEMORYTOPICINTERESTMODEL_H

@class NSMutableArray;
@protocol _DRTopicInterestModeling, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_DRTopicInterestSummary.h"

@interface _DRInMemoryTopicInterestModel : NSObject <_DRTopicInterestModeling>

 {
    NSMutableArray *_topics;
    _DRTopicInterestSummary *_summary;
    NSObject<OS_dispatch_queue> *_syncQueue;
}




+(id)predicateForTopicInteractionsAfter:(id)arg0 ;
+(id)predicateForTopicInteractionsBefore:(id)arg0 ;
+(id)predicateForTopicsWithPrefix:(id)arg0 ;
-(id)computeSummaryWithFilter:(id)arg0 ;
-(id)init;
-(void)enumerateTopicCountsWithFilter:(id)arg0 block:(id)arg1 ;
-(void)purgeEntriesEarlierThanDate:(id)arg0 ;
-(void)purgeEntriesWithPrefix:(id)arg0 earlierThanDate:(id)arg1 ;
-(void)recordPresentationOfTopics:(id)arg0 onDate:(id)arg1 ;
-(void)recordSelectionOfTopics:(id)arg0 onDate:(id)arg1 ;


@end


#endif