// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUHAIRLINEVIEW_H
#define MUHAIRLINEVIEW_H

@class MKVibrantHairlineView, NSLayoutConstraint;



@interface MUHairlineView : MKVibrantHairlineView {
    CGFloat _intrinsicThickness;
}


@property (nonatomic) CGFloat leadingMargin;
@property (retain, nonatomic) NSLayoutConstraint *leadingMarginConstraint; // ivar: _leadingMarginConstraint
@property (nonatomic) CGFloat trailingMargin;
@property (retain, nonatomic) NSLayoutConstraint *trailingMarginConstraint; // ivar: _trailingMarginConstraint
@property (nonatomic) BOOL vertical; // ivar: _vertical


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)customInit;
-(void)didMoveToWindow;
-(void)setBackgroundColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif