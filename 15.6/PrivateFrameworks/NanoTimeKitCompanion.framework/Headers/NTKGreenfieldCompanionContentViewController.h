// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKGREENFIELDCOMPANIONCONTENTVIEWCONTROLLER_H
#define NTKGREENFIELDCOMPANIONCONTENTVIEWCONTROLLER_H

@class BPSWelcomeOptinViewController, NSError, NSNumber, NSString, NSArray, NSSet, ASCLockupView, UIView<BPSWatchViewProtocol>;
@protocol ASCLockupViewDelegate, OS_dispatch_queue, NTKGreenfieldCompanionContentViewControllerDelegate;


#import "NTKGreenfieldDecodedRecipe.h"
#import "NTKGreenfieldHighlightableFaceContainerView.h"

@interface NTKGreenfieldCompanionContentViewController : BPSWelcomeOptinViewController <ASCLockupViewDelegate>

 {
    NSUInteger _state;
    NTKGreenfieldDecodedRecipe *_decodedRecipe;
    NSError *_error;
    NSNumber *_complicationItemId;
    BOOL _canAddFaceDirectly;
    NSString *_addFaceDescription;
    NSArray *_skippedComplicationSlots;
    NSSet *_unavailableSlots;
    NSString *_unavailableTitle;
    NSString *_unavailableDescription;
    ASCLockupView *_appStoreView;
    BOOL _lockupViewStateDidChange;
    BOOL _lockupViewDidUpdateStateForInstallingOrOpenable;
    UIView<BPSWatchViewProtocol> *_watchView;
    NTKGreenfieldHighlightableFaceContainerView *_faceView;
    NSInteger _installMode;
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<NTKGreenfieldCompanionContentViewControllerDelegate> *greenfieldDelegate; // ivar: _greenfieldDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_deviceSizeForCLKDeviceSizeClass:(NSUInteger)arg0 ;
-(id)_errorSubtitleForError:(id)arg0 ;
-(id)_errorTitleForError:(id)arg0 ;
-(id)alternateButtonTitle;
-(id)detailString;
-(id)initAddComplicationStateWithDecodedRecipe:(id)arg0 complicationItemId:(id)arg1 installMode:(NSInteger)arg2 skippedComplicationSlots:(id)arg3 ;
-(id)initCompletedStateWithDecodedRecipe:(id)arg0 skippedComplicationSlots:(id)arg1 canRevisit:(BOOL)arg2 ;
-(id)initComplicationNotAvailableStateWithDecodedRecipe:(id)arg0 unavailableSlots:(id)arg1 unavailableTitle:(id)arg2 unavailableDescription:(id)arg3 ;
-(id)initStartStateWithDecodedRecipe:(id)arg0 canAddFaceDirectly:(BOOL)arg1 addFaceDescription:(id)arg2 ;
-(id)initWithError:(id)arg0 decodedRecipe:(id)arg1 ;
-(id)presentingViewControllerForLockupView:(id)arg0 ;
-(id)suggestedButtonTitle;
-(id)titleString;
-(struct CGPoint )_watchScreenInsetForDeviceSize:(NSUInteger)arg0 screenScale:(CGFloat)arg1 ;
-(struct CGSize )_watchScreenSizeForDeviceSize:(NSUInteger)arg0 screenScale:(CGFloat)arg1 ;
-(void)_didTapAddToMyFacesButton;
-(void)_didTapShowInternalErrorButton;
-(void)_installLocallyAvailableApp;
-(void)_overrideLockup:(id)arg0 withButtonTitle:(id)arg1 buttonAction:(id)arg2 ;
-(void)_presentErrorUIAlert;
-(void)_reinstallAppWithAdamId:(id)arg0 ;
-(void)_reinstallSystemAppWithBundleId:(id)arg0 ;
-(void)_setupContentView;
-(void)_setupContentViewForWatchFaceNotAvailableError;
-(void)_setupWatchFaceViewContainerWithView:(id)arg0 deviceSize:(NSUInteger)arg1 deviceMaterial:(NSUInteger)arg2 ;
-(void)_updateComplicationDisplayStates;
-(void)alternateButtonPressed:(id)arg0 ;
-(void)lockupView:(id)arg0 appStateDidChange:(id)arg1 ;
-(void)lockupViewDidFinishRequest:(id)arg0 ;
-(void)refreshViews;
-(void)suggestedButtonPressed:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif