// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUREDEYETOOLCONTROLLER_H
#define PUREDEYETOOLCONTROLLER_H

@class CEKBadgeTextView, NSArray, UITapGestureRecognizer, NSMutableArray, NSString;
@protocol UIGestureRecognizerDelegate;


#import "PUPhotoEditToolController.h"
#import "PURedeyeToolControllerSpec.h"

@interface PURedeyeToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate>

 {
    CEKBadgeTextView *_instructionLabel;
    NSArray *_instructionLabelConstraints;
    CEKBadgeTextView *_failureLabel;
    NSArray *_failureLabelConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_knownCorrections;
    BOOL _failureAnimationIsInProgress;
    BOOL _isModelChangeLocal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PURedeyeToolControllerSpec *toolControllerSpec;


-(BOOL)_removeCorrectionAtPoint:(struct CGPoint )arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)wantsSecondaryToolbarVisible;
-(BOOL)wantsZoomAndPanEnabled;
-(NSInteger)toolControllerTag;
-(id)centerToolbarView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)localizedName;
-(id)selectedToolbarIcon;
-(id)toolbarIcon;
-(struct CGPoint )_extractRedEyePointFromCorrectionDictionary:(id)arg0 ;
-(void)_animateFailureAppearance;
-(void)_animateInstructionAppearance;
-(void)_correctRedEyeAtPoint:(struct CGPoint )arg0 ;
-(void)_handleRedeyeButton:(id)arg0 ;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_loadCorrectionsFromModelAnimated:(BOOL)arg0 ;
-(void)_showChangeIndicatorAtPoint:(struct CGPoint )arg0 isFailure:(BOOL)arg1 ;
-(void)compositionControllerDidChangeForAdjustments:(id)arg0 ;
-(void)dealloc;
-(void)didBecomeActiveTool;
-(void)didResignActiveTool;
-(void)flashAutoRedEyeCorrections;
-(void)setLayoutOrientation:(NSInteger)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)updateViewConstraints;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif