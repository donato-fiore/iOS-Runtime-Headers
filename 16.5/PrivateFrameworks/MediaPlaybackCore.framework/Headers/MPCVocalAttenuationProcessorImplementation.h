// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCVOCALATTENUATIONPROCESSORIMPLEMENTATION_H
#define MPCVOCALATTENUATIONPROCESSORIMPLEMENTATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPCVocalAttenuationModel.h"

@interface MPCVocalAttenuationProcessorImplementation : NSObject {
    AudioTimeStamp _timestamp;
    NSInteger _previousContiguousSampleIndex;
    NSInteger _nextContiguousSampleIndex;
    *AudioBufferList _ioBuffer;
    AudioStreamBasicDescription _audioFormat;
    unsigned int _maxFrames;
    *OpaqueAudioComponentInstance _processingAU;
    NSObject<OS_dispatch_queue> *_creationQueue;
}


@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) float level; // ivar: _level
@property (readonly, nonatomic) float maxLevel; // ivar: _maxLevel
@property (readonly, nonatomic) float minLevel; // ivar: _minLevel
@property (readonly, nonatomic) MPCVocalAttenuationModel *model; // ivar: _model
@property (readonly, nonatomic) CGFloat renderingLimit;
@property (readonly, nonatomic) CGFloat sampleTime;
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(BOOL)_createAudioUnit:(*id)arg0 ;
-(BOOL)_initializeAudioUnit:(*id)arg0 ;
-(BOOL)_setupAudioUnitWithModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)isCompatibleWithAudioFormat:(struct AudioStreamBasicDescription )arg0 maxFrames:(unsigned int)arg1 ;
-(BOOL)processAudioBuffer:(struct AudioBufferList *)arg0 sampleIndex:(NSInteger)arg1 numberFrames:(unsigned int)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithMaxAttenuationLevel:(float)arg0 audioFormat:(struct AudioStreamBasicDescription )arg1 maxFrames:(unsigned int)arg2 ;
-(void)_applyAttenuationLevelToAudioUnit;
-(void)_prepareWithModel:(id)arg0 completion:(id)arg1 ;
-(void)prepareWithModel:(id)arg0 completion:(id)arg1 ;
-(void)resetAudioUnit;
-(void)tearDownWithCompletion:(id)arg0 ;


@end


#endif