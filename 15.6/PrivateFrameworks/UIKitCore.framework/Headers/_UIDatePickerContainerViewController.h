// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATEPICKERCONTAINERVIEWCONTROLLER_H
#define _UIDATEPICKERCONTAINERVIEWCONTROLLER_H

@class NSString;
@protocol _UIPassthroughScrollInteractionDelegate;


#import "UIViewController.h"
#import "_UIDatePickerOverlayPresentation.h"

@interface _UIDatePickerContainerViewController : UIViewController <_UIPassthroughScrollInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *pendingKeyboardAdjustment; // ivar: _pendingKeyboardAdjustment
@property (readonly, nonatomic) _UIDatePickerOverlayPresentation *presentation;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)passthroughScrollInteraction:(id)arg0 shouldInteractAtLocation:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg0 ;
-(id)initWithPresentation:(id)arg0 ;
-(id)keyCommands;
-(void)_didReceiveEscapeKey:(id)arg0 ;
-(void)dealloc;
-(void)didChangeKeyboardAvoidanceAdjustmentDeferral;
-(void)keyboardFrameWillChange:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif