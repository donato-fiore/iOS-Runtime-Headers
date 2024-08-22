// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMODULESUMMARYEDITOR_H
#define WFMODULESUMMARYEDITOR_H

@class WFMultipleValueParameterState, WFVariable, WFParameter<WFModuleSummarySupporting>;
@protocol WFEditorAuxiliaryViewPresenter, WFParameterState, WFModuleSummaryEditorDelegate, WFSlotTemplateTextEntry, WFVariableProvider, WFVariableUIDelegate;

#import <Foundation/Foundation.h>


@interface WFModuleSummaryEditor : NSObject

@property (nonatomic) BOOL allowsPickingVariables; // ivar: _allowsPickingVariables
@property (readonly, nonatomic) NSUInteger arrayIndex; // ivar: _arrayIndex
@property (weak, nonatomic) NSObject<WFEditorAuxiliaryViewPresenter> *auxiliaryViewPresenter; // ivar: _auxiliaryViewPresenter
@property (readonly, nonatomic) NSObject<WFParameterState> *currentState; // ivar: _currentState
@property (retain, nonatomic) NSObject<WFModuleSummaryEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) WFMultipleValueParameterState *initialArrayState; // ivar: _initialArrayState
@property (readonly, nonatomic) NSObject<WFParameterState> *initialState; // ivar: _initialState
@property (retain, nonatomic) WFVariable *lastValueForEditingVariable; // ivar: _lastValueForEditingVariable
@property (readonly, nonatomic) WFParameter<WFModuleSummarySupporting> *parameter; // ivar: _parameter
@property (readonly, nonatomic, getter=isProcessing) BOOL processing; // ivar: _processing
@property (nonatomic) BOOL returnToKeyboardOnComplete; // ivar: _returnToKeyboardOnComplete
@property (readonly, weak, nonatomic) NSObject<WFSlotTemplateTextEntry> *textEntry; // ivar: _textEntry
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate


+(BOOL)supportsEditingTextAttachment:(id)arg0 inSlotWithIdentifier:(id)arg1 ;
+(NSUInteger)variableResultTypeForParameter:(id)arg0 ;
-(BOOL)canTypeAlongsideVariables;
-(BOOL)menuElementsContainDeferredElement:(id)arg0 withEstimatedCountGreaterThan:(NSInteger)arg1 ;
-(BOOL)textEntryShouldChangeText:(id)arg0 ;
-(BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg0 ;
-(id)clearButtonMenuItemForSlotWithIdentifier:(id)arg0 ;
-(id)customMenuElementsForSlotWithIdentifier:(id)arg0 style:(NSUInteger)arg1 ;
-(id)initWithParameter:(id)arg0 initialState:(id)arg1 initialArrayState:(id)arg2 arrayIndex:(NSUInteger)arg3 processing:(BOOL)arg4 ;
-(id)menuForSlotWithIdentifier:(id)arg0 style:(NSUInteger)arg1 ;
-(id)stateByReplacingVariableFromCurrentState:(id)arg0 withVariable:(id)arg1 ;
-(id)variableMenuElementsForSlotWithIdentifier:(id)arg0 ;
-(void)_beginEditingVariableAttachment:(id)arg0 slotIdentifier:(id)arg1 presentationAnchor:(id)arg2 ;
-(void)beginEditingNewArrayElementFromPresentationAnchor:(id)arg0 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)beginEditingTextAttachment:(id)arg0 inSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)commitState:(id)arg0 ;
-(void)completeEditing;
-(void)completeEditingWithTextAttachmentToEdit:(id)arg0 ;
-(void)requestEditingSlotIdentifier:(id)arg0 ;
-(void)requestTextEntry;
-(void)sourceViewTintColorDidChange;
-(void)stageState:(id)arg0 ;
-(void)textEntryDidCopyWithOriginalBlock:(id)arg0 ;
-(void)textEntryDidCutWithOriginalBlock:(id)arg0 ;
-(void)textEntryDidPasteWithOriginalBlock:(id)arg0 ;
-(void)textEntryTextDidChange:(id)arg0 ;
-(void)textEntryWillBegin:(id)arg0 allowMultipleLines:(*BOOL)arg1 ;


@end


#endif