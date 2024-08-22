// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFENUMERATIONVALUEPICKER_H
#define WFENUMERATIONVALUEPICKER_H

@class WFVariableSubstitutableParameterState, NSString, WFEnumerationParameter, NSArray;
@protocol WFParameterEventObserver, WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate;

#import <Foundation/Foundation.h>

#import "WFParameterValuePickerViewController.h"
#import "WFTextTokenChooser.h"

@interface WFEnumerationValuePicker : NSObject <WFParameterEventObserver, WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>



@property (copy, nonatomic) id *cancelHandler; // ivar: _cancelHandler
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) WFVariableSubstitutableParameterState *currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger editingSlotArrayIndex; // ivar: _editingSlotArrayIndex
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFEnumerationParameter *parameter; // ivar: _parameter
@property (copy, nonatomic) NSArray *parameterStates; // ivar: _parameterStates
@property (retain, nonatomic) WFParameterValuePickerViewController *parameterValuePickerViewController; // ivar: _parameterValuePickerViewController
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressAutomaticCancellation; // ivar: _suppressAutomaticCancellation
@property (retain, nonatomic) WFTextTokenChooser *textTokenChooser; // ivar: _textTokenChooser


// +(id)presentWithParameter:(id)arg0 state:(id)arg1 editingSlotArrayIndex:(NSInteger)arg2 initialCollection:(id)arg3 variableProvider:(id)arg4 variableUIDelegate:(id)arg5 processing:(BOOL)arg6 presentationAnchor:(id)arg7 cancelHandler:(id)arg8 completionHandler:(unk)arg9  ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithParameter:(id)arg0 currentState:(id)arg1 completionHandler:(id)arg2 ;
-(void)cancelOperation;
-(void)dealloc;
-(void)dismissWithCompletionHandler:(id)arg0 ;
-(void)parameterAttributesDidChange:(id)arg0 ;
-(void)parameterValuePickerViewController:(id)arg0 didFinishWithParameterState:(id)arg1 ;
-(void)parameterValuePickerViewControllerDidCancel:(id)arg0 ;
-(void)parameterValuePickerViewControllerDidRequestRemovingItem:(id)arg0 ;
-(void)parameterValuePickingDidFinishWithParameterState:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)updateAdditionalButtons;
-(void)updateCurrentState;
-(void)updatePossibleStates;


@end


#endif