// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAPSULEHIDINGSTEPPERVIEWCONTROLLER_H
#define CAPSULEHIDINGSTEPPERVIEWCONTROLLER_H

@class UIPanGestureRecognizer, UITapGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate;


#import "StepperViewController.h"
#import "CapsuleNavigationBarViewController.h"

@interface CapsuleHidingStepperViewController : StepperViewController <UIGestureRecognizerDelegate>

 {
    UIPanGestureRecognizer *_panRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
}


@property (weak) CapsuleNavigationBarViewController *capsuleViewController; // ivar: _capsuleViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(void)_didReceivePan:(id)arg0 ;
-(void)_didReceiveTap:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif