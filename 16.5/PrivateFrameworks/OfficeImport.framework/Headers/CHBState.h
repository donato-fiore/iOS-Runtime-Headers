// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHBSTATE_H
#define CHBSTATE_H


#import <Foundation/Foundation.h>

#import "CHDChart.h"

@interface CHBState : NSObject {
    CHDChart *mChart;
    *__CFArray mXlChartDataSeriesCollection;
    int mXlSeriesCount;
    int mXlCurrentSeriesIndex;
    BOOL mHasPrimaryMixedArea;
    BOOL mHasPrimaryMixedColumn;
    BOOL mHasPrimaryMixedLine;
    BOOL mHasSecondaryMixedArea;
    BOOL mHasSecondaryMixedColumn;
    BOOL mHasSecondaryMixedLine;
}




-(*void)xlChartDataSeriesAtIndex:(int)arg0 ;
-(*void)xlCurrentChartDataSeries;
-(BOOL)hasPrimaryMixedArea;
-(BOOL)hasPrimaryMixedColumn;
-(BOOL)hasPrimaryMixedLine;
-(BOOL)hasSecondaryMixedArea;
-(BOOL)hasSecondaryMixedColumn;
-(BOOL)hasSecondaryMixedLine;
-(BOOL)isMixedChart;
-(id)chart;
-(id)init;
-(id)resources;
-(id)workbook;
-(int)xlCurrentChartDataSeriesIndex;
-(int)xlSeriesCount;
-(unsigned int)chartGroupIndexForType:(int)arg0 isForPrimary:(BOOL)arg1 ;
-(void)dealloc;
-(void)deleteXlChartDataSeriesCollection;
-(void)readAndCacheXlChartDataSeries;
-(void)setChart:(id)arg0 ;
-(void)setHasPrimaryMixedArea:(BOOL)arg0 ;
-(void)setHasPrimaryMixedColumn:(BOOL)arg0 ;
-(void)setHasPrimaryMixedLine:(BOOL)arg0 ;
-(void)setHasSecondaryMixedArea:(BOOL)arg0 ;
-(void)setHasSecondaryMixedColumn:(BOOL)arg0 ;
-(void)setHasSecondaryMixedLine:(BOOL)arg0 ;
-(void)setXlCurrentSeriesIndex:(int)arg0 ;


@end


#endif