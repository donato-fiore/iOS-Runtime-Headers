// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCACTIONINFOVIEW_H
#define VKCACTIONINFOVIEW_H

@class NSArray, UIView;


#import "VKPlatformView.h"
#import "VKCActionInfoViewLayoutContext.h"
#import "VKImageAnalysisButton.h"
#import "VKCActionInfoButton.h"
#import "VKCVisualSearchCornerView.h"

@interface VKCActionInfoView : VKPlatformView

@property (nonatomic) BOOL _quickActionsHidden; // ivar: __quickActionsHidden
@property (nonatomic) BOOL alignQuickActionsWithVerticalCenter; // ivar: _alignQuickActionsWithVerticalCenter
@property (readonly, nonatomic) NSArray *allViews;
@property (nonatomic) BOOL automaticVisualRectLayoutDisabled; // ivar: _automaticVisualRectLayoutDisabled
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (nonatomic) BOOL isShowingSingleTapMoreButtonMenu; // ivar: _isShowingSingleTapMoreButtonMenu
@property (retain, nonatomic) VKCActionInfoViewLayoutContext *layoutContext; // ivar: _layoutContext
@property (nonatomic) BOOL layoutUpdatesSuspended; // ivar: _layoutUpdatesSuspended
@property (retain, nonatomic) VKImageAnalysisButton *liveTextButton; // ivar: _liveTextButton
@property (nonatomic) BOOL liveTextButtonDisabled; // ivar: _liveTextButtonDisabled
@property (retain, nonatomic) VKCActionInfoButton *moreButton; // ivar: _moreButton
@property (retain, nonatomic) UIView *moreButtonContainer; // ivar: _moreButtonContainer
@property (nonatomic) CGRect normalizedVisibleRect; // ivar: _normalizedVisibleRect
@property (nonatomic) CGFloat preferredQuickActionButtonHeight; // ivar: _preferredQuickActionButtonHeight
@property (copy, nonatomic) id *quickActionConfigurationUpdateHandler; // ivar: _quickActionConfigurationUpdateHandler
@property (copy, nonatomic) NSArray *quickActions; // ivar: _quickActions
@property (nonatomic) BOOL quickActionsDisabled; // ivar: _quickActionsDisabled
@property (nonatomic) BOOL shouldAnimateQuickActionVisibilityChanges; // ivar: _shouldAnimateQuickActionVisibilityChanges
@property (retain, nonatomic) UIView *textButtonContainer; // ivar: _textButtonContainer
@property (readonly, nonatomic) CGRect visibleImageRect;
@property (retain, nonatomic) UIView *visualSearchContainer; // ivar: _visualSearchContainer
@property (retain, nonatomic) VKCVisualSearchCornerView *visualSearchCornerView; // ivar: _visualSearchCornerView
@property (nonatomic) BOOL visualSearchCornerViewDisabled; // ivar: _visualSearchCornerViewDisabled
@property (nonatomic) BOOL wantsTranslucentActionInfoButtons; // ivar: _wantsTranslucentActionInfoButtons


-(BOOL)containsInteractableItemAtPoint:(struct CGPoint )arg0 ;
-(BOOL)isInteractableView:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(id)buildMoreButtonMenuFromQuickActions:(id)arg0 moreButton:(id)arg1 ;
-(id)configureView:(id)arg0 isLeading:(BOOL)arg1 container:(id)arg2 layoutContext:(id)arg3 ;
-(id)createContainerForView:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithLiveTextButton:(id)arg0 cornerView:(id)arg1 ;
-(struct CGSize )sizeForView:(id)arg0 scale:(CGFloat)arg1 ;
-(void)_applyConfigurationUpdateHandlerToQuickActions;
-(void)adjustContextToFitWidth:(id)arg0 ;
-(void)layoutContainerView;
-(void)layoutSubviews;
-(void)processView:(id)arg0 hasContent:(BOOL)arg1 isLeading:(BOOL)arg2 layoutContext:(id)arg3 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)showMoreButtonMenu:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFramesForContext:(id)arg0 ;
-(void)updateLayoutIfNecessary;
-(void)updateMoreButtonMenuForContext:(id)arg0 ;


@end


#endif