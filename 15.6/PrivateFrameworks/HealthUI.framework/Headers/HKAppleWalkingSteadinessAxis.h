// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKAPPLEWALKINGSTEADINESSAXIS_H
#define HKAPPLEWALKINGSTEADINESSAXIS_H

@class NSArray;


#import "HKNumericAxis.h"
#import "HKDisplayType.h"

@interface HKAppleWalkingSteadinessAxis : HKNumericAxis

@property (retain, nonatomic) NSArray *cachedAxisLabels; // ivar: _cachedAxisLabels
@property (retain, nonatomic) HKDisplayType *displayType; // ivar: _displayType


+(id)standardAxisWithDisplayType:(id)arg0 ;
-(id)_axisLabelsForClassificationsWithDisplayType:(id)arg0 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)initWithDisplayType:(id)arg0 ;
-(struct CGPoint )renderPositionForLabelLocation:(id)arg0 rect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 constantOffset:(CGFloat)arg4 isHorizontal:(BOOL)arg5 optionalOffset:(struct CGPoint )arg6 ;


@end


#endif