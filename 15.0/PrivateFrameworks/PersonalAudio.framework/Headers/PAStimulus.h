// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PASTIMULUS_H
#define PASTIMULUS_H

@class AVAudioFile, AVAudioPCMBuffer, AVAudioPlayerNode, AVAudioEngine, NSURL, AXDispatchTimer;

#import <Foundation/Foundation.h>


@interface PAStimulus : NSObject {
    id *_stimulusMagnitudesCallback;
    NSUInteger _bucketCount;
    BOOL _ramping;
}


@property (retain, nonatomic) AVAudioFile *audioFile; // ivar: _audioFile
@property (retain, nonatomic) AVAudioPCMBuffer *audioPCMBuffer; // ivar: _audioPCMBuffer
@property (retain, nonatomic) AVAudioPlayerNode *audioPlayerNode; // ivar: _audioPlayerNode
@property (retain, nonatomic) AVAudioEngine *engine; // ivar: _engine
@property (retain, nonatomic) NSURL *filePath; // ivar: _filePath
@property (nonatomic) CGFloat levelMultiplier; // ivar: _levelMultiplier
@property (retain, nonatomic) AXDispatchTimer *timer; // ivar: _timer


+(id)louderSinStimulus;
+(id)musicStimulus;
+(id)sinStimulus;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPlaying;
-(id)initWithFile:(id)arg0 ;
-(void)audioSessionWasInterrupted:(id)arg0 ;
-(void)calculateFFTForBuffer:(id)arg0 ;
-(void)play;
-(void)rampVolumeUp:(BOOL)arg0 ;
// -(void)registerListener:(id)arg0 forBucketCount:(unk)arg1  ;
-(void)stop;
-(void)unregisterListener;


@end


#endif