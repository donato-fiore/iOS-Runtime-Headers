// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCAPSULEVIEW_H
#define SFCAPSULEVIEW_H

@class UIView, UIVisualEffectView, NSString;


#import "_SFBarTheme.h"

@interface SFCapsuleView : UIView {
    UIVisualEffectView *_privateDarkEffectView;
    UIView *_topSeparator;
    UIView *_cachedContentView;
}


@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) CGFloat backgroundCornerRadius; // ivar: _backgroundCornerRadius
@property (nonatomic) UIEdgeInsets backgroundInsets; // ivar: _backgroundInsets
@property (readonly, nonatomic) UIVisualEffectView *backgroundView; // ivar: _background
@property (readonly, nonatomic) UIView *contentContainer; // ivar: _contentContainer
@property (nonatomic) CGAffineTransform contentTransform; // ivar: _contentTransform
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id *contentViewUpdateHandler; // ivar: _contentViewUpdateHandler
@property (nonatomic) BOOL forceMinimizedTheme; // ivar: _forceMinimizedTheme
@property (readonly, nonatomic) CGRect frameForShadowView;
@property (readonly, nonatomic) BOOL isMinimized;
@property (nonatomic, setter=setSelected:) BOOL isSelected; // ivar: _isSelected
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) CGFloat minimizationPercent; // ivar: _minimizationPercent
@property (nonatomic) CGFloat minimizedContentHorizontalInset; // ivar: _minimizedContentHorizontalInset
@property (retain, nonatomic) _SFBarTheme *minimizedTheme; // ivar: _minimizedTheme
@property (copy, nonatomic) NSString *reusableContentViewIdentifier; // ivar: _reusableContentViewIdentifier
@property (readonly, nonatomic) UIView *shadowView; // ivar: _shadowView
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) _SFBarTheme *theme; // ivar: _theme
@property (nonatomic) BOOL usesPlatterEffect; // ivar: _usesPlatterEffect
@property (copy, nonatomic) NSString *visualEffectGroupName;


+(id)maximumContentSizeCategory;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateAccessoryTheme;
-(void)_updateContentViewState;
-(void)_updateShadowViewTransform;
-(void)_updateStateWithContentView:(id)arg0 ;
-(void)applyTheme;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(void)setTransform:(struct CGAffineTransform )arg0 ;
-(void)willChangeToMinimized:(BOOL)arg0 coordinator:(id)arg1 ;
-(void)willReloadWithCoordinator:(id)arg0 ;


@end


#endif