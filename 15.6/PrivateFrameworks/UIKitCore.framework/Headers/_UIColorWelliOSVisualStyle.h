// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLORWELLIOSVISUALSTYLE_H
#define _UICOLORWELLIOSVISUALSTYLE_H

@class UIColorWellVisualStyle;


#import "UIButton.h"
#import "UIView.h"

@interface _UIColorWelliOSVisualStyle : UIColorWellVisualStyle {
    UIButton *_button;
    UIView *_gradientView;
    UIView *_borderView;
    BOOL _isSelected;
}




-(CGFloat)_widthForTraitCollection:(id)arg0 ;
-(id)initWithColorWell:(id)arg0 ;
-(struct CGSize )intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(void)_invokeColorPicker:(id)arg0 ;
-(void)layoutSubviews;
-(void)setSelectedColor:(id)arg0 ;
-(void)touchDown:(id)arg0 ;
-(void)touchUp:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif