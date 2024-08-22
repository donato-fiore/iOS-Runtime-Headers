// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMODERNATOMBACKGROUNDVIEW_H
#define CNMODERNATOMBACKGROUNDVIEW_H

@class UIView;


#import "CNAtomView.h"

@interface CNModernAtomBackgroundView : UIView {
    NSUInteger _selectionStyle;
    BOOL _selected;
}


@property (weak, nonatomic) CNAtomView *hostAtomView; // ivar: _hostAtomView
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (readonly, nonatomic) UIView *selectedView; // ivar: _selectedView
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (readonly, nonatomic) UIView *separatorView; // ivar: _separatorView


-(BOOL)appearsSelected;
-(BOOL)isSelected;
-(CGFloat)separatorWidth;
-(id)_chevronImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)wrappedTintColor;
-(struct UIEdgeInsets )_backgroundBleedArea;
-(void)_setSelectionStyle:(NSUInteger)arg0 ;
-(void)displaySelectionChangeWithAnimation:(BOOL)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 style:(NSUInteger)arg2 updateVisualSelection:(BOOL)arg3 ;
-(void)tintColorDidChange;


@end


#endif