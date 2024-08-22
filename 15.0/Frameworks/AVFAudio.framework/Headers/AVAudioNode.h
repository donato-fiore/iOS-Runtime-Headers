// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIONODE_H
#define AVAUDIONODE_H

@class AUAudioUnit;

#import <Foundation/Foundation.h>

#import "AVAudioEngine.h"
#import "AVAudioTime.h"

@interface AVAudioNode : NSObject {
    *void _impl;
}


@property (readonly, nonatomic) AUAudioUnit *AUAudioUnit;
@property (readonly, nonatomic) AVAudioEngine *engine;
@property (readonly, nonatomic) *void impl;
@property (readonly, nonatomic) AVAudioTime *lastRenderTime;
@property (readonly, nonatomic) CGFloat latency;
@property (readonly, nonatomic) NSUInteger numberOfInputs;
@property (readonly, nonatomic) NSUInteger numberOfOutputs;
@property (readonly, nonatomic) CGFloat outputPresentationLatency;


-(BOOL)setInputFormat:(id)arg0 forBus:(NSUInteger)arg1 ;
-(BOOL)setOutputFormat:(id)arg0 forBus:(NSUInteger)arg1 ;
-(NSInteger)pointSourceInHeadMode;
-(NSInteger)renderingAlgorithm;
-(NSInteger)sourceMode;
-(float)obstruction;
-(float)occlusion;
-(float)pan;
-(float)rate;
-(float)reverbBlend;
-(float)volume;
-(id)clock;
-(id)destinationForMixer:(id)arg0 bus:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithImpl:(*void)arg0 ;
-(id)inputFormatForBus:(NSUInteger)arg0 ;
-(id)nameForInputBus:(NSUInteger)arg0 ;
-(id)nameForOutputBus:(NSUInteger)arg0 ;
-(id)outputFormatForBus:(NSUInteger)arg0 ;
-(struct AVAudio3DPoint )position;
-(struct OpaqueAudioComponentInstance *)audioUnit;
-(void)dealloc;
-(void)didAttachToEngine:(id)arg0 ;
-(void)didDetachFromEngine:(id)arg0 error:(*id)arg1 ;
-(void)installTapOnBus:(NSUInteger)arg0 bufferSize:(unsigned int)arg1 format:(id)arg2 block:(id)arg3 ;
-(void)removeTapOnBus:(NSUInteger)arg0 ;
-(void)reset;
-(void)setObstruction:(float)arg0 ;
-(void)setOcclusion:(float)arg0 ;
-(void)setPan:(float)arg0 ;
-(void)setPointSourceInHeadMode:(NSInteger)arg0 ;
-(void)setPosition:(struct AVAudio3DPoint )arg0 ;
-(void)setRate:(float)arg0 ;
-(void)setRenderingAlgorithm:(NSInteger)arg0 ;
-(void)setReverbBlend:(float)arg0 ;
-(void)setSourceMode:(NSInteger)arg0 ;
-(void)setVolume:(float)arg0 ;


@end


#endif