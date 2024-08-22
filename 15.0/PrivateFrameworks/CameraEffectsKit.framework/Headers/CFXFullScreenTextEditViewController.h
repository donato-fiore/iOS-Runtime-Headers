// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFXFULLSCREENTEXTEDITVIEWCONTROLLER_H
#define CFXFULLSCREENTEXTEDITVIEWCONTROLLER_H

@class UIViewController, NSString, UIView;
@protocol CFXEffectEditorViewDelegate, CFXFullScreenTextEditViewControllerDelegate;


#import "JFXOverlayEffectDebugViewOptions.h"
#import "CFXEffectEditorView.h"
#import "CFXEffect.h"

@interface CFXFullScreenTextEditViewController : UIViewController <CFXEffectEditorViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) JFXOverlayEffectDebugViewOptions *debugOptions; // ivar: _debugOptions
@property (retain, nonatomic) UIView *debugView; // ivar: _debugView
@property (readonly, weak, nonatomic) NSObject<CFXFullScreenTextEditViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (retain, nonatomic) CFXEffectEditorView *effectEditor; // ivar: _effectEditor
@property (nonatomic) CGRect effectEditorFrameRelativeToScreen; // ivar: _effectEditorFrameRelativeToScreen
@property (nonatomic) BOOL effectWasRemoved; // ivar: _effectWasRemoved
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL insertingEffect; // ivar: _insertingEffect
@property (nonatomic) BOOL isRunningAnimation; // ivar: _isRunningAnimation
@property (readonly) Class superclass;
@property (readonly, nonatomic) CFXEffect *textEffect; // ivar: _textEffect
@property (retain, nonatomic) CFXEffect *workingEffect; // ivar: _workingEffect


+(BOOL)displayFullScreenTextEditorForEffect:(id)arg0 inViewController:(id)arg1 delegate:(id)arg2 cameraViewWindowFrame:(struct CGRect )arg3 insertingEffect:(BOOL)arg4 ;
+(BOOL)isFullScreenTextEditorPresented;
+(id)CFX_fadeTimingParameters;
+(void)notifyCameraViewWindowFrameChanged:(struct CGRect )arg0 ;
+(void)removeFullScreenTextEditor;
+(void)resign;
-(BOOL)effectEditorView:(id)arg0 isEffectAtPoint:(struct CGPoint )arg1 effect:(id)arg2 ;
-(BOOL)effectEditorView:(id)arg0 isFaceTrackingDataAvailableForEffect:(id)arg1 ;
-(BOOL)effectEditorView:(id)arg0 isFaceTrackingEffect:(id)arg1 ;
-(BOOL)effectEditorView:(id)arg0 shouldDisableEditingAnimationForEffect:(id)arg1 ;
-(BOOL)effectEditorView:(id)arg0 shouldEditTextForEffect:(id)arg1 ;
-(BOOL)effectEditorViewShouldPreviewEditEffect:(id)arg0 ;
-(CGFloat)effectEditorView:(id)arg0 durationForBeginEditingAnimationForEffect:(id)arg1 ;
-(CGFloat)effectEditorView:(id)arg0 durationForEndEditingAnimationForEffect:(id)arg1 ;
-(NSUInteger)effectEditorView:(id)arg0 maximumTextLengthForEffect:(id)arg1 ;
-(id)effectEditorView:(id)arg0 beginEditingAnimationFromFrameForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(id)effectEditorView:(id)arg0 beginEditingAnimationToFrameForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(id)effectEditorView:(id)arg0 calculateAnimatedFaceTrackingTransformWithCurrentFaceTrackingDataFromTrackingType:(NSInteger)arg1 interpolatedWithFaceTrackingTransform:(id)arg2 toTrackingType:(NSInteger)arg3 atAnimationProgress:(float)arg4 ;
-(id)effectEditorView:(id)arg0 effectAtPoint:(struct CGPoint )arg1 ;
-(id)effectEditorView:(id)arg0 endEditingAnimationFromFrameForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(id)effectEditorView:(id)arg0 endEditingAnimationToFrameForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(id)effectEditorView:(id)arg0 overlayEffectFrameForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(id)effectEditorView:(id)arg0 textEditingPropertiesForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(id)effectEditorView:(id)arg0 textForEffect:(id)arg1 ;
-(id)initWithTextEffect:(id)arg0 CGSize:(struct CGRect )arg1 insertingEffect:(BOOL)arg2 delegate:(id)arg3 ;
-(struct CGPoint )effectEditorView:(id)arg0 removeButtonPositionForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(struct CGPoint )effectEditorView:(id)arg0 spacingBetweenCenterPointOfEffect:(id)arg1 point:(struct CGPoint )arg2 relativeToBounds:(struct CGRect )arg3 ;
-(struct CGRect )effectEditorView:(id)arg0 frameForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(struct CGRect )effectEditorView:(id)arg0 hitAreaBoundingFrameForEffect:(id)arg1 adjustForMinimumSize:(BOOL)arg2 relativeToBounds:(struct CGRect )arg3 ;
-(void)CFX_animateWithDuration:(CGFloat)arg0 animatingIn:(BOOL)arg1 completion:(id)arg2 ;
-(void)configureWorkingEffect;
-(void)dealloc;
-(void)didTappedEmptyDimmedArea:(id)arg0 ;
-(void)effectEditorView:(id)arg0 applyAnimationTransformsToEffect:(id)arg1 transforms:(id)arg2 ;
-(void)effectEditorView:(id)arg0 didBeginEditingTextForEffect:(id)arg1 ;
-(void)effectEditorView:(id)arg0 didCompleteBeginEditingAnimationForEffect:(id)arg1 ;
-(void)effectEditorView:(id)arg0 didCompleteEndEditingAnimationForEffect:(id)arg1 completion:(id)arg2 ;
-(void)effectEditorView:(id)arg0 didEditTextForEffect:(id)arg1 newText:(id)arg2 ;
-(void)effectEditorView:(id)arg0 didEndEditingTextForEffect:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(void)effectEditorView:(id)arg0 didRemoveEffect:(id)arg1 ;
-(void)effectEditorView:(id)arg0 didStartBeginEditingAnimationForEffect:(id)arg1 completion:(id)arg2 ;
-(void)effectEditorView:(id)arg0 didStartEndEditingAnimationForEffect:(id)arg1 ;
-(void)effectEditorView:(id)arg0 didTransformEffect:(id)arg1 transform:(struct CGAffineTransform )arg2 relativeToBounds:(struct CGRect )arg3 ;
-(void)effectEditorView:(id)arg0 willBeginAnimationAfterEditingEffect:(id)arg1 ;
-(void)effectEditorView:(id)arg0 willBeginAnimationBeforeEditingEffect:(id)arg1 ;
-(void)effectEditorViewDidBeginEditing:(id)arg0 ;
-(void)effectEditorViewDidEndEditing:(id)arg0 ;
-(void)keyboardDidHide:(id)arg0 ;
-(void)scaleTextToFitTextEditingBounds:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif