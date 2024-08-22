// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGQUICKRESPONSESRANKING_H
#define SGQUICKRESPONSESRANKING_H

@class _PASRng;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesRanking : NSObject {
    _PASRng *_rng;
}




-(id)classResultsForScores:(id)arg0 numResponses:(id)arg1 responseCount:(NSUInteger)arg2 config:(id)arg3 ;
-(id)indexesForScores:(id)arg0 numResponses:(id)arg1 ;
-(id)initWithSeed:(NSUInteger)arg0 ;
-(id)resultsForModelScores:(id)arg0 responseCount:(NSUInteger)arg1 config:(id)arg2 ;
-(id)semanticClassesForCategory:(NSUInteger)arg0 responseCount:(NSUInteger)arg1 configReplies:(id)arg2 ;
-(id)semanticClassesForResults:(id)arg0 scores:(id)arg1 numResponses:(id)arg2 config:(id)arg3 ;


@end


#endif