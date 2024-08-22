// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMODULESUMMARYEDITOR_H
#define WFMODULESUMMARYEDITOR_H

@class NSString, WFMultipleValueParameterState, WFVariable, WFParameter<WFModuleSummarySupporting>, UIView<WFSlotTemplateTextEntry>;
@protocol WFVariableConfigurationResponderDelegate, WFEditorAuxiliaryViewPresenter, WFParameterState, WFModuleSummaryEditorDelegate, WFVariableProvider, WFVariableUIDelegate;

#import <Foundation/Foundation.h>

#import "WFTextTokenChooser.h"
#import "WFVariableConfigurationResponder.h"

@interface WFModuleSummaryEditor : NSObject <WFVariableConfigurationResponderDelegate>



@property (readonly, nonatomic) NSUInteger arrayIndex; // ivar: _arrayIndex
@property (weak, nonatomic) NSObject<WFEditorAuxiliaryViewPresenter> *auxiliaryViewPresenter; // ivar: _auxiliaryViewPresenter
@property (readonly, nonatomic) NSObject<WFParameterState> *currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<WFModuleSummaryEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFMultipleValueParameterState *initialArrayState; // ivar: _initialArrayState
@property (readonly, nonatomic) NSObject<WFParameterState> *initialState; // ivar: _initialState
@property (retain, nonatomic) WFVariable *lastValueForEditingVariable; // ivar: _lastValueForEditingVariable
@property (readonly, nonatomic) WFParameter<WFModuleSummarySupporting> *parameter; // ivar: _parameter
@property (readonly, nonatomic, getter=isProcessing) BOOL processing; // ivar: _processing
@property (nonatomic) BOOL returnToKeyboardOnComplete; // ivar: _returnToKeyboardOnComplete
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView<WFSlotTemplateTextEntry> *textEntry; // ivar: _textEntry
@property (retain, nonatomic) WFTextTokenChooser *variableChooser; // ivar: _variableChooser
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (retain, nonatomic) WFVariableConfigurationResponder *variableResponder; // ivar: _variableResponder
@property (nonatomic) BOOL variableResponderSuspended; // ivar: _variableResponderSuspended
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate


+(BOOL)supportsEditingTextAttachment:(id)arg0 inSlotWithIdentifier:(id)arg1 ;
+(NSUInteger)variableResultTypeForParameter:(id)arg0 ;
-(BOOL)canTypeAlongsideVariables;
-(BOOL)textEntryShouldChangeText:(id)arg0 ;
-(BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg0 ;
-(BOOL)variableResponderHasText:(id)arg0 ;
-(id)initWithParameter:(id)arg0 initialState:(id)arg1 initialArrayState:(id)arg2 arrayIndex:(NSUInteger)arg3 processing:(BOOL)arg4 ;
-(id)stateByReplacingVariableFromCurrentState:(id)arg0 withVariable:(id)arg1 ;
-(id)variableMenuInitialStateForSlotWithIdentifier:(id)arg0 ;
-(void)_beginEditingVariableAttachment:(id)arg0 slotIdentifier:(id)arg1 presentationAnchor:(id)arg2 ;
-(void)beginEditingNewArrayElementFromPresentationAnchor:(id)arg0 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)beginEditingTextAttachment:(id)arg0 inSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2 ;
-(void)beginVariableMenuForSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)commitState:(id)arg0 ;
-(void)completeEditing;
-(void)completeEditingWithTextAttachmentToEdit:(id)arg0 ;
-(void)requestTextEntry;
-(void)sourceViewTintColorDidChange;
-(void)stageState:(id)arg0 ;
-(void)textEntryDidCopyWithOriginalBlock:(id)arg0 ;
-(void)textEntryDidCutWithOriginalBlock:(id)arg0 ;
-(void)textEntryDidPasteWithOriginalBlock:(id)arg0 ;
-(void)textEntryTextDidChange:(id)arg0 ;
-(void)textEntryWillBegin:(id)arg0 allowMultipleLines:(*BOOL)arg1 ;
-(void)variableResponder:(id)arg0 didUpdateVariable:(id)arg1 ;
// -(void)variableResponder:(id)arg0 presentPromptWithTitle:(id)arg1 message:(id)arg2 fieldConfigurationHandler:(id)arg3 commitHandler:(unk)arg4  ;
-(void)variableResponderDidDelete:(id)arg0 withReplacementText:(id)arg1 ;
-(void)variableResponderDidEndEditing:(id)arg0 ;
-(void)variableResponderDidReturnToKeyboard:(id)arg0 ;
-(void)variableResponderDidRevealAction:(id)arg0 ;


@end


#endif