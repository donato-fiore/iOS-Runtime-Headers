// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCAUDIOSPECTRUMANALYZERSTORAGE_H
#define _MPCAUDIOSPECTRUMANALYZERSTORAGE_H


#import <Foundation/Foundation.h>


@interface _MPCAudioSpectrumAnalyzerStorage : NSObject {
    *float _intermediateBuffer;
    DSPSplitComplex _fftBuffer;
    *OpaqueFFTSetup _fftSetup;
    BOOL _processing;
}


@property (nonatomic) NSInteger halfN; // ivar: _halfN
@property (nonatomic) NSInteger log2N; // ivar: _log2N
@property (nonatomic) NSInteger maxNumberOfFrames; // ivar: _maxNumberOfFrames
@property (nonatomic) float sampleRate; // ivar: _sampleRate


-(id)initWithMaximumNumberOfFrames:(NSInteger)arg0 sampleRate:(float)arg1 ;
-(void)_destroyFFTSetup;
-(void)_freeBuffers;
-(void)_prepareBuffers;
-(void)analyzeAudioData:(*void)arg0 numberFrames:(unsigned int)arg1 observers:(id)arg2 ;
-(void)analyzeFrequencies:(struct AudioBufferList *)arg0 numberFrames:(NSUInteger)arg1 observers:(id)arg2 ;
-(void)dealloc;


@end


#endif