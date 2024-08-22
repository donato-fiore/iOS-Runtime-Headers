// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUIANIMATINGTWOLABELVIEW_H
#define FIUIANIMATINGTWOLABELVIEW_H

@class UIView, UILabel;



@interface FIUIAnimatingTwoLabelView : UIView {
    UILabel *_visibleLabel;
}


@property (retain, nonatomic) UILabel *mainLabel; // ivar: _mainLabel
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (readonly, nonatomic) UILabel *visibleLabel;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 mainLabel:(id)arg1 secondaryLabel:(id)arg2 ;
-(struct CGRect )_frameAboveBounds;
-(struct CGRect )_frameBelowBounds;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateHidden;
-(void)applyFont:(id)arg0 ;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)showMainLabelAnimated:(BOOL)arg0 ;
-(void)showSecondaryLabelAnimated:(BOOL)arg0 ;


@end


#endif