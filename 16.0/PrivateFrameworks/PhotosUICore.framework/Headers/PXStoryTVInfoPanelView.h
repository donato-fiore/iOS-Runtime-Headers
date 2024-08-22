// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYTVINFOPANELVIEW_H
#define PXSTORYTVINFOPANELVIEW_H

@class UIView, UIFocusGuide, UIVisualEffectView, UILabel, UIImageView, NSLayoutConstraint, NSString;
@protocol PXChangeObserver, PXGReusableView;


#import "PXDisplayAssetContentView.h"
#import "PXStoryTVInfoPanelButton.h"
#import "PXStoryModel.h"
#import "PXStoryRecipeManager.h"
#import "PXUpdater.h"
#import "PXStoryTVInfoPanelViewConfiguration.h"
#import "PXStoryViewModel.h"

@interface PXStoryTVInfoPanelView : UIView <PXChangeObserver, PXGReusableView>

 {
    UIFocusGuide *_focusGuide;
    UIVisualEffectView *_visualEffectView;
    PXDisplayAssetContentView *_assetView;
    PXStoryTVInfoPanelButton *_infoButton;
    UIView *_assetContainerView;
    UILabel *_titleLabel;
    UIImageView *_musicSymbolView;
    UILabel *_musicLabel;
    UIImageView *_colorGradeSymbolView;
    UILabel *_colorGradeLabel;
    UILabel *_footerLabel;
    NSLayoutConstraint *_panelMarginConstraintLeading;
    NSLayoutConstraint *_panelMarginConstraintTrailing;
    NSLayoutConstraint *_panelMarginConstraintBottom;
    NSLayoutConstraint *_panelHeightConstraint;
    NSLayoutConstraint *_infoButtonLeadingConstraint;
    NSLayoutConstraint *_infoButtonBottomConstraint;
    NSLayoutConstraint *_infoButtonHeightConstraint;
    NSLayoutConstraint *_assetContainerConstraintTop;
    NSLayoutConstraint *_assetContainerConstraintBottom;
    NSLayoutConstraint *_assetContainerConstraintLeading;
    NSLayoutConstraint *_assetContainerConstraintAspectRatio;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSLayoutConstraint *_musicSymbolCenterConstraint;
    NSLayoutConstraint *_colorGradeSymbolCenterConstraint;
    NSLayoutConstraint *_musicLabelLeadingConstraint;
    NSLayoutConstraint *_musicLabelTrailingConstraint;
    NSLayoutConstraint *_titleToMetadataBaselineConstraint;
    NSLayoutConstraint *_musicToColorGradeBaselineConstraint;
    NSLayoutConstraint *_colorGradeLabelLeadingConstraint;
    NSLayoutConstraint *_colorGradeLabelTrailingConstraint;
    NSLayoutConstraint *_footerLabelBaselineConstraint;
    NSLayoutConstraint *_titleLabelLeadingConstraint;
    NSLayoutConstraint *_footerLabelLeadingConstraint;
    NSLayoutConstraint *_titleLabelTrailingConstraint;
    NSLayoutConstraint *_footerLabelTrailingConstraint;
}


@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXStoryModel *mainModel; // ivar: _mainModel
@property (retain, nonatomic) PXStoryRecipeManager *recipeManager; // ivar: _recipeManager
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (copy, nonatomic) PXStoryTVInfoPanelViewConfiguration *userData; // ivar: _userData
@property (retain, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


+(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )convertHostedChildCenter:(struct CGPoint )arg0 fromGlobalLayer:(id)arg1 ;
-(void)_dismiss;
-(void)_invalidateAutolayoutConstraints;
-(void)_invalidateColorGradeLabel;
-(void)_invalidateCompositingFilters;
-(void)_invalidateContentAlpha;
-(void)_invalidateFooterLabel;
-(void)_invalidateKeyAsset;
-(void)_invalidateMainModel;
-(void)_invalidateMusicLabel;
-(void)_invalidateRecipeManager;
-(void)_invalidateTitleLabel;
-(void)_reuseAssetView;
-(void)_setNeedsUpdate;
-(void)_updateAutolayoutConstraints;
-(void)_updateColorGradeLabel;
-(void)_updateCompositingFilters;
-(void)_updateContentAlpha;
-(void)_updateFooterLabel;
-(void)_updateKeyAsset;
-(void)_updateMainModel;
-(void)_updateMusicLabel;
-(void)_updateRecipeManager;
-(void)_updateTitleLabel;
-(void)addHostedLayer:(id)arg0 ;
-(void)addHostedView:(id)arg0 ;
-(void)becomeReusable;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif