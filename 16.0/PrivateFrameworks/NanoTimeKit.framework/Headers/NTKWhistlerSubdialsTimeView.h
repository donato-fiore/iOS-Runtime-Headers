// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKWHISTLERSUBDIALSTIMEVIEW_H
#define NTKWHISTLERSUBDIALSTIMEVIEW_H



#import "NTKDualTimeView.h"
#import "NTKWhistlerAnalogColorPalette.h"

@interface NTKWhistlerSubdialsTimeView : NTKDualTimeView

@property (retain, nonatomic) NTKWhistlerAnalogColorPalette *palette; // ivar: _palette


-(CGFloat)_minuteTickInset;
-(NSUInteger)_hourTickCount;
-(NSUInteger)_minuteTickCount;
-(id)_digitalTimeLabelColorForColorPalette:(id)arg0 ;
-(id)_hourMinuteHandFillColorForColorPalette:(id)arg0 ;
-(id)_hourMinuteHandStrokeColorForColorPalette:(id)arg0 ;
-(id)_secondHandColorForColorPalette:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSUInteger)arg1 andDevice:(id)arg2 ;
-(struct CGSize )_hourTickSize;
-(struct CGSize )_minuteTickSize;


@end


#endif