// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHISTOGRAMAXISDIMENSION_H
#define HKHISTOGRAMAXISDIMENSION_H

@protocol HKAxisLabelDimension, HKHistogramAxisDimensionDataSource;

#import <Foundation/Foundation.h>


@interface HKHistogramAxisDimension : NSObject <HKAxisLabelDimension>



@property (weak, nonatomic) NSObject<HKHistogramAxisDimensionDataSource> *dataSource; // ivar: _dataSource


-(CGFloat)niceStepSizeLargerThan:(CGFloat)arg0 ;
-(CGFloat)ticksPerStepSize:(CGFloat)arg0 ;
-(id)stringForLocation:(id)arg0 ;
-(void)setStepSizeForLabels:(CGFloat)arg0 ;


@end


#endif