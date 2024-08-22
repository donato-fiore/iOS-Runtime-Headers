// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARENDPOINTFEATURES_H
#define _EARENDPOINTFEATURES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _EAREndpointFeatures : NSObject

@property (nonatomic) CGFloat clientSilenceFramesCountMs; // ivar: _clientSilenceFramesCountMs
@property (nonatomic) CGFloat clientSilenceProbability; // ivar: _clientSilenceProbability
@property (nonatomic) NSInteger eagerResultEndTime; // ivar: _eagerResultEndTime
@property (nonatomic) CGFloat endOfSentenceLikelihood; // ivar: _endOfSentenceLikelihood
@property (copy, nonatomic) NSArray *pauseCounts; // ivar: _pauseCounts
@property (nonatomic) float serverFeaturesLatency; // ivar: _serverFeaturesLatency
@property (nonatomic) CGFloat silencePosterior; // ivar: _silencePosterior
@property (nonatomic) float silencePosteriorNF; // ivar: _silencePosteriorNF
@property (nonatomic) NSInteger trailingSilenceDuration; // ivar: _trailingSilenceDuration
@property (nonatomic) NSInteger wordCount; // ivar: _wordCount


-(id)description;
-(id)initWithWordCount:(NSInteger)arg0 trailingSilenceDuration:(NSInteger)arg1 endOfSentenceLikelihood:(CGFloat)arg2 pauseCounts:(id)arg3 silencePosterior:(CGFloat)arg4 clientSilenceFramesCountMs:(CGFloat)arg5 clientSilenceProbability:(CGFloat)arg6 silencePosteriorNF:(float)arg7 serverFeaturesLatency:(float)arg8 ;
-(id)initWithWordCount:(NSInteger)arg0 trailingSilenceDuration:(NSInteger)arg1 endOfSentenceLikelihood:(CGFloat)arg2 pauseCounts:(id)arg3 silencePosterior:(CGFloat)arg4 clientSilenceFramesCountMs:(CGFloat)arg5 clientSilenceProbability:(CGFloat)arg6 silencePosteriorNF:(float)arg7 serverFeaturesLatency:(float)arg8 eagerResultEndTime:(NSInteger)arg9 ;


@end


#endif