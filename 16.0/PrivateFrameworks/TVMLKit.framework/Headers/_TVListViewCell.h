// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVLISTVIEWCELL_H
#define _TVLISTVIEWCELL_H

@class UICollectionViewCell, UIColor, UIVisualEffectView, _UIFloatingContentView;
@protocol _TVListViewCellDelegate;



@interface _TVListViewCell : UICollectionViewCell {
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIVisualEffectView *_backgroundVisualEffectView;
}


@property (weak, nonatomic) NSObject<_TVListViewCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) _UIFloatingContentView *floatingView; // ivar: _floatingView
@property (nonatomic) BOOL shouldAppearSelected; // ivar: _shouldAppearSelected
@property (nonatomic) BOOL visualEffectViewBackgroundEnabled; // ivar: _visualEffectViewBackgroundEnabled


-(BOOL)_descendantsShouldHighlight;
-(BOOL)canBecomeFocused;
-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateSelectedBackgroundColor;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg0 ;


@end


#endif