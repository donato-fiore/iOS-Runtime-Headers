// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCAUDIOSPECTRUMOBSERVER_H
#define MPCAUDIOSPECTRUMOBSERVER_H


#import <Foundation/Foundation.h>


@interface MPCAudioSpectrumObserver : NSObject {
    *_MPCAudioFrequencyBandInternal _bands;
    NSUInteger _bandsStorageSize;
}


@property (readonly, nonatomic) NSInteger numberOfBands; // ivar: _numberOfBands
@property (copy, nonatomic) id *onUpdate; // ivar: _onUpdate
@property (nonatomic) float powerLevel; // ivar: _powerLevel


+(id)defaultObserver;
-(NSInteger)addAnalysisBand:(struct MPCAudioSpectrumAnalyzerBand )arg0 ;
-(NSInteger)addFrequencyBand:(struct MPCAudioFrequencyBand )arg0 ;
-(float)averagePowerOfBandAtIndex:(NSInteger)arg0 band:(struct MPCAudioSpectrumAnalyzerBand *)arg1 ;
-(float)averagePowerOfFrequencyBandAtIndex:(NSInteger)arg0 frequencyBand:(struct MPCAudioFrequencyBand *)arg1 ;
-(void)_resizeBandStorage;
-(void)beginReport;
-(void)dealloc;
-(void)finishReport;


@end


#endif