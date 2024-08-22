// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFXEFFECTEDITORVIEW_H
#define CFXEFFECTEDITORVIEW_H

@class UIView, NSMutableArray, NSString, CADisplayLink, UIButton;
@protocol UIGestureRecognizerDelegate, CFXTextEffectEditorViewDelegate, JFXOverlayEffectDebugViewDelegate, CFXEffectEditorViewDelegate, OS_dispatch_queue;


#import "JFXOverlayEffectDebugView.h"
#import "CFXEffect.h"
#import "JFXImageView.h"
#import "JFXOverlayEffectAnimationView.h"
#import "CFXFaceReticleView.h"
#import "JFXEffectsPreviewGenerator.h"
#import "CFXTextEffectEditorView.h"

@interface CFXEffectEditorView : UIView <UIGestureRecognizerDelegate, CFXTextEffectEditorViewDelegate, JFXOverlayEffectDebugViewDelegate>

 {
    BOOL _displayLinkBusyOnRenderQueue;
    BOOL _isRenderingEditEffect;
    BOOL _isRenderPendingForEditEffect;
}


@property (nonatomic) NSUInteger appliedEditingGestures; // ivar: _appliedEditingGestures
@property (retain, nonatomic) NSMutableArray *beginEditingCompletionBlocks; // ivar: _beginEditingCompletionBlocks
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CADisplayLink *debugDisplayLink; // ivar: _debugDisplayLink
@property (retain, nonatomic) JFXOverlayEffectDebugView *debugOverlayView; // ivar: _debugOverlayView
@property (readonly, nonatomic) NSObject<CFXEffectEditorViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL delegateSupportsApplyAnimationTransformsToEffect; // ivar: _delegateSupportsApplyAnimationTransformsToEffect
@property (readonly, nonatomic) BOOL delegateSupportsCalculatingAnimatedFaceTrackingTransform; // ivar: _delegateSupportsCalculatingAnimatedFaceTrackingTransform
@property (readonly, nonatomic) BOOL delegateSupportsDidMoveEffect; // ivar: _delegateSupportsDidMoveEffect
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (retain, nonatomic) CADisplayLink *editControlsTrackingDisplayLink; // ivar: _editControlsTrackingDisplayLink
@property (retain, nonatomic) CFXEffect *editEffect; // ivar: _editEffect
@property (retain, nonatomic) JFXImageView *editEffectPreview; // ivar: _editEffectPreview
@property (nonatomic) CGAffineTransform editTransform; // ivar: _editTransform
@property (retain, nonatomic) CADisplayLink *effectAnimationDisplayLink; // ivar: _effectAnimationDisplayLink
@property (retain, nonatomic) JFXOverlayEffectAnimationView *effectAnimationView; // ivar: _effectAnimationView
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *effectRenderingQueue; // ivar: _effectRenderingQueue
@property (nonatomic) BOOL effectWasEdited; // ivar: _effectWasEdited
@property (retain, nonatomic) NSMutableArray *endEditingCompletionBlocks; // ivar: _endEditingCompletionBlocks
@property (retain, nonatomic) CFXFaceReticleView *faceTrackingReticle; // ivar: _faceTrackingReticle
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBeginningEditing; // ivar: _isBeginningEditing
@property (nonatomic) BOOL isEditing; // ivar: _isEditing
@property (nonatomic) BOOL isEndingEditing; // ivar: _isEndingEditing
@property (nonatomic) BOOL isTextEditing; // ivar: _isTextEditing
@property (nonatomic) CGFloat lastEffectMovedNotifyTime; // ivar: _lastEffectMovedNotifyTime
@property (nonatomic) CGFloat lastFaceRectacleUpdateTime; // ivar: _lastFaceRectacleUpdateTime
@property (nonatomic) CGPoint lastSpacingBetweenTouchAndCenterOfEffect; // ivar: _lastSpacingBetweenTouchAndCenterOfEffect
@property (nonatomic) CGPoint lastTouchLocation; // ivar: _lastTouchLocation
@property (nonatomic) NSUInteger maximumTextLength; // ivar: _maximumTextLength
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) NSString *oldEditText; // ivar: _oldEditText
@property (retain, nonatomic) JFXEffectsPreviewGenerator *previewGenerator; // ivar: _previewGenerator
@property (retain, nonatomic) UIButton *removeButton; // ivar: _removeButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect textEditingFrame;
@property (retain, nonatomic) CFXTextEffectEditorView *textEditorView; // ivar: _textEditorView
@property (nonatomic) BOOL truncateTextToMaximumLength; // ivar: _truncateTextToMaximumLength


-(BOOL)CFX_isPreviewingEditEffect;
-(BOOL)CFX_isRemoveAlwaysAvailableInCurrentMode;
-(BOOL)CFX_isRemoveAvailableInCurrentMode;
-(BOOL)CFX_updateOverlayForTranslation;
-(BOOL)CFX_updateTrackingTypeForTouchLocation;
-(BOOL)CFX_useFaceReticle;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)textEffectEditorView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(id)CFX_getTextEditingProperties;
-(id)CFX_springForTextEditAnimation;
-(id)initWithMode:(NSUInteger)arg0 delegate:(id)arg1 ;
-(id)overlayEffectDebugViewOptions;
-(void)CFX_addBeginEditingCompletionBlock:(id)arg0 ;
-(void)CFX_addEndEditingCompletionBlock:(id)arg0 ;
-(void)CFX_applyEffectAnimationView:(BOOL)arg0 ;
-(void)CFX_applyEffectTransformChanges;
-(void)CFX_beginEditingEffect:(id)arg0 isAnimating:(BOOL)arg1 ;
-(void)CFX_beginPreviewingEditEffect;
-(void)CFX_beginTextEditing;
-(void)CFX_effectAnimationDisplayLinkFired:(id)arg0 ;
-(void)CFX_effectPreviewBoundsDidChange;
-(void)CFX_endEditingEffect;
-(void)CFX_endPreviewingEditEffect;
-(void)CFX_endTextEditing:(BOOL)arg0 ;
-(void)CFX_forceHideEditControls;
-(void)CFX_hideEditControls;
-(void)CFX_hideEditControls:(BOOL)arg0 ;
-(void)CFX_performTextEditOnlyModeEnterAnimationWithCompletionBlock:(id)arg0 ;
-(void)CFX_performTextEditOnlyModeExitAnimationWithCompletionBlock:(id)arg0 ;
-(void)CFX_previewEditEffectIfNeeded;
-(void)CFX_removeEffect;
-(void)CFX_rotateEffect:(CGFloat)arg0 ;
-(void)CFX_scaleEffect:(CGFloat)arg0 ;
-(void)CFX_setUserInteractionEnabledIfPossible:(BOOL)arg0 ;
-(void)CFX_setupControls;
-(void)CFX_setupGestures;
-(void)CFX_showEditControls;
-(void)CFX_startApplyingEffectAnimationViewDisplayLink;
-(void)CFX_startTrackingExternalEffectChanges;
-(void)CFX_stopApplyingEffectAnimationViewDisplayLink;
-(void)CFX_stopTrackingExternalEffectChanges;
-(void)CFX_updateEditControlsLayout;
-(void)CFX_updateEffectText:(id)arg0 updateTextProperties:(BOOL)arg1 ;
-(void)CFX_updateExternalEffectTrackingRunningState;
-(void)CFX_updateSpacingBetweenTouchAndCenterOfEffectWithGesture:(id)arg0 ;
-(void)CFX_updateTextEditFieldLayout;
-(void)beginEditingEffect:(id)arg0 ;
-(void)beginEditingEffect:(id)arg0 animated:(BOOL)arg1 withCompletionBlock:(id)arg2 ;
-(void)beginTextEditing;
-(void)dealloc;
-(void)didPan:(id)arg0 ;
-(void)didPinch:(id)arg0 ;
-(void)didRotate:(id)arg0 ;
-(void)didTap:(id)arg0 ;
-(void)endEditingAnimated:(BOOL)arg0 withCompletionBlock:(id)arg1 ;
-(void)endTextEditing:(BOOL)arg0 ;
-(void)externalEffectTrackingDisplayLinkFired:(id)arg0 ;
-(void)handlePanGesture:(id)arg0 ;
-(void)handlePinchGesture:(id)arg0 ;
-(void)handleRotateGesture:(id)arg0 ;
-(void)initializeAvailabilityOfFrequentCalledDelegateMethods;
-(void)layoutSubviews;
-(void)notifyEffectTrackingDidChangeToType:(NSInteger)arg0 ;
-(void)notifyEffectTransformDidChange;
-(void)onDebugDisplayLink:(id)arg0 ;
-(void)startUpdatingDebugOverlayView;
-(void)stopUpdatingDebugOverlayView;
-(void)tapRemoveButton:(id)arg0 ;
-(void)textEffectEditorView:(id)arg0 textChanged:(id)arg1 shouldUpdateTextEditingProperties:(BOOL)arg2 ;


@end


#endif