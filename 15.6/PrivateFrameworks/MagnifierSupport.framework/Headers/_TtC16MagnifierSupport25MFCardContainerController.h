// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16MAGNIFIERSUPPORT25MFCARDCONTAINERCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT25MFCARDCONTAINERCONTROLLER_H

@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC16MagnifierSupport25MFCardContainerController : NSObject <UIGestureRecognizerDelegate>

 {
    ? containerView;
    ? delegate;
    ? containerHeightConstraint;
    ? containerTopConstraint;
    ? draggingAnimator;
    ? rubberbandConfiguration;
    ? panGestureRecognizer;
    ? startingCardHeight;
    ? cardHeightConstraint;
    ? cardPosition;
    ? xPositionConstraint;
    ? yPositionConstraint;
    ? grabStartLocation;
    ? grabStartFrame;
    ? cardDragAndDropAnimator;
    ? collapsingMiddleAnimator;
    ? fadingBottomAnimator;
}




-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)handleLongPress:(id)arg0 ;
-(void)handlePanGestureWithSender:(id)arg0 ;


@end


#endif