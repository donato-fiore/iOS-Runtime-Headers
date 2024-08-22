// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUAUDIOANALYZER_H
#define MRUAUDIOANALYZER_H

@class NSHashTable, MPCProcessAudioTap;
@protocol MPCProcessAudioTapDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRUWaveformSettings.h"
#import "MRUWaveformData.h"

@interface MRUAudioAnalyzer : NSObject <MPCProcessAudioTapDelegate>

 {
    int _frameCount;
    unsigned int _log2FrameCount;
    int _bufferSizePowerOf2;
    int _inputCount;
    float _normalizationFactor;
    *float _realBuffer;
    *float _imagBuffer;
    *float _transferBuffer;
    *float _magnitudes;
    *float _hannWindow;
    *OpaqueFFTSetup _fftSetup;
}


@property (readonly, nonatomic) BOOL isRunning; // ivar: _isRunning
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (nonatomic) int refreshRate; // ivar: _refreshRate
@property (nonatomic) float sampleRate; // ivar: _sampleRate
@property (retain, nonatomic) MRUWaveformSettings *settings; // ivar: _settings
@property (retain, nonatomic) MPCProcessAudioTap *tap; // ivar: _tap
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tapQueue; // ivar: _tapQueue
@property (readonly, nonatomic) MRUWaveformData *waveformData; // ivar: _waveformData


+(id)audioAnalyzerForPID:(int)arg0 ;
-(id)binSamples:(*float)arg0 count:(int)arg1 ;
-(id)description;
-(id)initWithPID:(int)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)computeFFTWithSamples:(*float)arg0 count:(unsigned int)arg1 ;
-(void)dealloc;
-(void)processAudioTapDidReceiveAudioSamples:(*void)arg0 numberOfSamples:(unsigned int)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif