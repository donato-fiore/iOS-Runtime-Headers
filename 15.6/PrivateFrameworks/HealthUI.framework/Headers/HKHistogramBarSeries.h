// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHISTOGRAMBARSERIES_H
#define HKHISTOGRAMBARSERIES_H



#import "HKBarSeries.h"

@interface HKHistogramBarSeries : HKBarSeries

@property (nonatomic) NSUInteger numberOfColumns; // ivar: _numberOfColumns


-(CGFloat)barWidthForVisibleBarCount:(NSInteger)arg0 axisRect:(struct CGRect )arg1 minimumSpacing:(CGFloat)arg2 ;
-(id)initWithFillStyle:(id)arg0 numberOfColumns:(NSUInteger)arg1 cornerRadii:(struct CGSize )arg2 ;


@end


#endif