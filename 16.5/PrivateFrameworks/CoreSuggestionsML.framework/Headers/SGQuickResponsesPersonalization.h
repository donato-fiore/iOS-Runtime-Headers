// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGQUICKRESPONSESPERSONALIZATION_H
#define SGQUICKRESPONSESPERSONALIZATION_H

@class _PASRng;

#import <Foundation/Foundation.h>

#import "SGQuickResponsesStore.h"

@interface SGQuickResponsesPersonalization : NSObject {
    SGQuickResponsesStore *_store;
    _PASRng *_rng;
}




+(id)augmentRecords:(id)arg0 semanticClass:(NSUInteger)arg1 config:(id)arg2 ;
+(id)deduplicatedReplyTextsForReplyPositions:(id)arg0 semanticClass:(NSUInteger)arg1 responseCount:(NSUInteger)arg2 config:(id)arg3 ;
-(id)init;
-(id)initWithStore:(id)arg0 withRng:(id)arg1 ;
-(id)replyPositionsForSemanticClass:(NSUInteger)arg0 responseCount:(NSUInteger)arg1 config:(id)arg2 ;
-(id)sortedReplyPositionsForSemanticClass:(NSUInteger)arg0 config:(id)arg1 ;
-(void)registerDisplayedResponses:(id)arg0 config:(id)arg1 ;
-(void)registerSelectedResponse:(id)arg0 config:(id)arg1 ;
-(void)registerWrittenResponse:(id)arg0 config:(id)arg1 ;


@end


#endif