// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHDBAR2DTYPE_H
#define CHDBAR2DTYPE_H



#import "CHDChartTypeWithGrouping.h"

@interface CHDBar2DType : CHDChartTypeWithGrouping {
    int mGapWidth;
    BOOL mColumn;
    int mOverlap;
}




-(BOOL)isColumn;
-(BOOL)isHorizontal;
-(id)initWithChart:(id)arg0 ;
-(int)defaultLabelPosition;
-(int)gapWidth;
-(int)overlap;
-(void)setColumn:(BOOL)arg0 ;
-(void)setGapWidth:(int)arg0 ;
-(void)setOverlap:(int)arg0 ;


@end


#endif