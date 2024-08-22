// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIBASELISTVIEWCELL_H
#define VUIBASELISTVIEWCELL_H

@class UICollectionViewCell, UIColor, UIVisualEffectView, _UIFloatingContentView, UIView;
@protocol VUIBaseListViewCellDelegate;



@interface VUIBaseListViewCell : UICollectionViewCell {
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIVisualEffectView *_backgroundVisualEffectView;
}


@property (weak, nonatomic) NSObject<VUIBaseListViewCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) _UIFloatingContentView *floatingView; // ivar: _floatingView
@property (nonatomic) BOOL shouldAppearSelected; // ivar: _shouldAppearSelected
@property (nonatomic) BOOL visualEffectViewBackgroundEnabled; // ivar: _visualEffectViewBackgroundEnabled
@property (readonly, nonatomic) UIView *vuiContentView;


-(BOOL)_descendantsShouldHighlight;
-(BOOL)canBecomeFocused;
-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)contentView;
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
-(void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg0 ;


@end


#endif