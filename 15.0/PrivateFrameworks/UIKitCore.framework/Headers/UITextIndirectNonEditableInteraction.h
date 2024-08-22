// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTINDIRECTNONEDITABLEINTERACTION_H
#define UITEXTINDIRECTNONEDITABLEINTERACTION_H

@class NSString;
@protocol _UIKeyboardTextSelectionGestureControllerDelegate;


#import "UITextIndirectEditableInteraction.h"
#import "_UIKeyboardTextSelectionController.h"
#import "UIKeyboardTaskQueue.h"

@interface UITextIndirectNonEditableInteraction : UITextIndirectEditableInteraction <_UIKeyboardTextSelectionGestureControllerDelegate>

 {
    _UIKeyboardTextSelectionController *_textSelectionController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController;
@property (readonly, nonatomic) CGFloat timestampOfLastTouchesEnded;


-(BOOL)shouldAllowSelectionGestures:(BOOL)arg0 atPoint:(struct CGPoint )arg1 toBegin:(BOOL)arg2 ;
-(BOOL)shouldAllowWithTouchTypes:(id)arg0 atPoint:(struct CGPoint )arg1 toBegin:(BOOL)arg2 ;
-(id)initWithView:(id)arg0 ;
-(void)_setupControllersIfNecessaryWithView:(id)arg0 ;
-(void)dealloc;
-(void)didEndGesture;
-(void)finishSetup;
-(void)willBeginGesture;


@end


#endif