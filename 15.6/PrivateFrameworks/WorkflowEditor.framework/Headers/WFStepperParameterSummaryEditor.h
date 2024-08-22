// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSTEPPERPARAMETERSUMMARYEDITOR_H
#define WFSTEPPERPARAMETERSUMMARYEDITOR_H

@class NSString, UIViewController;
@protocol UIPopoverPresentationControllerDelegate;


#import "WFModuleSummaryEditor.h"

@interface WFStepperParameterSummaryEditor : WFModuleSummaryEditor <UIPopoverPresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (readonly) Class superclass;


-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)stepperTouchUp:(id)arg0 ;
-(void)stepperValueChanged:(id)arg0 ;


@end


#endif