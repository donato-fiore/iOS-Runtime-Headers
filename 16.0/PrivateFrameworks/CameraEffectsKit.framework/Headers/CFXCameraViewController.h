// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFXCAMERAVIEWCONTROLLER_H
#define CFXCAMERAVIEWCONTROLLER_H

@class UIViewController, NSString, NSTimer, UIView;
@protocol CFXCaptureViewControllerDelegate, JFXRemoteCommandServerDelegate, CFXEffectBrowserContentPresenterViewControllerDelegate, CFXEffectBrowserViewControllerDelegate, CFXCameraViewControllerDelegate, OS_dispatch_queue;


#import "CFXCameraControlsViewController.h"
#import "CFXCaptureViewController.h"
#import "CFXEffectBrowserViewController.h"
#import "JFXThreadSafeDictionary.h"
#import "JFXPixelRotationSession.h"
#import "JFXMetadataValidator.h"
#import "JFXRemoteCommandServer.h"
#import "CFXThermalPolicyManager.h"

@interface CFXCameraViewController : UIViewController <CFXCaptureViewControllerDelegate, JFXRemoteCommandServerDelegate, CFXEffectBrowserContentPresenterViewControllerDelegate, CFXEffectBrowserViewControllerDelegate>



@property (readonly, nonatomic) NSInteger aspectRatioCrop; // ivar: _aspectRatioCrop
@property (nonatomic) BOOL cameraControlsShown; // ivar: _cameraControlsShown
@property (retain, nonatomic) CFXCameraControlsViewController *cameraControlsViewController; // ivar: _cameraControlsViewController
@property (nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property (readonly, nonatomic) NSInteger captureMode; // ivar: _captureMode
@property (retain, nonatomic) CFXCaptureViewController *captureViewController; // ivar: _captureViewController
@property (nonatomic) BOOL capturingFunCamMedia; // ivar: _capturingFunCamMedia
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CFXCameraViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger devicePosition;
@property (retain, nonatomic) NSString *effectBrowserPresentedAppIdentifier; // ivar: _effectBrowserPresentedAppIdentifier
@property (retain, nonatomic) CFXEffectBrowserViewController *effectBrowserViewController; // ivar: _effectBrowserViewController
@property (retain, nonatomic) NSTimer *effectsInStreamTimer; // ivar: _effectsInStreamTimer
@property (retain, nonatomic) UIView *effectsPickerDrawer;
@property (readonly, nonatomic, getter=isEffectsPickerHidden) BOOL effectsPickerHidden;
@property (retain, nonatomic) UIView *effectsPickerSnapshotContainerView; // ivar: _effectsPickerSnapshotContainerView
@property (readonly, nonatomic) NSInteger effectsState;
@property (nonatomic) NSInteger externalCaptureSessionCameraPosition; // ivar: _externalCaptureSessionCameraPosition
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *externalCaptureSessionInputDeserializationQueue; // ivar: _externalCaptureSessionInputDeserializationQueue
@property (retain, nonatomic) JFXThreadSafeDictionary *externalCaptureSessionInputFrameTimestamps; // ivar: _externalCaptureSessionInputFrameTimestamps
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *externalCaptureSessionInputProcessingQueue; // ivar: _externalCaptureSessionInputProcessingQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *externalCaptureSessionOutputProcessingQueue; // ivar: _externalCaptureSessionOutputProcessingQueue
@property (retain, nonatomic) JFXPixelRotationSession *externalCaptureSessionRotationSession; // ivar: _externalCaptureSessionRotationSession
@property (nonatomic) CGRect externalContentRect; // ivar: _externalContentRect
@property (nonatomic) CGRect externalPresentationRect; // ivar: _externalPresentationRect
@property (readonly, nonatomic) NSInteger flashMode;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger initialFlashMode; // ivar: _initialFlashMode
@property (retain, nonatomic) JFXMetadataValidator *metadataValidator; // ivar: _metadataValidator
@property (readonly, nonatomic) NSInteger mode;
@property (retain, nonatomic) JFXRemoteCommandServer *remoteCommandServer; // ivar: _remoteCommandServer
@property (nonatomic) BOOL showsViewfinder; // ivar: _showsViewfinder
@property (readonly) Class superclass;
@property (retain, nonatomic) CFXThermalPolicyManager *thermalPolicyManager; // ivar: _thermalPolicyManager
@property (nonatomic) CGFloat userInterfaceAlpha;
@property (nonatomic) BOOL usesInternalCaptureSession; // ivar: _usesInternalCaptureSession


+(void)initialize;
+(void)preheatWithWindow:(id)arg0 captureMode:(NSInteger)arg1 devicePosition:(NSInteger)arg2 aspectRatioCrop:(NSInteger)arg3 ;
-(BOOL)allowLandscapeForEffectBrowserViewController:(id)arg0 ;
-(BOOL)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg0 ;
-(BOOL)shouldRotateCellsForDeviceOrientation;
-(CGFloat)effectBrowserViewController:(id)arg0 screenTopBarHeightForWindowBounds:(struct CGRect )arg1 orientation:(NSInteger)arg2 ;
-(id)cameraControlsViewControllerForCaptureViewController:(id)arg0 ;
-(id)initWithCaptureMode:(NSInteger)arg0 ;
-(id)initWithCaptureMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 flashMode:(NSInteger)arg2 aspectRatioCrop:(NSInteger)arg3 ;
-(id)initWithMode:(NSInteger)arg0 ;
-(id)localizedPromptForHidingAnimojiForEffectBrowserViewController:(id)arg0 ;
-(id)selectedAnimojiIdentifierForEffectBrowserViewController:(id)arg0 ;
-(id)selectedFilterIdentifierForEffectBrowserViewController:(id)arg0 ;
-(struct ? )noteOutputFrameWithTimestamp:(struct ? )arg0 ;
-(void)CFX_automationAddEffectWithEffectTypeIdentifier:(id)arg0 identifier:(id)arg1 string:(id)arg2 ;
-(void)JFX_exitAnalytics;
-(void)captureViewController:(id)arg0 didCaptureMediaItem:(id)arg1 ;
-(void)captureViewController:(id)arg0 didChangeEffectComposition:(id)arg1 ;
-(void)captureViewController:(id)arg0 didRenderFrame:(id)arg1 ;
-(void)captureViewController:(id)arg0 presentationRectWasPinchedWithState:(NSInteger)arg1 scale:(CGFloat)arg2 velocity:(CGFloat)arg3 ;
-(void)captureViewController:(id)arg0 switchedToCameraPosition:(NSInteger)arg1 ;
-(void)captureViewControllerCameraFlipButtonWasTapped:(id)arg0 ;
-(void)captureViewControllerDidStartVideoRecording:(id)arg0 ;
-(void)captureViewControllerDidStopVideoRecording:(id)arg0 ;
-(void)captureViewControllerDoneButtonWasTapped:(id)arg0 ;
-(void)captureViewControllerEffectsButtonWasTapped:(id)arg0 ;
-(void)captureViewControllerPresentationRectWasDoubleTapped:(id)arg0 ;
-(void)captureViewControllerStartCaptureSession:(id)arg0 ;
-(void)captureViewControllerStopCaptureSession:(id)arg0 ;
-(void)dealloc;
-(void)effectBrowserViewController:(id)arg0 didDropOverlayEffect:(id)arg1 atScreenLocation:(struct CGPoint )arg2 atScreenSize:(struct CGSize )arg3 rotationAngle:(CGFloat)arg4 ;
-(void)effectBrowserViewController:(id)arg0 didRemoveAllEffectsOfType:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg0 didSelectAppWithIdentifier:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg0 didSelectEffect:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg0 filterPickerPreviewBackgroundImageAtSizeInPixels:(struct CGSize )arg1 completion:(id)arg2 ;
-(void)effectBrowserViewController:(id)arg0 willChangeDockHeight:(CGFloat)arg1 ;
-(void)effectBrowserViewControllerDidStartCaptureSession:(id)arg0 ;
-(void)effectBrowserViewControllerDidStopCaptureSession:(id)arg0 ;
-(void)loadView;
-(void)noteInputFrameWithTimestamp:(CGFloat)arg0 ;
-(void)remoteCommandServer:(id)arg0 didReceiveAddShapeCommandWithIdentifier:(id)arg1 ;
-(void)remoteCommandServer:(id)arg0 didReceiveAddStickerCommandWithData:(id)arg1 offset:(struct CGPoint )arg2 scale:(CGFloat)arg3 rotation:(CGFloat)arg4 ;
-(void)remoteCommandServer:(id)arg0 didReceiveAddStickerCommandWithIdentifier:(id)arg1 offset:(struct CGPoint )arg2 scale:(CGFloat)arg3 rotation:(CGFloat)arg4 ;
-(void)remoteCommandServer:(id)arg0 didReceiveAddTextCommandWithIdentifier:(id)arg1 string:(id)arg2 ;
-(void)remoteCommandServer:(id)arg0 didReceiveRemoveEffectsCommandWithTypeIdentifiers:(id)arg1 ;
-(void)remoteCommandServer:(id)arg0 didReceiveSetAnimojiCommandWithIdentifier:(id)arg1 ;
-(void)remoteCommandServer:(id)arg0 didReceiveSetFilterCommandWithIdentifier:(id)arg1 ;
-(void)remoteCommandServer:(id)arg0 didReceiveSetMemojiCommandWithContentsOfFile:(id)arg1 ;
-(void)removeAllEffects;
-(void)renderFrameWithImageData:(id)arg0 orientation:(NSInteger)arg1 presentationRect:(struct CGRect )arg2 contentsRect:(struct CGRect )arg3 ;
-(void)renderFrameWithImageDataArchive:(id)arg0 imagePixelBuffer:(struct __CVBuffer *)arg1 depthPixelBuffer:(struct __CVBuffer *)arg2 orientation:(NSInteger)arg3 presentationRect:(struct CGRect )arg4 contentsRect:(struct CGRect )arg5 ;
-(void)resign;
-(void)setTransitionState:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)startCaptureSession;
-(void)stopCaptureSession;
-(void)updateUIForVideoRecording:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif