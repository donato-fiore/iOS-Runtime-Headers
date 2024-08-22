// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKSCHOOLTIMEDIALVIEW_H
#define NTKSCHOOLTIMEDIALVIEW_H

@class UIView, NSDictionary;



@interface NTKSchoolTimeDialView : UIView {
    NSUInteger _activeHour;
    CGFloat _ringWidth;
    NSDictionary *_hourLabels;
}




-(id)_activeHourColor;
-(id)_inactiveHourColor;
-(id)initWithFrame:(struct CGRect )arg0 ringWidth:(CGFloat)arg1 ;
-(void)_setupUI;
-(void)setActiveHour:(NSUInteger)arg0 animated:(BOOL)arg1 ;


@end


#endif