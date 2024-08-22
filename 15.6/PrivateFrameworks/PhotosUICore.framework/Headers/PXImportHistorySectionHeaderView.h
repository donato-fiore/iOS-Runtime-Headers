// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXIMPORTHISTORYSECTIONHEADERVIEW_H
#define PXIMPORTHISTORYSECTIONHEADERVIEW_H

@class UICollectionReusableView, NSString, UIImage, UIImageView, UIControl, UILabel, UITraitCollection, UIButton, UIVisualEffectView;
@protocol PXGReusableView, PXImportHistorySectionHeaderViewDelegate, NSCopying;


#import "PXCuratedLibraryOverlayButton.h"
#import "PXCuratedLibrarySectionHeaderLayoutSpec.h"

@interface PXImportHistorySectionHeaderView : UICollectionReusableView <PXGReusableView>

 {
    ? _delegateFlags;
}


@property (nonatomic) BOOL actionButtonEnabled; // ivar: _actionButtonEnabled
@property (copy, nonatomic) NSString *actionText; // ivar: _actionText
@property (retain, nonatomic) PXCuratedLibraryOverlayButton *backdropActionButton; // ivar: _backdropActionButton
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *backdropButtonSpec; // ivar: _backdropButtonSpec
@property (copy, nonatomic) NSString *backdropViewGroupName; // ivar: _backdropViewGroupName
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (nonatomic) CGFloat backgroundImageAlpha; // ivar: _backgroundImageAlpha
@property (nonatomic) CGFloat backgroundImageOverhang; // ivar: _backgroundImageOverhang
@property (readonly, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (nonatomic) NSUInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) CGFloat baselineToBottomSpacing;
@property (nonatomic) NSUInteger buttonStyle; // ivar: _buttonStyle
@property (nonatomic) CGRect clippingRect;
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) UIControl *currentActionButton;
@property (weak, nonatomic) NSObject<PXImportHistorySectionHeaderViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL inLayoutTransition; // ivar: _inLayoutTransition
@property (readonly, nonatomic) NSInteger layoutMode;
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (copy, nonatomic) NSString *primaryText;
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (copy, nonatomic) NSString *secondaryText;
@property (nonatomic) PXSimpleIndexPath sectionIndexPath; // ivar: _sectionIndexPath
@property (retain, nonatomic) UITraitCollection *selfSizingTraits; // ivar: _selfSizingTraits
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (nonatomic) BOOL showsActionButton; // ivar: _showsActionButton
@property (retain, nonatomic) UILabel *spacerLabel; // ivar: _spacerLabel
@property (nonatomic) BOOL supportsMultipleLinesInCompactLayout; // ivar: _supportsMultipleLinesInCompactLayout
@property (retain, nonatomic) UIButton *systemActionButton; // ivar: _systemActionButton
@property (copy, nonatomic) NSObject<NSCopying> *userData;
@property (readonly, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView
@property (nonatomic) BOOL wantsBackground; // ivar: _wantsBackground


-(BOOL)_disableRasterizeInAnimations;
-(BOOL)_wantsActionButton;
-(CGFloat)heightForSizeClass:(NSInteger)arg0 width:(CGFloat)arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;
-(NSInteger)layoutModeForHorizontalSizeClass:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)traitCollection;
-(void)_actionButtonPressed:(id)arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_updateActionButton;
-(void)_updateActionButtonConfiguration;
-(void)_updateActionButtonEnabledAnimated:(BOOL)arg0 ;
-(void)_updateBackdropActionButton;
-(void)_updateBackdropViewGroupName;
-(void)_updateBackgroundAnimated:(BOOL)arg0 ;
-(void)_updateLabelColors;
-(void)_updateLabelFonts;
-(void)_updateLabelLineNumbers;
-(void)_updateSpacerLabelHiddenState;
-(void)_updateSystemActionButton;
-(void)_updateWithCurrentTraits;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)becomeReusable;
-(void)dealloc;
-(void)didTransitionFromLayout:(id)arg0 toLayout:(id)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willTransitionFromLayout:(id)arg0 toLayout:(id)arg1 ;


@end


#endif