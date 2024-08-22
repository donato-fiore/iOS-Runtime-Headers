// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HISTBASEDTONEMAPPING_H
#define HISTBASEDTONEMAPPING_H


#import <Foundation/Foundation.h>

#import "HistStatLinkedListNode.h"

@interface HistBasedToneMapping : NSObject {
    *void _hist;
    char * _histDataPtr;
    NSInteger _streamId;
    int _minHistBin;
    int _maxHistBin;
    NSUInteger _sumHist;
    *float _binCenter;
    *float _hlgBinCenterInPQ;
    *int _fullRangeBinIdx;
    unsigned char _histMinMaxBinCenter;
    unsigned char _histPrintData;
    NSUInteger _frameNumber;
    *__sFILE _fpHistDump;
    *__sFILE _fpStatDump;
    *__sFILE _fpAplDump;
}


@property (readonly) float avgPixelLevel; // ivar: _avgPixelLevel
@property (readonly) float avgVal; // ivar: _avgVal
@property (readonly) unsigned short bufSize; // ivar: _bufSize
@property (readonly) *float histBinCentroidInLinear; // ivar: _histBinCentroidInLinear
@property (readonly) *float histBinCentroidInPQ; // ivar: _histBinCentroidInPQ
@property (readonly) BOOL isDataValid; // ivar: _isDataValid
@property (readonly) BOOL isSceneChanged; // ivar: _isSceneChanged
@property (readonly) float maxVal; // ivar: _maxVal
@property (readonly) float minVal; // ivar: _minVal
@property (readonly) *float normHistHeight; // ivar: _normHistHeight
@property (readonly) int numPrct; // ivar: _numPrct
@property (readonly) *float pcntVal; // ivar: _pcntVal
@property (readonly) *float prctVal; // ivar: _prctVal
@property (readonly) HistStatLinkedListNode *statLinkedListCurr; // ivar: _statLinkedListCurr
@property (readonly) HistStatLinkedListNode *statLinkedListHead; // ivar: _statLinkedListHead
@property (readonly) HistStatLinkedListNode *statLinkedListTail; // ivar: _statLinkedListTail
@property (readonly) float stdVal; // ivar: _stdVal
@property (readonly) int tempMode; // ivar: _tempMode


-(BOOL)sceneChanged:(*float)arg0 Prev:(*float)arg1 Threshold:(float)arg2 CorrCoeff:(*float)arg3 ;
-(BOOL)toneChanged:(float)arg0 Prev:(float)arg1 Threshold:(float)arg2 ;
-(NSInteger)computeFramePrctFromHistData;
-(NSInteger)computeFrameStatFromHistData;
-(NSInteger)debugHistDataFromLayer:(struct __IOSurface *)arg0 ;
-(NSInteger)getHistDataFromLayer:(struct __IOSurface *)arg0 ;
-(NSInteger)getHistStatFromLayer:(struct __IOSurface *)arg0 HDRMode:(unsigned int)arg1 transferFunction:(int)arg2 temporalMode:(int)arg3 iirAlpha:(float)arg4 frameNumber:(NSUInteger)arg5 ;
-(NSInteger)normalizeHistData:(unsigned int)arg0 transferFunction:(int)arg1 ;
-(NSInteger)sanityCheckAndGetDataFromHist;
-(NSInteger)temporalProcessHistStat:(NSInteger)arg0 iirAlpha:(float)arg1 ;
-(NSUInteger)getSumHist;
-(char *)getHistDataPtr;
-(float)FIRFilterHistStat:(CGFloat)arg0 statBuffer:(*CGFloat)arg1 currIndex:(int)arg2 numOfProcessedFrames:(int)arg3 ;
-(float)FIRFilterHistStat:(float)arg0 statBuffer:(*float)arg1 currIndex:(int)arg2 prevIndex:(int)arg3 numOfProcessedFrames:(int)arg4 ;
-(float)computeFrameAPLFromPQHistData:(*float)arg0 ;
-(id)init;
-(void)computeFrameAvgFromHistData;
-(void)computeFrameMaxFromHistData;
-(void)computeFrameMinFromHistData;
-(void)computeFrameStdFromHistData;
-(void)dealloc;
-(void)findStatLinkedListNode:(NSInteger)arg0 ;
-(void)getSettingsFromDefaultsWrite;
-(void)mapBinFromNarrowRangeToFullRange;
-(void)normalizeHistDataAndMapToPQForHLGInput:(int)arg0 ;
-(void)normalizeHistDataForDoViInput;
-(void)normalizeHistDataForHDR10Input;
-(void)setHistBasedToneMappingTemporalType:(unsigned int)arg0 temporalMode:(int)arg1 ;


@end


#endif