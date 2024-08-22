// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKEDITOPTIONPICKERSIDEVIEW_H
#define NTKEDITOPTIONPICKERSIDEVIEW_H

@class UIView;



@interface NTKEditOptionPickerSideView : UIView {
    CGFloat _contentAlpha;
    CGAffineTransform _contentTransform;
}


@property (retain, nonatomic) UIView *optionView; // ivar: _optionView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_applyContentAlpha;
-(void)applyContentTransform:(struct CGAffineTransform )arg0 ;
-(void)setRotationFromFront:(CGFloat)arg0 ;


@end


#endif