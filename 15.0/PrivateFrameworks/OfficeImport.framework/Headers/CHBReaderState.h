// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHBREADERSTATE_H
#define CHBREADERSTATE_H

@protocol CHAutoStyling;


#import "CHBState.h"
#import "EBReaderSheetState.h"
#import "OADColorScheme.h"

@interface CHBReaderState : CHBState {
    EBReaderSheetState *mEBReaderSheetState;
    *void mXlReader;
    id<CHAutoStyling> *mAutoStyling;
    int mAxisGroup;
    *void mXlCurrentPlot;
    int mXlCurrentPlotIndex;
}


@property (readonly, nonatomic) OADColorScheme *colorScheme;


-(*void)xlCurrentPlot;
-(*void)xlReader;
-(?)defaultFormatForXlSeries;
-(?)xlCurrentDefaultSeriesFormat;
-(id)autoStyling;
-(id)ebReaderSheetState;
-(id)initWithEBReaderSheetState:(id)arg0 ;
-(id)resources;
-(id)workbook;
-(int)axisGroup;
-(int)xlCurrentPlotIndex;
-(int)xlPlotCount;
-(void)readAndCacheXlChartDataSeries;
-(void)setAxisGroup:(int)arg0 ;
-(void)setChart:(id)arg0 ;
-(void)setXlCurrentPlot:(*void)arg0 ;
-(void)setXlCurrentPlotIndex:(int)arg0 ;


@end


#endif