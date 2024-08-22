// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHBAXIS_H
#define CHBAXIS_H


#import <Foundation/Foundation.h>


@interface CHBAxis : NSObject



+(Class)chbAxisClassWith:(id)arg0 ;
+(Class)chbAxisClassWith:(struct XlChartPlotAxis *)arg0 plotAxis:(int)arg1 ;
+(id)readWithXlPlotAxis:(int)arg0 state:(id)arg1 ;
+(int)chbAxisIdForPlotAxis:(int)arg0 state:(id)arg1 ;
+(int)chdAxisPositionFromAxisType:(int)arg0 ;
+(int)xlPlotAxisTypeFrom:(int)arg0 ;


@end


#endif