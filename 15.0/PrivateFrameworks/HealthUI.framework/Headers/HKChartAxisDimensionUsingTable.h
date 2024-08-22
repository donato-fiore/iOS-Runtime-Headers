// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCHARTAXISDIMENSIONUSINGTABLE_H
#define HKCHARTAXISDIMENSIONUSINGTABLE_H

@protocol HKAxisLabelDimension;

#import <Foundation/Foundation.h>

#import "HKDisplayType.h"
#import "HKUnitPreferenceController.h"

@interface HKChartAxisDimensionUsingTable : NSObject <HKAxisLabelDimension>



@property (readonly) HKDisplayType *displayType; // ivar: _displayType
@property (readonly) *HKStepSizeTableEntryDefn stepSizeTable; // ivar: _stepSizeTable
@property (readonly) NSInteger stepSizeTableSize; // ivar: _stepSizeTableSize
@property (readonly) HKUnitPreferenceController *unitController; // ivar: _unitController


-(CGFloat)niceStepSizeLargerThan:(CGFloat)arg0 ;
-(CGFloat)ticksPerStepSize:(CGFloat)arg0 ;
-(id)initWithStepSizeTable:(struct HKStepSizeTableEntryDefn *)arg0 stepSizeTableSize:(NSInteger)arg1 displayType:(id)arg2 unitController:(id)arg3 ;
-(id)stringForLocation:(id)arg0 ;
-(struct HKStepSizeTableEntryDefn *)_findStepSize:(CGFloat)arg0 allowEqual:(BOOL)arg1 ;
-(void)setStepSizeForLabels:(CGFloat)arg0 ;


@end


#endif