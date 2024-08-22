// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMODERNATOMBACKGROUNDVIEW_H
#define MFMODERNATOMBACKGROUNDVIEW_H

@class UIView;


#import "MFModernAtomView.h"

@interface MFModernAtomBackgroundView : UIView {
    NSUInteger _selectionStyle;
    BOOL _selected;
}


@property (weak, nonatomic) MFModernAtomView *hostAtomView; // ivar: _hostAtomView
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (readonly, nonatomic) UIView *selectedView; // ivar: _selectedView
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (readonly, nonatomic) UIView *separatorView; // ivar: _separatorView


-(BOOL)isSelected;
-(CGFloat)separatorWidth;
-(id)_chevronImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )_backgroundBleedArea;
-(void)_setSelectionStyle:(NSUInteger)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 style:(NSUInteger)arg2 ;
-(void)tintColorDidChange;


@end


#endif