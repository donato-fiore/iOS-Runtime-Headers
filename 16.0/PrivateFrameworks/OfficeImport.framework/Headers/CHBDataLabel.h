// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHBDATALABEL_H
#define CHBDATALABEL_H


#import <Foundation/Foundation.h>


@interface CHBDataLabel : NSObject



+(id)chdDataLabelFromXlChartCustomLabelText:(*void)arg0 state:(id)arg1 ;
+(id)chdDataLabelFromXlChartSeriesFormat:(struct XlChartSeriesFormat *)arg0 state:(id)arg1 ;
+(int)chdLabelPositionEnumFromXlLabelPosition:(int)arg0 ;
+(int)xlLabelPositionEnumFromCHDDataLabelPosition:(int)arg0 ;


@end


#endif