// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTERACTIVECHARTAUDIOLEVELSTATFORMATTER_H
#define HKINTERACTIVECHARTAUDIOLEVELSTATFORMATTER_H



#import "HKInteractiveChartGenericStatFormatter.h"

@interface HKInteractiveChartAudioLevelStatFormatter : HKInteractiveChartGenericStatFormatter

@property (nonatomic) BOOL showsClassificationInCurrentValueView; // ivar: _showsClassificationInCurrentValueView


-(NSInteger)_numberOfDaysVisibleInRange:(id)arg0 ;
-(id)_attributedCurrentAudioExposureClassificationForChartData:(id)arg0 ;
-(id)_formatDuration:(CGFloat)arg0 ;
-(id)_formatQuantityAudioData:(id)arg0 ;
-(id)_formattedCurrentValueForChartData:(id)arg0 ;
-(id)_formattedStringWithValue:(CGFloat)arg0 unit:(id)arg1 showUnit:(BOOL)arg2 ;
-(id)_majorAttributes;
-(id)_minorAttributes;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;


@end


#endif