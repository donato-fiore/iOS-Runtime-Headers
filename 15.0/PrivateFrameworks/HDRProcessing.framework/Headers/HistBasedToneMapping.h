// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
    HistStatLinkedListNode *_statLinkedListHead;
    HistStatLinkedListNode *_statLinkedListTail;
    HistStatLinkedListNode *_statLinkedListCurr;
    int _tempMode;
    unsigned short _bufSize;
    unsigned char _histMinMaxBinCenter;
    unsigned char _histPrintData;
}


@property (readonly) float avgVal; // ivar: _avgVal
@property (readonly) *float histBinCentroidInPQ; // ivar: _histBinCentroidInPQ
@property (readonly) BOOL isDataValid; // ivar: _isDataValid
@property (readonly) float maxVal; // ivar: _maxVal
@property (readonly) float minVal; // ivar: _minVal
@property (readonly) *float normHistHeight; // ivar: _normHistHeight
@property (readonly) int numPrct; // ivar: _numPrct
@property (readonly) *float pcntVal; // ivar: _pcntVal
@property (readonly) *float prctVal; // ivar: _prctVal
@property (readonly) float stdVal; // ivar: _stdVal


-(BOOL)sceneChanged:(*float)arg0 Prev:(*float)arg1 Threshold:(float)arg2 CorrCoeff:(*float)arg3 ;
-(BOOL)toneChanged:(float)arg0 Prev:(float)arg1 Threshold:(float)arg2 ;
-(NSInteger)computeFramePrctFromHistData;
-(NSInteger)computeFrameStatFromHistData;
-(NSInteger)debugHistDataFromLayer:(struct __IOSurface *)arg0 ;
-(NSInteger)getHistDataFromLayer:(struct __IOSurface *)arg0 ;
-(NSInteger)getHistStatFromLayer:(struct __IOSurface *)arg0 HDRMode:(unsigned int)arg1 temporalMode:(int)arg2 iirAlpha:(float)arg3 ;
-(NSInteger)normalizeHistData:(unsigned int)arg0 ;
-(NSInteger)sanityCheckAndGetDataFromHist;
-(NSInteger)temporalProcessHistStat:(NSInteger)arg0 iirAlpha:(float)arg1 ;
-(float)FIRFilterHistStat:(float)arg0 statBuffer:(*float)arg1 currIndex:(int)arg2 prevIndex:(int)arg3 numOfProcessedFrames:(int)arg4 ;
-(id)init;
-(void)computeFrameAvgFromHistData;
-(void)computeFrameMaxFromHistData;
-(void)computeFrameMinFromHistData;
-(void)computeFrameStdFromHistData;
-(void)dealloc;
-(void)findStatLinkedListNode:(NSInteger)arg0 ;
-(void)getSettingsFromDefaultsWrite;
-(void)mapBinFromNarrowRangeToFullRange;
-(void)normalizeHistDataAndMapToPQForHLGInput;
-(void)normalizeHistDataForDoViInput;
-(void)normalizeHistDataForHDR10Input;
-(void)setHistBasedToneMappingTemporalType:(unsigned int)arg0 temporalMode:(int)arg1 ;
-(void)setbufSize;


@end


#endif