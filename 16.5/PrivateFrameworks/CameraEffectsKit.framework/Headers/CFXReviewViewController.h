// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFXREVIEWVIEWCONTROLLER_H
#define CFXREVIEWVIEWCONTROLLER_H

@class UIViewController, NSData, NSString, UIView;
@protocol CFXPreviewViewControllerDelegate, CFXEffectBrowserContentPresenterViewControllerDelegate, CFXEffectBrowserViewControllerDelegate, CFXReviewViewControllerDelegate, OS_dispatch_group;


#import "CFXEffectBrowserViewController.h"
#import "CFXPreviewViewController.h"
#import "CFXMediaItem.h"
#import "CFXReviewControlsViewController.h"

@interface CFXReviewViewController : UIViewController <CFXPreviewViewControllerDelegate, CFXEffectBrowserContentPresenterViewControllerDelegate, CFXEffectBrowserViewControllerDelegate>



@property (readonly, copy, nonatomic) NSData *adjustmentsData;
@property (readonly, nonatomic) NSData *animojiMetadata;
@property (retain, nonatomic) NSData *animojiMetadata_metadata; // ivar: _animojiMetadata_metadata
@property (nonatomic) NSInteger cameraModeUsedForCapture; // ivar: _cameraModeUsedForCapture
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CFXReviewViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *effectBrowserPresentedAppIdentifier; // ivar: _effectBrowserPresentedAppIdentifier
@property (retain, nonatomic) CFXEffectBrowserViewController *effectBrowserViewController; // ivar: _effectBrowserViewController
@property (retain, nonatomic) UIView *effectsPickerDrawer;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CFXPreviewViewController *internalPreviewViewController; // ivar: _internalPreviewViewController
@property (readonly, nonatomic) NSInteger mediaCaptureDevicePosition;
@property (readonly, nonatomic) BOOL mediaCapturedInFunCam;
@property (nonatomic) BOOL mediaCapturedInFunCam_metadata; // ivar: _mediaCapturedInFunCam_metadata
@property (nonatomic) NSInteger mediaInterfaceOrientationForDisplay_metadata; // ivar: _mediaInterfaceOrientationForDisplay_metadata
@property (retain, nonatomic) CFXMediaItem *mediaItem; // ivar: _mediaItem
@property (readonly, nonatomic) BOOL mediaItemRequiresExport;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *metadataReaderGroup; // ivar: _metadataReaderGroup
@property (retain, nonatomic) CFXReviewControlsViewController *reviewControlsViewController; // ivar: _reviewControlsViewController
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)allowLandscapeForEffectBrowserViewController:(id)arg0 ;
-(BOOL)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg0 ;
-(CGFloat)effectBrowserViewController:(id)arg0 screenTopBarHeightForWindowBounds:(struct CGRect )arg1 orientation:(NSInteger)arg2 ;
-(NSInteger)calculateMediaInterfaceOrientationForDisplay;
-(id)initWithMediaItem:(id)arg0 ;
-(id)localizedPromptForHidingAnimojiForEffectBrowserViewController:(id)arg0 ;
-(id)mediaItemForEffectBrowserViewController:(id)arg0 ;
-(id)preferredDisplayColorSpace;
-(id)preferredExportColorSpace;
-(id)selectedAnimojiIdentifierForEffectBrowserViewController:(id)arg0 ;
-(id)selectedAppIdentifierForPreviewViewController:(id)arg0 ;
-(id)selectedFilterIdentifierForEffectBrowserViewController:(id)arg0 ;
-(void)CFX_resetAndLoadPreviewViewController;
-(void)CFX_updateAnalyticsForSentMediaItem:(id)arg0 ;
-(void)effectBrowserViewController:(id)arg0 didDismissPickerForEffectType:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg0 didDropOverlayEffect:(id)arg1 atScreenLocation:(struct CGPoint )arg2 atScreenSize:(struct CGSize )arg3 rotationAngle:(CGFloat)arg4 ;
-(void)effectBrowserViewController:(id)arg0 didPresentPickerForEffectType:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg0 didRemoveAllEffectsOfType:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg0 didSelectAppWithIdentifier:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg0 didSelectEffect:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg0 filterPickerPreviewBackgroundImageAtSizeInPixels:(struct CGSize )arg1 completion:(id)arg2 ;
-(void)effectBrowserViewController:(id)arg0 willChangeDockHeight:(CGFloat)arg1 ;
-(void)exportMediaItemToFileURL:(id)arg0 ;
-(void)loadView;
-(void)previewViewController:(id)arg0 didFinishExportingMediaItem:(id)arg1 withError:(id)arg2 ;
-(void)previewViewController:(id)arg0 didProgress:(CGFloat)arg1 exportingMediaItem:(id)arg2 ;
-(void)previewViewController:(id)arg0 didStartExportingMediaItem:(id)arg1 ;
-(void)previewViewControllerDidHideUserInterface:(id)arg0 ;
-(void)previewViewControllerDidShowUserInterface:(id)arg0 ;
-(void)previewViewControllerDidStartEditingText:(id)arg0 ;
-(void)previewViewControllerDidStopEditingText:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif