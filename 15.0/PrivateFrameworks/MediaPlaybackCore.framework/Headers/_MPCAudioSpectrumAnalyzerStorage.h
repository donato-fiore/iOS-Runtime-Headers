// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCAUDIOSPECTRUMANALYZERSTORAGE_H
#define _MPCAUDIOSPECTRUMANALYZERSTORAGE_H


#import <Foundation/Foundation.h>


@interface _MPCAudioSpectrumAnalyzerStorage : NSObject {
    *float _intermediateBuffer;
    *float _window;
    NSUInteger _windowSize;
    DSPSplitComplex _fftBuffer;
    *OpaqueFFTSetup _fftSetup;
    BOOL _processing;
}


@property (nonatomic) NSUInteger maxNumberOfFrames; // ivar: _maxNumberOfFrames
@property (nonatomic) float sampleRate; // ivar: _sampleRate


-(id)initWithMaximumNumberOfFrames:(NSUInteger)arg0 sampleRate:(float)arg1 ;
-(void)_destroyFFTSetup;
-(void)_freeBuffers;
-(void)_prepareBuffers;
-(void)analyzeFrequencies:(struct AudioBufferList *)arg0 numberFrames:(NSUInteger)arg1 observers:(id)arg2 ;
-(void)dealloc;


@end


#endif