// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERITEMCONTAINERFOOTERVIEW_H
#define SBFLUIDSWITCHERITEMCONTAINERFOOTERVIEW_H

@class UIView, NSMutableArray, BSUIEmojiLabelView, NSArray, UITapGestureRecognizer, NSString;
@protocol PTSettingsKeyObserver, UIPointerInteractionDelegate, SBFluidSwitcherItemContainerFooterViewDelegate;


#import "SBMedusaSettings.h"

@interface SBFluidSwitcherItemContainerFooterView : UIView <PTSettingsKeyObserver, UIPointerInteractionDelegate>

 {
    NSMutableArray *_iconViews;
    NSMutableArray *_titleLabels;
    BSUIEmojiLabelView *_subtitleLabel;
    NSInteger _subtitleStylingUserInterfaceStyle;
    NSArray *_titleItems;
    NSArray *_visibleTitleItems;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SBMedusaSettings *_settings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBFluidSwitcherItemContainerFooterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger footerStyle; // ivar: _footerStyle
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger iconAlignment; // ivar: _iconAlignment
@property (readonly) Class superclass;
@property (nonatomic) CGFloat textAlpha; // ivar: _textAlpha
@property (nonatomic) BOOL uniqueIconsOnly; // ivar: _uniqueIconsOnly
@property (nonatomic) BOOL wantsIconPointerInteractions; // ivar: _wantsIconPointerInteractions


-(BOOL)_hasTitleShadow;
-(BOOL)_isTextEffectivelyEmpty:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_maximumTitleLabelHeight;
-(id)_attributedSubtitleTextFromText:(id)arg0 ;
-(id)_attributedTextFromText:(id)arg0 ;
-(id)_makeIconView;
-(id)_makeLabel;
-(id)_makeSubtitleLabel;
-(id)initWithFrame:(struct CGRect )arg0 delegate:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_handleTapGestureRecognizer:(id)arg0 ;
-(void)_reloadVisibleTitleItems;
-(void)_updateIconPointerInteractions;
-(void)_updateIconViewShadow:(id)arg0 ;
-(void)_updateIconViewsAndLabels;
-(void)_updateLabels;
-(void)_updateSubtitleLabel;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitleItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif