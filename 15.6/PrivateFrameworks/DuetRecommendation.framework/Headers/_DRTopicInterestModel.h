// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DRTOPICINTERESTMODEL_H
#define _DRTOPICINTERESTMODEL_H

@class _DKKnowledgeStorage;
@protocol _DRTopicInterestModeling, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _DRTopicInterestModel : NSObject <_DRTopicInterestModeling>



@property (retain) _DKKnowledgeStorage *storage; // ivar: _storage
@property (retain) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue


+(id)newsStorageDirectory;
+(id)predicateForTopicInteractionsAfter:(id)arg0 ;
+(id)predicateForTopicInteractionsBefore:(id)arg0 ;
+(id)predicateForTopicsWithPrefix:(id)arg0 ;
+(id)topicActionCategoryType;
+(id)topicPresentedCategory;
+(id)topicSelectedCategory;
-(id)computeSummaryWithFilter:(id)arg0 ;
-(id)init;
-(id)initWithStorageDirectory:(id)arg0 ;
-(id)initWithStorageDirectory:(id)arg0 localOnly:(BOOL)arg1 ;
-(void)enumerateTopicCountsWithFilter:(id)arg0 block:(id)arg1 ;
-(void)purgeEntriesEarlierThanDate:(id)arg0 ;
-(void)purgeEntriesWithPrefix:(id)arg0 earlierThanDate:(id)arg1 ;
-(void)recordPresentationOfTopics:(id)arg0 onDate:(id)arg1 ;
-(void)recordSelectionOfTopics:(id)arg0 onDate:(id)arg1 ;


@end


#endif