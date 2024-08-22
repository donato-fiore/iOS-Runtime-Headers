// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSIMPLEPASSCODEENTRYFIELDBUTTON_H
#define SBSIMPLEPASSCODEENTRYFIELDBUTTON_H

@class UIView, UIColor;



@interface SBSimplePasscodeEntryFieldButton : UIView {
    BOOL _useLightStyle;
    BOOL _revealed;
    UIEdgeInsets _paddingOutsideRing;
    UIColor *_color;
    UIView *_ringView;
}


@property (nonatomic, getter=isAnimatingUnreveal) BOOL animatingUnreveal; // ivar: _animatingUnreveal


-(id)initWithFrame:(struct CGRect )arg0 paddingOutsideRing:(struct UIEdgeInsets )arg1 useLightStyle:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)setRevealed:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setRevealed:(BOOL)arg0 animated:(BOOL)arg1 delay:(CGFloat)arg2 ;


@end


#endif