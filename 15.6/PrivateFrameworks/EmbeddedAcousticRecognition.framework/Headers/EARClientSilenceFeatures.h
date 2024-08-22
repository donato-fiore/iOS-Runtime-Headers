// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EARCLIENTSILENCEFEATURES_H
#define EARCLIENTSILENCEFEATURES_H


#import <Foundation/Foundation.h>


@interface EARClientSilenceFeatures : NSObject

@property (nonatomic) CGFloat processedAudioMs; // ivar: _processedAudioMs
@property (nonatomic) CGFloat silenceDurationMs; // ivar: _silenceDurationMs
@property (nonatomic) CGFloat silenceFramesCountMs; // ivar: _silenceFramesCountMs
@property (nonatomic) CGFloat silencePosterior; // ivar: _silencePosterior
@property (nonatomic) CGFloat silenceProbability; // ivar: _silenceProbability


-(id)initWithSilenceFramesCountMs:(CGFloat)arg0 silenceProbability:(CGFloat)arg1 silenceDurationMs:(CGFloat)arg2 silencePosterior:(CGFloat)arg3 processedAudioMs:(CGFloat)arg4 ;


@end


#endif