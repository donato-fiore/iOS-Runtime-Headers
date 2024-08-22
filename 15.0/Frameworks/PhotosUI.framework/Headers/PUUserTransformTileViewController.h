// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUUSERTRANSFORMTILEVIEWCONTROLLER_H
#define PUUSERTRANSFORMTILEVIEWCONTROLLER_H

@class NSString;
@protocol PUUserTransformViewDelegate, PUAssetViewModelChangeObserver, PUBrowsingViewModelChangeObserver, PXVKImageAnalysisInteractionDelegate, PUUserTransformTileViewControllerDelegate, PXVKImageAnalysis, PXVKImageAnalysisInteraction;


#import "PUTileViewController.h"
#import "PUAssetViewModel.h"
#import "PUBrowsingViewModel.h"
#import "PUDisplayTileTransform.h"
#import "PUUserTransformView.h"

@interface PUUserTransformTileViewController : PUTileViewController <PUUserTransformViewDelegate, PUAssetViewModelChangeObserver, PUBrowsingViewModelChangeObserver, PXVKImageAnalysisInteractionDelegate>

 {
    ? _delegateFlags;
}


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
@property (retain, nonatomic) NSObject<PXVKImageAnalysis> *imageAnalysis; // ivar: _imageAnalysis
@property (retain, nonatomic) NSObject<PXVKImageAnalysisInteraction> *imageInteraction; // ivar: _imageInteraction
@property (readonly) Class superclass;
@property (nonatomic, setter=setUserInteractionEnabled:) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (retain, nonatomic, setter=_setUserTransformView:) PUUserTransformView *userTransformView; // ivar: _userTransformView
@property (nonatomic) BOOL visualImageInteractionEnabled; // ivar: _visualImageInteractionEnabled


-(BOOL)_needsVisualImageOverlay;
-(BOOL)textExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)userTransformView:(id)arg0 shouldReceiveTouchAtPoint:(struct CGPoint )arg1 ;
-(id)_userInputOriginIdentifier;
-(id)contentViewForImageAnalysisInteraction:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)loadView;
-(void)_configureVisualImageOverlay;
-(void)_handleAssetViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_handleBrowsingViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_resetVisualImageOverlay;
-(void)_updateUserInteractionEnabled;
-(void)_updateUserTransformPadding;
-(void)_updateUserTransformView;
-(void)_updateVisualImageOverlay;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)dealloc;
-(void)didChangeAnimating;
-(void)userTransformView:(id)arg0 didChangeIsUserInteracting:(BOOL)arg1 ;
-(void)userTransformView:(id)arg0 didChangeUserAffineTransform:(struct CGAffineTransform )arg1 isUserInteracting:(BOOL)arg2 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif