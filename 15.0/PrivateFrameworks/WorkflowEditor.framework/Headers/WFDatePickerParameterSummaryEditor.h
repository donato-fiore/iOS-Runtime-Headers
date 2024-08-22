// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDATEPICKERPARAMETERSUMMARYEDITOR_H
#define WFDATEPICKERPARAMETERSUMMARYEDITOR_H

@class UIDatePicker, NSString, UIViewController, UIView;
@protocol UIPopoverPresentationControllerDelegate, WFNonViewResponderDelegate, WFVariableUIDelegate;


#import "WFModuleSummaryEditor.h"
#import "WFNonViewResponder.h"
#import "WFVariableInputCoordinator.h"

@interface WFDatePickerParameterSummaryEditor : WFModuleSummaryEditor <UIPopoverPresentationControllerDelegate, WFNonViewResponderDelegate, WFVariableUIDelegate>



@property (retain, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (retain, nonatomic) WFNonViewResponder *datePickerResponder; // ivar: _datePickerResponder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPickingMagicVariable; // ivar: _isPickingMagicVariable
@property (weak, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;
@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator; // ivar: _variableCoordinator


-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)datePickerValueChanged:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)responderWillResign:(id)arg0 ;
// -(void)revealAction:(id)arg0 fromSourceView:(id)arg1 preScrollHandler:(id)arg2 goBackHandler:(unk)arg3 scrolledAwayHandler:(id)arg4  ;
-(void)setVariableProvider:(id)arg0 ;
-(void)setVariableUIDelegate:(id)arg0 ;
-(void)showActionOutputPickerFromSourceResponder:(id)arg0 allowExtensionInput:(BOOL)arg1 variableProvider:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif