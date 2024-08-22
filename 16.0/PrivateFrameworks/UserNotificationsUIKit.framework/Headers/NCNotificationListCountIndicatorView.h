// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONLISTCOUNTINDICATORVIEW_H
#define NCNOTIFICATIONLISTCOUNTINDICATORVIEW_H

@class UIView, UIButton, SBUILegibilityLabel, _UILegibilitySettings, BSUIFontProvider, UIImageView, NSString;
@protocol NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting, NCNotificationListCountIndicatorViewDelegate;



@interface NCNotificationListCountIndicatorView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting>

 {
    UIButton *_titleLabelButton;
    SBUILegibilityLabel *_titleLabel;
    SBUILegibilityLabel *_notificationCountLabel;
    _UILegibilitySettings *_legibilitySettings;
    BSUIFontProvider *_fontProvider;
    UIImageView *_symbolImageView;
    BOOL _animateLayoutForContentTransition;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationListCountIndicatorViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger notificationCount; // ivar: _notificationCount
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *symbolImageName; // ivar: _symbolImageName
@property (copy, nonatomic) NSString *titleString; // ivar: _titleString


-(BOOL)adjustForContentSizeCategoryChange;
-(id)_fontProvider;
-(id)_newLegibilityLabelWithTitle:(id)arg0 withFont:(id)arg1 ;
-(id)_titleLabelFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_insetBounds;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureNotificationCountLabelIfNecessary;
-(void)_configureSymbolImageViewIfNecessary;
-(void)_configureTitleLabelButtonIfNecessary;
-(void)_configureTitleLabelIfNecessary;
-(void)_invalidateNotificationCountLabelAnimated:(BOOL)arg0 ;
-(void)_invalidateTitleLabelAnimated:(BOOL)arg0 ;
-(void)_layoutNotificationCountLabelIfNecessary;
-(void)_layoutSymbolImageViewIfNecessary;
-(void)_layoutTitleLabelButtonIfNecessary;
-(void)_layoutTitleLabelIfNecessary;
-(void)_titleButtonTapped:(id)arg0 ;
-(void)_updateHighlightingForTitleButton:(id)arg0 ;
-(void)adjustForLegibilitySettingsChange:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif