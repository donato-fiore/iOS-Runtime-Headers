// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDINTENTSPOTLIGHTINDEX_H
#define _CDINTENTSPOTLIGHTINDEX_H

@protocol _DKKnowledgeStorageEventNotificationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_CDSpotlightEventIndexer.h"
#import "_DKKnowledgeStorage.h"

@interface _CDIntentSpotlightIndex : NSObject <_DKKnowledgeStorageEventNotificationDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue; // ivar: _activityQueue
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (nonatomic) BOOL includeAdditions; // ivar: _includeAdditions
@property (readonly, nonatomic) _CDSpotlightEventIndexer *indexer; // ivar: _indexer
@property (readonly, nonatomic) _DKKnowledgeStorage *storage; // ivar: _storage


-(id)initWithKnowledgeStorage:(id)arg0 ;
-(void)dealloc;
-(void)knowledgeStorage:(id)arg0 didInsertLocalEventsWithStreamNameCounts:(id)arg1 ;
-(void)knowledgeStorage:(id)arg0 didTombstoneEventsWithStreamNameCounts:(id)arg1 ;
-(void)triggerIndexIncludingAdditions:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif