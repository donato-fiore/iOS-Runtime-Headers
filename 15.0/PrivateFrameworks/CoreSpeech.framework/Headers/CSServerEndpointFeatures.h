// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSERVERENDPOINTFEATURES_H
#define CSSERVERENDPOINTFEATURES_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CSServerEndpointFeatures : NSObject

@property (nonatomic) CGFloat eosLikelihood; // ivar: _eosLikelihood
@property (copy, nonatomic) NSArray *pauseCounts; // ivar: _pauseCounts
@property (nonatomic) NSInteger processedAudioDurationInMilliseconds; // ivar: _processedAudioDurationInMilliseconds
@property (nonatomic) CGFloat silencePosterior; // ivar: _silencePosterior
@property (copy, nonatomic) NSString *taskName; // ivar: _taskName
@property (nonatomic) NSInteger trailingSilenceDuration; // ivar: _trailingSilenceDuration
@property (nonatomic) NSInteger wordCount; // ivar: _wordCount


-(id)description;
-(id)dictionary;
-(id)initWithWordCount:(NSInteger)arg0 trailingSilenceDuration:(NSInteger)arg1 eosLikelihood:(CGFloat)arg2 pauseCounts:(id)arg3 silencePosterior:(CGFloat)arg4 taskName:(id)arg5 processedAudioDurationInMilliseconds:(NSInteger)arg6 ;
-(id)initWithWordCount:(NSInteger)arg0 trailingSilenceFrames:(NSInteger)arg1 endOfSilenceLikelihood:(CGFloat)arg2 pauseCounts:(id)arg3 silencePosterior:(CGFloat)arg4 taskName:(id)arg5 ;


@end


#endif