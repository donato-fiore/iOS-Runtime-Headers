// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSHADOWMICSCORECREATOR_H
#define CSSHADOWMICSCORECREATOR_H

@class NSMutableData, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CSShadowMicScoreCreator : NSObject

@property (retain, nonatomic) NSMutableData *audioBuffer; // ivar: _audioBuffer
@property (nonatomic) NSUInteger bestEarlyDetectSample; // ivar: _bestEarlyDetectSample
@property (nonatomic) NSUInteger bestEndDetectSample; // ivar: _bestEndDetectSample
@property (nonatomic) NSUInteger bestStartDetectSample; // ivar: _bestStartDetectSample
@property (nonatomic) NSInteger numberOfTotalFramesETFT; // ivar: _numberOfTotalFramesETFT
@property (nonatomic) NSUInteger numberOfVoicingFrames; // ivar: _numberOfVoicingFrames
@property (retain, nonatomic) NSMutableArray *rmsSamplesForEntireAudio; // ivar: _rmsSamplesForEntireAudio
@property (nonatomic) CGFloat shadowMicScore; // ivar: _shadowMicScore
@property (nonatomic) CGFloat speechVoiceLevel; // ivar: _speechVoiceLevel


-(CGFloat)_calculateRMSWithFrameData:(short)arg0 ;
-(id)init;
-(void)_calculateNumberOfVoicingFrames;
-(void)_calculateSpeechVoicingLevel;
-(void)addDataToBuffer:(id)arg0 ;
-(void)calculateShadowMicScore;


@end


#endif