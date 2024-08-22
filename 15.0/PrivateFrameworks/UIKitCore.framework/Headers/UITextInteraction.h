// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTINTERACTION_H
#define UITEXTINTERACTION_H

@class NSArray, NSString, NSDictionary, UIResponder<UITextInput>;
@protocol UIGestureRecognizerDelegate, UIInteraction, UITextInteraction_AssistantDelegate, UITextInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UITextInteraction.h"
#import "UITextCursorAssertionController.h"
#import "UILongPressGestureRecognizer.h"
#import "_UIStatesFeedbackGenerator.h"
#import "UITextInteractionInputDelegate.h"
#import "UIView.h"

@interface UITextInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>

 {
    UITextInteraction *_parent;
    BOOL _viewOverridesInteractivityState;
}


@property (nonatomic, setter=_setAllowsSelectionCommands:) BOOL _allowsSelectionCommands; // ivar: _allowsSelectionCommands
@property (readonly, nonatomic) UITextCursorAssertionController *_assertionController;
@property (retain, nonatomic) UILongPressGestureRecognizer *_customHighlighterGesture; // ivar: _customHighlighterGesture
@property (weak, nonatomic) NSObject<UITextInteraction_AssistantDelegate> *assistantDelegate; // ivar: _assistantDelegate
@property (readonly, nonatomic) NSArray *children; // ivar: _children
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UITextInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackBehaviour; // ivar: _feedbackBehaviour
@property (readonly, nonatomic) NSDictionary *gestureMap; // ivar: _gestureMap
@property (readonly, nonatomic) NSArray *gestures; // ivar: _gestures
@property (readonly, nonatomic) NSArray *gesturesForFailureRequirements;
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setInGesture:) BOOL inGesture; // ivar: _inGesture
@property (retain, nonatomic) UITextInteractionInputDelegate *interactionInputDelegate; // ivar: _interactionInputDelegate
@property (readonly, weak) UITextInteraction *parent;
@property (readonly, weak) UITextInteraction *root;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIResponder<UITextInput> *textInput; // ivar: _textInput
@property (readonly, nonatomic) NSInteger textInteractionMode; // ivar: _textInteractionMode
@property (readonly, nonatomic) NSInteger textInteractionSet;
@property (weak, nonatomic) UIView *view; // ivar: _view


+(CGFloat)_maximumBeamSnappingLength;
+(id)textInteractionForMode:(NSInteger)arg0 ;
+(id)textInteractionsForSet:(NSInteger)arg0 ;
-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg0 forGestureRecognizer:(id)arg1 ;
-(BOOL)_shouldObscureTextInput;
-(BOOL)containerChangesSelectionOnOneFingerTap;
-(BOOL)currentSelectionContainsPoint:(struct CGPoint )arg0 ;
-(BOOL)doesControlDelegate;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)interaction_gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)selection:(id)arg0 containsPoint:(struct CGPoint )arg1 ;
-(BOOL)shouldAllowWithTouchTypes:(id)arg0 atPoint:(struct CGPoint )arg1 toBegin:(BOOL)arg2 ;
-(BOOL)shouldHandleFormGestureAtLocation:(struct CGPoint )arg0 ;
-(CGFloat)distanceBetweenPoint:(struct CGPoint )arg0 andRects:(id)arg1 ;
-(id)_transientState;
-(id)defaultDoubleTapRecognizerWithAction:(SEL)arg0 ;
-(id)defaultTapRecognizerWithAction:(SEL)arg0 ;
-(id)defaultTripleTapRecognizerWithAction:(SEL)arg0 ;
-(id)init;
-(id)interactionWithClass:(Class)arg0 ;
-(id)interactionWithGestureForName:(id)arg0 ;
-(id)linkInteractionSession;
-(id)rangeWithTextAlternatives:(*id)arg0 atPosition:(id)arg1 ;
-(id)recognizerForName:(id)arg0 ;
-(void)_applyTransientState:(id)arg0 ;
-(void)_callDelegateWillMoveTextRangeExtentAtPoint:(struct CGPoint )arg0 ;
-(void)_cancelRecognizerWithName:(id)arg0 ;
-(void)_cleanUpFeedbackForGesture;
-(void)_createFeedbackIfNecessary;
-(void)_performGestureType:(NSInteger)arg0 state:(NSInteger)arg1 location:(struct CGPoint )arg2 ;
-(void)_performGestureType:(NSInteger)arg0 state:(NSInteger)arg1 location:(struct CGPoint )arg2 locationOfFirstTouch:(struct CGPoint )arg3 ;
-(void)_performGestureType:(NSInteger)arg0 state:(NSInteger)arg1 location:(struct CGPoint )arg2 locationOfFirstTouch:(struct CGPoint )arg3 forTouchType:(NSInteger)arg4 ;
-(void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting:(id)arg0 ;
-(void)_playFeedbackForCursorMovement;
-(void)_prepareFeedbackForGesture;
-(void)_setLinkInteractionSession:(id)arg0 ;
-(void)addChild:(id)arg0 ;
-(void)addGestureRecognizer:(id)arg0 withName:(id)arg1 ;
-(void)cancelLinkInteractionSession;
-(void)didMoveToView:(id)arg0 ;
-(void)disableClearsOnInsertion;
-(void)finishSetup;
-(void)removeChild:(id)arg0 ;
-(void)removeGestureRecognizerWithName:(id)arg0 ;
-(void)updateTextInputSourceForScribbleGesture:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif