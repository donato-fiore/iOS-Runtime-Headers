// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINONEDITABLETEXTSELECTIONFORCEGESTURE_H
#define _UINONEDITABLETEXTSELECTIONFORCEGESTURE_H

@class UITextSelectionForceGesture, NSString;
@protocol _UIKeyboardTextSelectionGestureControllerDelegate, _UINonEditableTextSelectionForceGestureDelegate;


#import "_UIKeyboardTextSelectionGestureController.h"
#import "UIKeyboardTaskQueue.h"
#import "_UIKeyboardTextSelectionController.h"

@interface _UINonEditableTextSelectionForceGesture : UITextSelectionForceGesture <_UIKeyboardTextSelectionGestureControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<_UINonEditableTextSelectionForceGestureDelegate> *forceGestureDelegate; // ivar: forceGestureDelegate
@property (retain, nonatomic) _UIKeyboardTextSelectionGestureController *gestureController; // ivar: _gestureController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (retain, nonatomic) _UIKeyboardTextSelectionController *textSelectionController; // ivar: _textSelectionController
@property (readonly, nonatomic) CGFloat timestampOfLastTouchesEnded;


-(BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
-(id)initWithTextInput:(id)arg0 ;
-(void)dealloc;
-(void)willBeginGesture;


@end


#endif