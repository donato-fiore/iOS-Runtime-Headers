// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTNONEDITABLEINTERACTION_H
#define UITEXTNONEDITABLEINTERACTION_H



#import "UITextInteraction.h"

@interface UITextNonEditableInteraction : UITextInteraction {
    NSInteger _mode;
}




-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg0 forGestureRecognizer:(id)arg1 ;
-(BOOL)_shouldAllowOneFingerTapInUneditable:(id)arg0 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithMode:(NSInteger)arg0 ;
-(void)_oneFingerTapInUneditableAcceleratedActionAtLocation:(struct CGPoint )arg0 textInput:(id)arg1 canReplaceText:(BOOL)arg2 ;
-(void)_oneFingerTapInUneditableActionAtLocation:(struct CGPoint )arg0 textInput:(id)arg1 canReplaceText:(BOOL)arg2 modifierFlags:(NSInteger)arg3 ;
-(void)_performGestureType:(NSInteger)arg0 state:(NSInteger)arg1 location:(struct CGPoint )arg2 locationOfFirstTouch:(struct CGPoint )arg3 forTouchType:(NSInteger)arg4 ;
-(void)doubleTapOrTripleTapInUneditable:(id)arg0 ;
-(void)oneFingerTapInUneditable:(id)arg0 ;
-(void)oneFingerTapInUneditableAccelerated:(id)arg0 ;
-(void)toggleSelectionCommands;


@end


#endif