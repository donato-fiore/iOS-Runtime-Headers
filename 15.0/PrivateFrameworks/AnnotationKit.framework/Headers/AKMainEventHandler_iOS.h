// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKMAINEVENTHANDLER_IOS_H
#define AKMAINEVENTHANDLER_IOS_H

@class NSString, UITapGestureRecognizer, UILongPressGestureRecognizer;
@protocol UIGestureRecognizerDelegate, PKSelectionInteractionDelegate;


#import "AKMainEventHandler.h"
#import "AKPanGestureRecognizer.h"
#import "AKRotationGestureRecognizer.h"

@interface AKMainEventHandler_iOS : AKMainEventHandler <UIGestureRecognizerDelegate, PKSelectionInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UITapGestureRecognizer *doubleTapRecognizer; // ivar: _doubleTapRecognizer
@property (readonly) NSUInteger hash;
@property CGFloat lastRotationAngleInRotationGesture; // ivar: _lastRotationAngleInRotationGesture
@property (retain) AKPanGestureRecognizer *panRecognizer; // ivar: _panRecognizer
@property (retain) UILongPressGestureRecognizer *pressRecognizer; // ivar: _pressRecognizer
@property (retain) AKRotationGestureRecognizer *rotationRecognizer; // ivar: _rotationRecognizer
@property (readonly) Class superclass;
@property (retain) UITapGestureRecognizer *tapRecognizer; // ivar: _tapRecognizer


-(BOOL)_doubleTapRecognizerCanBeginAtPoint:(struct CGPoint )arg0 ;
-(BOOL)_shouldAllowTapAtLocationInWindow:(struct CGPoint )arg0 ;
-(BOOL)_tapRecognizerCanBeginAtPoint:(struct CGPoint )arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)selectionInteractionShouldBegin:(id)arg0 atPoint:(struct CGPoint )arg1 forEvent:(id)arg2 orGestureRecognizer:(id)arg3 ;
-(id)initWithController:(id)arg0 ;
-(void)applyToAllSelectedAnnotationsRotateEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(void)forwardRecognizerToMainHandleEvent:(id)arg0 ;
-(void)teardown;


@end


#endif