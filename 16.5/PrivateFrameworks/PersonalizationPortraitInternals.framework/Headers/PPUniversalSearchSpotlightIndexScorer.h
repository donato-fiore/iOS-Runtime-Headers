// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPUNIVERSALSEARCHSPOTLIGHTINDEXSCORER_H
#define PPUNIVERSALSEARCHSPOTLIGHTINDEXSCORER_H

@class _PASLazyPurgeableResult;

#import <Foundation/Foundation.h>


@interface PPUniversalSearchSpotlightIndexScorer : NSObject {
    _PASLazyPurgeableResult *_cachedPortraitTopicScores;
}




-(CGFloat)computeSpotlightIndexScoreFromPortraitExtractions:(id)arg0 ;
-(CGFloat)computeSpotlightIndexTopicScoreComponentFromDocumentTopicVector:(id)arg0 ;
-(CGFloat)computeSpotlightIndexTopicSubscoreFromPortraitExtractions:(id)arg0 ;
-(id)initWithLocalTopicStore:(id)arg0 ;
-(id)topicAlgorithmWeights;


@end


#endif