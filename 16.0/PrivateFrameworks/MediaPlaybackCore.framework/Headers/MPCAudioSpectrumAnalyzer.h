// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCAUDIOSPECTRUMANALYZER_H
#define MPCAUDIOSPECTRUMANALYZER_H

@class NSString, NSMutableArray, NSNumber;
@protocol MPCPlaybackEngineEventObserving, MPCProcessAudioTapDelegate;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"
#import "MPCProcessAudioTap.h"
#import "MPCAudioSpectrumAnalyzer.h"
#import "_MPCAudioSpectrumAnalyzerStorage.h"

@interface MPCAudioSpectrumAnalyzer : NSObject <MPCPlaybackEngineEventObserving, MPCProcessAudioTapDelegate>

 {
    *opaqueMTAudioProcessingTap _audioProcessingTap;
    *OpaqueAudioQueue _processingQueue;
    *AudioQueueBuffer _aqBuffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (retain, nonatomic) MPCProcessAudioTap *processAudioTap; // ivar: _processAudioTap
@property (readonly, copy, nonatomic) NSNumber *refreshRate; // ivar: _refreshRate
@property (retain, nonatomic) MPCAudioSpectrumAnalyzer *selfRef; // ivar: _selfRef
@property (retain, nonatomic) _MPCAudioSpectrumAnalyzerStorage *storage; // ivar: _storage
@property (readonly) Class superclass;


-(BOOL)_shouldAttachAudioTap;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(id)initWithPlaybackEngine:(id)arg0 refreshRate:(id)arg1 ;
-(void)_analyzeAudioData:(*void)arg0 numberOfFrames:(unsigned int)arg1 ;
-(void)_analyzeSamples:(struct AudioBufferList *)arg0 numberFrames:(NSInteger)arg1 ;
-(void)_createAudioTap;
-(void)_createProcessTap;
-(void)_createQueueTap;
-(void)_destroyAudioTap;
-(void)_destroyProcessTap;
-(void)_destroyQueueTap;
-(void)_prepareTap:(struct opaqueMTAudioProcessingTap *)arg0 maxFrames:(NSInteger)arg1 processingFormat:(struct AudioStreamBasicDescription *)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)configurePlayerItem:(id)arg0 ;
-(void)dealloc;
-(void)engine:(id)arg0 didChangeToState:(NSUInteger)arg1 ;
-(void)processAudioTapDidReceiveAudioSamples:(*void)arg0 numberOfSamples:(unsigned int)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif