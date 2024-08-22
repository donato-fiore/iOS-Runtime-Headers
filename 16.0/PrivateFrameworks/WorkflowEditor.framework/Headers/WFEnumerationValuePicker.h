// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFENUMERATIONVALUEPICKER_H
#define WFENUMERATIONVALUEPICKER_H

@class WFVariableSubstitutableParameterState, NSString, WFEnumerationParameter;
@protocol WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate;

#import <Foundation/Foundation.h>

#import "WFParameterValuePickerViewController.h"
#import "WFSlotIdentifier.h"

@interface WFEnumerationValuePicker : NSObject <WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>



@property (copy, nonatomic) id *cancelHandler; // ivar: _cancelHandler
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) WFVariableSubstitutableParameterState *currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editingSlotArrayIndex;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFEnumerationParameter *parameter; // ivar: _parameter
@property (retain, nonatomic) WFParameterValuePickerViewController *parameterValuePickerViewController; // ivar: _parameterValuePickerViewController
@property (retain, nonatomic) WFSlotIdentifier *slotIdentifier; // ivar: _slotIdentifier
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressAutomaticCancellation; // ivar: _suppressAutomaticCancellation


// +(id)presentWithParameter:(id)arg0 state:(id)arg1 slotIdentifier:(id)arg2 initialCollection:(id)arg3 variableProvider:(id)arg4 variableUIDelegate:(id)arg5 allowsPickingVariables:(BOOL)arg6 processing:(BOOL)arg7 presentationAnchor:(id)arg8 cancelHandler:(id)arg9 completionHandler:(unk)arg10  ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithParameter:(id)arg0 currentState:(id)arg1 completionHandler:(id)arg2 ;
-(void)cancelOperation;
-(void)dismissWithCompletionHandler:(id)arg0 ;
-(void)parameterValuePickerViewController:(id)arg0 didFinishWithParameterState:(id)arg1 ;
-(void)parameterValuePickerViewControllerDidCancel:(id)arg0 ;
-(void)parameterValuePickerViewControllerDidRequestRemovingItem:(id)arg0 ;
-(void)parameterValuePickingDidFinishWithParameterState:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif