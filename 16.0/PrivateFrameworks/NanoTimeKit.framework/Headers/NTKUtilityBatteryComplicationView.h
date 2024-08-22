// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKUTILITYBATTERYCOMPLICATIONVIEW_H
#define NTKUTILITYBATTERYCOMPLICATIONVIEW_H



#import "NTKUtilitySmallRingTextComplicationView.h"

@interface NTKUtilityBatteryComplicationView : NTKUtilitySmallRingTextComplicationView



+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(void)_updateForTemplateChange;
-(void)updateRingWithRingDescription:(id)arg0 backgroundRingAlpha:(CGFloat)arg1 ;


@end


#endif