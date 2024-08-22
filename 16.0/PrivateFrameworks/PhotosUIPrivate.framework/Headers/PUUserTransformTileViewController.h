// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUUSERTRANSFORMTILEVIEWCONTROLLER_H
#define PUUSERTRANSFORMTILEVIEWCONTROLLER_H

@class NSString, NSTimer;
@protocol PUUserTransformViewDelegate, PUAssetViewModelChangeObserver, PUBrowsingViewModelChangeObserver, PXVKImageAnalysisInteractionDelegate, PUUserTransformTileViewControllerDelegate, PXVKImageAnalysisInteraction;


#import "PUTileViewController.h"
#import "PUAssetViewModel.h"
#import "PUBrowsingViewModel.h"
#import "PUDisplayTileTransform.h"
#import "PUUserTransformView.h"

@interface PUUserTransformTileViewController : PUTileViewController <PUUserTransformViewDelegate, PUAssetViewModelChangeObserver, PUBrowsingViewModelChangeObserver, PXVKImageAnalysisInteractionDelegate>

 {
    ? _delegateFlags;
}


@property (readonly, nonatomic) BOOL _allowsVKRemoveBackground;
@property (copy, nonatomic, setter=_setIdentifier:) NSString *_identifier; // ivar: __identifier
@property (nonatomic, setter=_setUntransformedContentFrame:) CGRect _untransformedContentFrame; // ivar: __untransformedContentFrame
@property (retain, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUUserTransformTileViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PUDisplayTileTransform *displayTileTransform; // ivar: _displayTileTransform
@property (readonly, nonatomic) BOOL hasActiveTextSelection;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PXVKImageAnalysisInteraction> *imageInteraction; // ivar: _imageInteraction
@property (readonly, nonatomic) BOOL imageSubjectAnalysisAvailable;
@property (retain, nonatomic) NSTimer *pptVKAnalysWaitingTimer; // ivar: _pptVKAnalysWaitingTimer
@property (readonly) Class superclass;
@property (nonatomic, setter=setUserInteractionEnabled:) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (retain, nonatomic, setter=_setUserTransformView:) PUUserTransformView *userTransformView; // ivar: _userTransformView
@property (nonatomic) BOOL visualImageInteractionEnabled; // ivar: _visualImageInteractionEnabled
@property (nonatomic) NSInteger vkOverlayUpdateToken; // ivar: _vkOverlayUpdateToken


-(BOOL)_needsVisualImageOverlay;
-(BOOL)actionInfoItemExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)dataDetectorExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)imageAnalysisInteraction:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 forAnalysisType:(NSUInteger)arg2 ;
-(BOOL)imageSubjectExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)interactableItemExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)isShowingLivePhotoForImageAnalysisInteraction:(id)arg0 ;
-(BOOL)textExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)userTransformView:(id)arg0 shouldReceiveTouchAtPoint:(struct CGPoint )arg1 ;
-(BOOL)wantsVisibleRectChanges;
-(id)_createVKImageInteractionIfNeeded;
-(id)_userInputOriginIdentifier;
-(id)contentImageForImageAnalysisInteraction:(id)arg0 ;
-(id)contentViewForImageAnalysisInteraction:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)loadView;
-(id)presentingViewControllerForImageAnalysisInteraction:(id)arg0 ;
-(struct CGPoint )_pointInScrollContentViewFromPoint:(struct CGPoint )arg0 ;
-(void)_configureVisualImageOverlay;
-(void)_handleAssetViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_handleBrowsingViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_ppt_fireVKAnalysisWaitingTimer;
-(void)_ppt_resetVKAnalysisWaitingTimer;
-(void)_resetVisualImageOverlay;
-(void)_updateUserInteractionEnabled;
-(void)_updateUserTransformPadding;
-(void)_updateUserTransformView;
-(void)_updateVisualImageOverlay;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)beginImageSubjectAnalysisIfNecessary;
-(void)dealloc;
-(void)didChangeAnimating;
-(void)didChangeVisibleRect;
-(void)imageAnalysisInteraction:(id)arg0 livePhotoShouldPlay:(BOOL)arg1 ;
-(void)ppt_notifyWhenVKAnalysisIsReadyWithTimeout:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)userTransformView:(id)arg0 didChangeIsUserInteracting:(BOOL)arg1 ;
-(void)userTransformView:(id)arg0 didChangeUserAffineTransform:(struct CGAffineTransform )arg1 isUserInteracting:(BOOL)arg2 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif