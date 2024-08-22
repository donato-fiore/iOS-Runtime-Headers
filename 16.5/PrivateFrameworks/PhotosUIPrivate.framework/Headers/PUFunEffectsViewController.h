// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUFUNEFFECTSVIEWCONTROLLER_H
#define PUFUNEFFECTSVIEWCONTROLLER_H

@class UIViewController, NSString, CFXReviewViewController;
@protocol PXChangeObserver, CFXReviewViewControllerDelegate, PUOneUpAssetTransitionViewController;


#import "PUReviewScreenControlBar.h"
#import "PUReviewAdjustmentOutput.h"
#import "PUMediaProvider.h"
#import "PUObserverRegistry.h"
#import "PUProgressIndicatorView.h"
#import "PUReviewAsset.h"
#import "PUReviewScreenBarsModel.h"
#import "PUReviewScreenTopBar.h"

@interface PUFunEffectsViewController : UIViewController <PXChangeObserver, CFXReviewViewControllerDelegate, PUOneUpAssetTransitionViewController>



@property (readonly, nonatomic) PUReviewScreenControlBar *controlBar; // ivar: _controlBar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CFXReviewViewController *effectsViewController; // ivar: _effectsViewController
@property (retain, nonatomic) PUReviewAdjustmentOutput *exportAdjustmentOutput; // ivar: _exportAdjustmentOutput
@property (nonatomic) NSUInteger exportCompletion; // ivar: _exportCompletion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger inputAdjustmentBaseVersion; // ivar: _inputAdjustmentBaseVersion
@property (readonly, nonatomic) BOOL inputHasKnownAdjustments; // ivar: _inputHasKnownAdjustments
@property (readonly, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PUObserverRegistry *observerRegistry; // ivar: _observerRegistry
@property (retain, nonatomic, setter=_setProgressIndicatorView:) PUProgressIndicatorView *progressIndicatorView; // ivar: _progressIndicatorView
@property (readonly, nonatomic) PUReviewAsset *reviewAsset; // ivar: _reviewAsset
@property (retain, nonatomic) PUReviewScreenBarsModel *reviewBarsModel; // ivar: _reviewBarsModel
@property (nonatomic, setter=_setShouldHideBars:) BOOL shouldHideBars; // ivar: _shouldHideBars
@property (readonly) Class superclass;
@property (readonly, nonatomic) PUReviewScreenTopBar *topBar; // ivar: _topBar


-(id)_barControlsForModelControls:(id)arg0 transitioning:(BOOL)arg1 ;
-(id)initWithReviewAsset:(id)arg0 mediaProvider:(id)arg1 ;
-(void)_dismissProgressIndicator;
-(void)_exportWithCompletion:(NSUInteger)arg0 ;
-(void)_finishExportingWithMediaItem:(id)arg0 ;
-(void)_handleCompletion:(NSUInteger)arg0 ;
-(void)_handleDidTapDoneButton:(id)arg0 ;
-(void)_handleDidTapEditButton:(id)arg0 ;
-(void)_handleDidTapFunEffectsButton:(id)arg0 ;
-(void)_handleDidTapMarkupButton:(id)arg0 ;
-(void)_handleDidTapRetakeButton:(id)arg0 ;
-(void)_handleDidTapSendButton:(id)arg0 ;
-(void)_handleDismissCompletion;
-(void)_handleExportFailureWithError:(id)arg0 ;
-(void)_handleExportWithCompletion:(NSUInteger)arg0 ;
-(void)_showProgressIndicator;
-(void)_signalCompletion:(NSUInteger)arg0 withSavedAsset:(id)arg1 ;
-(void)_updateBars;
-(void)_updateLayout;
-(void)_updateProgressIndicatorWithProgress:(CGFloat)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)oneUpAssetTransition:(id)arg0 animateTransitionWithContext:(id)arg1 duration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)oneUpAssetTransition:(id)arg0 requestTransitionContextWithCompletion:(id)arg1 ;
-(void)oneUpAssetTransitionDidEnd:(id)arg0 ;
-(void)oneUpAssetTransitionWillBegin:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)reviewViewController:(id)arg0 didFinishExportingMediaItem:(id)arg1 withError:(id)arg2 ;
-(void)reviewViewController:(id)arg0 didProgress:(CGFloat)arg1 exportingMediaItem:(id)arg2 ;
-(void)reviewViewController:(id)arg0 didStartExportingMediaItem:(id)arg1 ;
-(void)reviewViewControllerDidHideUserInterface:(id)arg0 ;
-(void)reviewViewControllerDidShowUserInterface:(id)arg0 ;
-(void)reviewViewControllerEffectsButtonWasTapped:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif