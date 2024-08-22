// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKINTERACTIVECHARTDATAFORMATTER_H
#define HKINTERACTIVECHARTDATAFORMATTER_H

@class UIFont;

#import <Foundation/Foundation.h>

#import "HKDisplayType.h"
#import "HKUnitPreferenceController.h"

@interface HKInteractiveChartDataFormatter : NSObject

@property (weak, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (retain, nonatomic) UIFont *majorFont; // ivar: _majorFont
@property (retain, nonatomic) UIFont *minorFont; // ivar: _minorFont
@property (retain, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController


-(id)_formattedStringForValue:(id)arg0 ;
-(id)_unitNameFromUnit:(id)arg0 number:(id)arg1 ;
-(id)attributedStringForValue:(id)arg0 ;
-(id)attributedStringWithValue:(CGFloat)arg0 unit:(id)arg1 showUnit:(BOOL)arg2 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)formattedStringWithValue:(CGFloat)arg0 unitString:(id)arg1 showUnit:(BOOL)arg2 ;
-(id)formattedUnitStringForChartData:(id)arg0 ;
-(id)formattedValueStringForChartData:(id)arg0 options:(NSInteger)arg1 ;


@end


#endif