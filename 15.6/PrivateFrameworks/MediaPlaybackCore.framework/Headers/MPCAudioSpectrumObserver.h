// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCAUDIOSPECTRUMOBSERVER_H
#define MPCAUDIOSPECTRUMOBSERVER_H


#import <Foundation/Foundation.h>


@interface MPCAudioSpectrumObserver : NSObject {
    *_MPCAudioSpectrumAnalyzerBandInternal _bands;
    NSUInteger _bandsStorageSize;
}


@property (readonly, nonatomic) NSInteger numberOfBands; // ivar: _numberOfBands
@property (copy, nonatomic) id *onUpdate; // ivar: _onUpdate
@property (nonatomic) float powerLevel; // ivar: _powerLevel


+(id)defaultObserver;
-(NSInteger)addAnalysisBand:(struct MPCAudioSpectrumAnalyzerBand )arg0 ;
-(float)averagePowerOfBandAtIndex:(NSInteger)arg0 band:(struct MPCAudioSpectrumAnalyzerBand *)arg1 ;
-(void)_resizeBandStorage;
-(void)beginReport;
-(void)dealloc;
-(void)finishReport;


@end


#endif