// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRSCOREDUET_H
#define PRSCOREDUET_H

@class _DKKnowledgeStore, _DKEventStream;

#import <Foundation/Foundation.h>


@interface PRSCoreDuet : NSObject

@property (retain) _DKKnowledgeStore *knowledgeStore; // ivar: _knowledgeStore
@property (retain) _DKEventStream *spotlightStream; // ivar: _spotlightStream


-(id)getRankedCategoriesDictionaryWithPredictionWindow:(CGFloat)arg0 predictionInterval:(CGFloat)arg1 ;
-(id)initWithStreamName:(id)arg0 ;
-(void)addResultCategoryAndGroupToHistory:(id)arg0 groupName:(id)arg1 error:(id)arg2 ;


@end


#endif