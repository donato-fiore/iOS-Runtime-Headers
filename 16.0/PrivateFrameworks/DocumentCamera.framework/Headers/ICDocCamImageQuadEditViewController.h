// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMIMAGEQUADEDITVIEWCONTROLLER_H
#define ICDOCCAMIMAGEQUADEDITVIEWCONTROLLER_H

@class UIViewController, UIView, NSLayoutConstraint, UIButton, NSString, UIImage, UIColor, CAShapeLayer, UIBezierPath, UIScrollView, NSNumber, UILabel;
@protocol UIScrollViewDelegate, ICDocCamImageQuadEditOverlayDelegate, DCUnsavedDataDelegate, DCScanDataDelegate;


#import "ICDocCamImageQuadEditImageView.h"
#import "ICDocCamImageQuad.h"
#import "ICDocCamImageQuadEditOverlay.h"

@interface ICDocCamImageQuadEditViewController : UIViewController <UIScrollViewDelegate, ICDocCamImageQuadEditOverlayDelegate, DCUnsavedDataDelegate>



@property (retain, nonatomic) ICDocCamImageQuadEditImageView *backgroundImageView; // ivar: _backgroundImageView
@property (weak, nonatomic) UIView *buttonContainer; // ivar: _buttonContainer
@property (weak, nonatomic) NSLayoutConstraint *buttonContainerHeightConstraint; // ivar: _buttonContainerHeightConstraint
@property (weak, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAdjustQuad; // ivar: _didAdjustQuad
@property (nonatomic) BOOL didCallCompletion; // ivar: _didCallCompletion
@property (nonatomic) BOOL didPressSave; // ivar: _didPressSave
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) ICDocCamImageQuadEditImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL inCaptureMode; // ivar: _inCaptureMode
@property (retain, nonatomic) ICDocCamImageQuad *initialQuad; // ivar: _initialQuad
@property (nonatomic) BOOL invisibleButtonContainer; // ivar: _invisibleButtonContainer
@property (readonly, nonatomic) UIColor *knobColor; // ivar: _knobColor
@property (readonly, nonatomic) CGFloat knobHeight; // ivar: _knobHeight
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) ICDocCamImageQuadEditOverlay *overlay; // ivar: _overlay
@property (retain, nonatomic) CAShapeLayer *overlayMask; // ivar: _overlayMask
@property (retain, nonatomic) UIBezierPath *overlayMaskPath; // ivar: _overlayMaskPath
@property (weak, nonatomic) UIView *placard; // ivar: _placard
@property (retain, nonatomic) ICDocCamImageQuad *quad; // ivar: _quad
@property (weak, nonatomic) UIButton *saveButton; // ivar: _saveButton
@property (readonly, nonatomic) NSObject<DCScanDataDelegate> *scanDataDelegate; // ivar: _scanDataDelegate
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL shouldAdjustForApectFitIfNecessary; // ivar: _shouldAdjustForApectFitIfNecessary
@property (nonatomic) BOOL showImageAsAspectFit; // ivar: _showImageAsAspectFit
@property (retain, nonatomic) NSNumber *startOrientationIsPortrait; // ivar: _startOrientationIsPortrait
@property (readonly) Class superclass;
@property (weak, nonatomic) UILabel *userPromptLabel; // ivar: _userPromptLabel


-(BOOL)_canShowWhileLocked;
-(BOOL)prefersStatusBarHidden;
-(CGFloat)currentZoomFactorForOverlay;
-(id)adjustedQuad;
-(id)finalQuad;
-(id)finalQuadFromOverlay;
-(id)initWithImage:(id)arg0 quad:(id)arg1 scanDataDelegate:(id)arg2 orientation:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(id)quadForOverlay:(id)arg0 ;
-(id)uiInitialQuadForOverlay:(id)arg0 ;
-(id)uiQuadForOverlay:(id)arg0 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(struct CGRect )rectAvailableForDefaultRect;
-(struct CGRect )unitImageRectForOverlayRect:(struct CGRect )arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)callCompletionHandler:(BOOL)arg0 withImage:(id)arg1 quad:(id)arg2 preparingForDismissal:(BOOL)arg3 ;
-(void)cancelButtonPressed:(id)arg0 ;
-(void)centerAndScaleImageInScrollView;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)overlayDidLayout:(id)arg0 ;
-(void)prepareForDismissal;
-(void)saveButtonPressed:(id)arg0 ;
-(void)scanWasDeleted:(id)arg0 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)selectedKnobDidChange:(id)arg0 ;
-(void)selectedKnobDidPanToRect:(struct CGRect )arg0 ;
-(void)setUpImageView;
-(void)setupAccessibility;
-(void)updateButtonTitles;
-(void)updateFonts;
-(void)updateOverlayScrimMask;
-(void)updateToAspectFitIfNecessary;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif