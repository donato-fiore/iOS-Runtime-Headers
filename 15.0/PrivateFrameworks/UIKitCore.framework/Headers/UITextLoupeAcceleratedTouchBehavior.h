// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTLOUPEACCELERATEDTOUCHBEHAVIOR_H
#define UITEXTLOUPEACCELERATEDTOUCHBEHAVIOR_H

@class NSString;
@protocol UITextLoupeInteractionBehaviorDelegate;

#import <Foundation/Foundation.h>

#import "UITextRange.h"
#import "_UIKeyboardTextSelectionController.h"
#import "UITextModernLoupeSession.h"

@interface UITextLoupeAcceleratedTouchBehavior : NSObject <UITextLoupeInteractionBehaviorDelegate>

 {
    UITextRange *_originalTextRange;
    _UIKeyboardTextSelectionController *_activeSelectionController;
    UITextModernLoupeSession *_loupeSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)loupeGestureRecognizerShouldBegin:(id)arg0 forTextLoupeInteraction:(id)arg1 ;
-(BOOL)shouldAllowEnforcedTouchTypeForTouch:(id)arg0 forGestureRecognizer:(id)arg1 ;
-(BOOL)triggeredByLongPressGesture:(id)arg0 ;
-(BOOL)usesTouchAlignment;
-(Class)gestureRecognizerClassForLoupeInteraction:(id)arg0 ;
-(struct CGPoint )startPointForLoupeGesture:(id)arg0 ;
-(struct CGPoint )translationInView:(id)arg0 forLoupeGesture:(id)arg1 ;
-(struct CGPoint )velocityInView:(id)arg0 forLoupeGesture:(id)arg1 ;
-(void)adjustVariableDelaySettingsForLoupeInteraction:(id)arg0 ;
-(void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)arg0 ;
-(void)configureLoupeGestureRecognizer:(id)arg0 forTextLoupeInteraction:(id)arg1 ;
// -(void)textLoupeInteraction:(id)arg0 gestureChangedWithState:(NSInteger)arg1 location:(id)arg2 translation:(unk)arg3 velocity:(id)arg4 modifierFlags:(unk)arg5 shouldCancel:(id)arg6  ;


@end


#endif