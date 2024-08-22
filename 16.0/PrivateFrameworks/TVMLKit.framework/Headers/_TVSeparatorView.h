// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVSEPARATORVIEW_H
#define _TVSEPARATORVIEW_H

@class UIView, UIColor;



@interface _TVSeparatorView : UIView {
    UIView *_line1;
    UIView *_line2;
}


@property (nonatomic) CGFloat lineHeight; // ivar: _lineHeight
@property (weak, nonatomic) UIView *separatorComponent; // ivar: _separatorComponent
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(id)separatorViewWithElement:(id)arg0 existingView:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif