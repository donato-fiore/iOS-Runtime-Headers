// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSOCIALHIGHLIGHTRANKER_H
#define PPSOCIALHIGHLIGHTRANKER_H

@protocol PPSocialHighlightScorer;

#import <Foundation/Foundation.h>


@interface PPSocialHighlightRanker : NSObject {
    NSObject<PPSocialHighlightScorer> *_firstPassScorer;
    NSObject<PPSocialHighlightScorer> *_topKScorer;
    unsigned int _topKCount;
}




-(id)init;
-(id)initWithFirstPassScorer:(id)arg0 topKScorer:(id)arg1 topKCount:(unsigned int)arg2 ;
-(id)rankSocialHighlights:(id)arg0 client:(id)arg1 performRerank:(BOOL)arg2 ;
-(id)rerankSocialHighlightsForTopOneResult:(id)arg0 client:(id)arg1 ;


@end


#endif