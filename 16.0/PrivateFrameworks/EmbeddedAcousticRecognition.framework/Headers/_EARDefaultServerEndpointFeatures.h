// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARDEFAULTSERVERENDPOINTFEATURES_H
#define _EARDEFAULTSERVERENDPOINTFEATURES_H


#import <Foundation/Foundation.h>


@interface _EARDefaultServerEndpointFeatures : NSObject

@property (nonatomic) float endOfSentenceLikelihood; // ivar: _endOfSentenceLikelihood
@property (nonatomic) float silencePosterior; // ivar: _silencePosterior
@property (nonatomic) NSInteger trailingSilenceDuration; // ivar: _trailingSilenceDuration
@property (nonatomic) NSInteger wordCount; // ivar: _wordCount


-(id)initWithWordCount:(NSInteger)arg0 trailingSilenceDuration:(NSInteger)arg1 endOfSentenceLikelihood:(float)arg2 silencePosterior:(float)arg3 ;


@end


#endif