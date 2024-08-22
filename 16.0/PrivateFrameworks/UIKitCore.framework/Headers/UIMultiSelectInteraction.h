// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIMULTISELECTINTERACTION_H
#define UIMULTISELECTINTERACTION_H

@class NSString, NSArray;
@protocol UIGestureRecognizerDelegate, _UIMultiSelectOneFingerPanGestureDelegate, _UIScrollViewScrollObserver, UIInteraction, UIMultiSelectInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UIKeyCommand.h"
#import "UIPanGestureRecognizer.h"
#import "UITapGestureRecognizer.h"
#import "_UIMultiSelectOneFingerPanGesture.h"
#import "_UISingleFingerTapExtensionGesture.h"
#import "UIBandSelectionInteraction.h"
#import "UIView.h"

@interface UIMultiSelectInteraction : NSObject <UIGestureRecognizerDelegate, _UIMultiSelectOneFingerPanGestureDelegate, _UIScrollViewScrollObserver, UIInteraction>

 {
    BOOL _isScrollView;
    BOOL _delegateConformsToProtocol;
    UIKeyCommand *_extendToCellAboveCommand;
    UIKeyCommand *_extendToCellBelowCommand;
    UIKeyCommand *_extendToCellRightCommand;
    UIKeyCommand *_extendToCellLeftCommand;
    ? _optionalDelegateFlags;
}


@property (retain, nonatomic) UIPanGestureRecognizer *_multiFingerPan; // ivar: _multiFingerPan
@property (retain, nonatomic) UITapGestureRecognizer *_multiFingerTap; // ivar: _multiFingerTap
@property (retain, nonatomic) _UIMultiSelectOneFingerPanGesture *_multiSelectModePan; // ivar: _multiSelectModePan
@property (retain, nonatomic) _UISingleFingerTapExtensionGesture *_singleFingerExtensionTap; // ivar: _singleFingerExtensionTap
@property (readonly, nonatomic) NSInteger activeGestureType; // ivar: _activeGestureType
@property (retain, nonatomic) UIBandSelectionInteraction *bandSelectionInteraction; // ivar: _bandSelectionInteraction
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIMultiSelectInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *gesturesForFailureRequirements;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat singleTouchPanGestureHysteresis;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)_areSelectionExtensionKeyCommandsEnabled;
-(BOOL)_attemptToAutomaticallyTransitionToMultiSelectModeIfNecessaryAtPoint:(struct CGPoint )arg0 withVelocity:(struct CGPoint )arg1 ;
-(BOOL)_isActive;
-(BOOL)_isBandSelectionAllowedAtPoint:(struct CGPoint )arg0 ;
-(BOOL)_isCommandKeyBeingHeldWithGesture:(id)arg0 ;
-(BOOL)_isShiftKeyBeingHeldWithGesture:(id)arg0 ;
-(BOOL)_shouldBeginBandSelectionInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(BOOL)_shouldBeginInteractionWithGestureType:(NSInteger)arg0 location:(struct CGPoint )arg1 velocity:(struct CGPoint )arg2 ;
-(BOOL)_triggeredLegacyPathInsteadForGestureRecognizer:(id)arg0 velocity:(struct CGPoint )arg1 shouldBegin:(*BOOL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)multiSelectOneFingerPanGestureShouldPreventDragInteractionGesture:(id)arg0 ;
-(NSInteger)_gestureTypeForGestureInstance:(id)arg0 ;
-(NSUInteger)_currentExtensionTypeForOneFingerTapGesture:(id)arg0 ;
-(id)_interactionDelegate;
-(id)init;
-(id)keyCommandsForSelectionExtension;
-(void)_askDelegateToAutomaticallyTransitionToMultiSelectModeKeepingSelection:(BOOL)arg0 ;
-(void)_beginCommonPan:(id)arg0 ;
-(void)_beginInteractionWithTrigger:(id)arg0 point:(struct CGPoint )arg1 keepingSelection:(BOOL)arg2 ;
-(void)_beginObservingScrollViewOffsetUpdates;
-(void)_cancelCommonPan:(id)arg0 ;
-(void)_cancelScrollingInScrollView:(id)arg0 ;
-(void)_cancelScrollingInViewForGesture:(id)arg0 ;
-(void)_didInvokeMultiSelectAppendGestureAtLocation:(struct CGPoint )arg0 ;
-(void)_didInvokeMultiSelectExtendGestureAtLocation:(struct CGPoint )arg0 ;
-(void)_endCommonPan:(id)arg0 ;
-(void)_endInteractionAtPoint:(struct CGPoint )arg0 canceled:(BOOL)arg1 ;
-(void)_endObservingScrollViewOffsetUpdates;
-(void)_handleBandSelectionInteraction:(id)arg0 ;
-(void)_handleCommonPanGestureStateChanged:(id)arg0 ;
-(void)_handleKeyboardSelectionExtensionKeyCommand:(id)arg0 ;
-(void)_handleSelectionExtensionTapGesture:(id)arg0 ;
-(void)_multiFingerTapGesture:(id)arg0 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_sendWillBeginInteractionAtPoint:(struct CGPoint )arg0 keepingSelection:(BOOL)arg1 ;
-(void)_updateCommonPan:(id)arg0 ;
-(void)_updateDelegateConformance;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif