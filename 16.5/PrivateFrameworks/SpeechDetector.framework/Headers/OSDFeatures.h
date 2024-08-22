// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSDFEATURES_H
#define OSDFEATURES_H


#import <Foundation/Foundation.h>


@interface OSDFeatures : NSObject

@property (readonly, nonatomic) NSUInteger inferenceTime; // ivar: _inferenceTime
@property (readonly, nonatomic) CGFloat processedAudioMs; // ivar: _processedAudioMs
@property (readonly, nonatomic) CGFloat silenceDurationMs; // ivar: _silenceDurationMs
@property (readonly, nonatomic) CGFloat silenceFramesCountMs; // ivar: _silenceFramesCountMs
@property (readonly, nonatomic) CGFloat silenceProbability; // ivar: _silenceProbability


-(id)description;
-(id)initWithSilenceFramesCountMs:(CGFloat)arg0 silenceProbability:(CGFloat)arg1 silenceDurationMs:(CGFloat)arg2 processedAudioMs:(CGFloat)arg3 ;
-(id)initWithSilenceFramesCountMs:(CGFloat)arg0 silenceProbability:(CGFloat)arg1 silenceDurationMs:(CGFloat)arg2 processedAudioMs:(CGFloat)arg3 inferenceTime:(NSUInteger)arg4 ;


@end


#endif