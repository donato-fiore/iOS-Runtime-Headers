// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIKEYBOARDBASEDTEXTSELECTIONINTERACTION_H
#define _UIKEYBOARDBASEDTEXTSELECTIONINTERACTION_H

@class UIKeyboardTextSelectionInteraction;


#import "UITextGestureTuning.h"

@interface _UIKeyboardBasedTextSelectionInteraction : UIKeyboardTextSelectionInteraction

@property (readonly, nonatomic) UITextGestureTuning *gestureTuning; // ivar: _gestureTuning


-(BOOL)enclosingScrollViewIsScrolling;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)owner;
-(void)_createGestureTuningIfNecessary;
-(void)_processGestureForCustomHighlighter:(id)arg0 ;
-(void)beginOneFingerSelectWithTranslation:(struct CGPoint )arg0 executionContext:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToView:(id)arg0 ;
-(void)endOneFingerSelectWithExecutionContext:(id)arg0 ;
-(void)oneFingerForcePan:(id)arg0 ;
-(void)oneFingerForcePress:(id)arg0 ;
-(void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint )arg0 viaDrag:(BOOL)arg1 ;
-(void)updateOneFingerSelectWithTranslation:(struct CGPoint )arg0 executionContext:(id)arg1 ;


@end


#endif