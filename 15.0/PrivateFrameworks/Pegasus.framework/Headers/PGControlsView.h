// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGCONTROLSVIEW_H
#define PGCONTROLSVIEW_H

@class UIActivityIndicatorView, UIView, NSArray, NSString;
@protocol PGButtonViewDelegate;


#import "PGLayoutContainerView.h"
#import "PGControlsViewModel.h"
#import "PGButtonView.h"
#import "PGCABackdropLayerView.h"
#import "PGProgressIndicator.h"
#import "PGPrerollIndicatorView.h"
#import "PGDisplayLink.h"

@interface PGControlsView : PGLayoutContainerView <PGButtonViewDelegate>

 {
    PGControlsViewModel *_viewModel;
    PGButtonView *_restoreButton;
    PGButtonView *_cancelButton;
    PGButtonView *_skipBackButton;
    PGButtonView *_actionButton;
    PGButtonView *_skipForwardButton;
    PGButtonView *_liveIndicatorBadgeButton;
    UIActivityIndicatorView *_contentLoadingIndicator;
    UIView *_contentLoadingIndicatorContainerView;
    PGLayoutContainerView *_hidableItemsLayoutContainerView;
    PGCABackdropLayerView *_captureOnlyView;
    PGProgressIndicator *_progressIndicator;
    PGPrerollIndicatorView *_prerollIndicatorView;
    UIView *_gradientView;
    NSArray *_allButtons;
    NSString *_groupNameBase;
    PGDisplayLink *_displayLinkForProgressUpdates;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL prefersControlsHidden; // ivar: _prefersControlsHidden
@property (readonly) Class superclass;


-(BOOL)PG_preferredVisibilityForView:(id)arg0 ;
-(BOOL)_showsGradientView;
-(id)PG_backdropGroupLeader;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 viewModel:(id)arg1 ;
-(struct CGRect )_prerollIndicatorFrameWithScaling:(CGFloat)arg0 ;
-(struct CGRect )_progressIndicatorFrameWithScaling:(CGFloat)arg0 ;
-(struct CGRect )buttonView:(id)arg0 imageRectForContentRect:(struct CGRect )arg1 proposedRect:(struct CGRect )arg2 ;
-(struct CGRect )buttonView:(id)arg0 titleRectForContentRect:(struct CGRect )arg1 proposedRect:(struct CGRect )arg2 ;
-(struct UIEdgeInsets )buttonView:(id)arg0 contentEdgeInsetsForProposedInsets:(struct UIEdgeInsets )arg1 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)buttonViewDidReceiveTouchUpInside:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)updateControlsAlpha;
-(void)updateControlsHidden;
-(void)updateProgress;
-(void)viewModelDidUpdateValuesFromOldValues:(id)arg0 ;


@end


#endif