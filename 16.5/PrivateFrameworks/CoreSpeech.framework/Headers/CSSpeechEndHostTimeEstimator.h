// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSPEECHENDHOSTTIMEESTIMATOR_H
#define CSSPEECHENDHOSTTIMEESTIMATOR_H


#import <Foundation/Foundation.h>


@interface CSSpeechEndHostTimeEstimator : NSObject

@property (nonatomic) BOOL endPointNotified; // ivar: _endPointNotified
@property (nonatomic) NSUInteger lastAudioChunkHostTime; // ivar: _lastAudioChunkHostTime
@property (nonatomic) NSUInteger numAudioSampleForwarded; // ivar: _numAudioSampleForwarded
@property (nonatomic) CGFloat trailingSilenceDurationAtEndpoint; // ivar: _trailingSilenceDurationAtEndpoint


-(NSUInteger)estimatedSpeechEndHostTime;
-(id)init;
-(void)addNumSamples:(NSUInteger)arg0 hostTime:(NSUInteger)arg1 ;
-(void)notifyTrailingSilenceDurationAtEndpoint:(CGFloat)arg0 ;
-(void)reset;


@end


#endif