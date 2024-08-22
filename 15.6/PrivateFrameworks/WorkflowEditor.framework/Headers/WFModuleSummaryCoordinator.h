// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMODULESUMMARYCOORDINATOR_H
#define WFMODULESUMMARYCOORDINATOR_H

@class NSArray, NSString, NSSet, NSMutableDictionary, NSDictionary, WFVariable, NSHashTable;
@protocol WFSlotTemplateViewDelegate, WFModuleSummaryEditorDelegate, WFVariableDelegate, WFEditorAuxiliaryViewPresenter, WFModuleSummaryCoordinatorDelegate, WFVariableProvider, WFVariableUIDelegate;

#import <Foundation/Foundation.h>

#import "WFModuleSummaryEditor.h"
#import "WFSlotIdentifier.h"
#import "WFModuleSummaryTemplateBuilder.h"
#import "WFSlotTemplateView.h"

@interface WFModuleSummaryCoordinator : NSObject <WFSlotTemplateViewDelegate, WFModuleSummaryEditorDelegate, WFVariableDelegate>



@property (weak, nonatomic) NSObject<WFEditorAuxiliaryViewPresenter> *auxiliaryViewPresenter; // ivar: _auxiliaryViewPresenter
@property (copy, nonatomic) NSArray *contents; // ivar: _contents
@property (retain, nonatomic) WFModuleSummaryEditor *currentEditor; // ivar: _currentEditor
@property (retain, nonatomic) WFSlotIdentifier *currentlyEditingSlotIdentifier; // ivar: _currentlyEditingSlotIdentifier
@property (retain, nonatomic) WFSlotIdentifier *currentlyTypingSlotIdentifier; // ivar: _currentlyTypingSlotIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFModuleSummaryCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *editableParameters; // ivar: _editableParameters
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *mutableStagedParameterStates; // ivar: _mutableStagedParameterStates
@property (readonly, copy, nonatomic) NSDictionary *parameterStates; // ivar: _parameterStates
@property (readonly, copy, nonatomic) NSSet *parameters; // ivar: _parameters
@property (nonatomic) BOOL processing; // ivar: _processing
@property (readonly, copy, nonatomic) NSDictionary *stagedParameterStates;
@property (readonly, copy, nonatomic) NSString *summaryFormatString; // ivar: _summaryFormatString
@property (readonly) Class superclass;
@property (retain, nonatomic) WFModuleSummaryTemplateBuilder *templateBuilder; // ivar: _templateBuilder
@property (retain, nonatomic) WFSlotTemplateView *templateView; // ivar: _templateView
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (retain, nonatomic) WFVariable *variableBeingEdited; // ivar: _variableBeingEdited
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate
@property (retain, nonatomic) NSHashTable *variablesBeingObserved; // ivar: _variablesBeingObserved


+(CGFloat)heightForWidth:(CGFloat)arg0 withSummaryFormatString:(id)arg1 parameters:(id)arg2 editableParameters:(id)arg3 parameterStates:(id)arg4 stagedParameterStates:(id)arg5 horizontalPadding:(CGFloat)arg6 font:(id)arg7 unpopulatedFont:(id)arg8 textAlignment:(NSInteger)arg9 ;
+(id)parameterStatesByApplyingStaging:(id)arg0 toOriginal:(id)arg1 ;
+(void)enumerateVariableAttachmentsInContents:(id)arg0 withBlock:(id)arg1 ;
-(BOOL)slotTemplateView:(id)arg0 shouldActivateContextMenuForSlotWithIdentifier:(id)arg1 ;
-(BOOL)slotTemplateView:(id)arg0 shouldChangeText:(id)arg1 forSlotWithIdentifier:(id)arg2 ;
-(BOOL)slotTemplateView:(id)arg0 shouldTapTextAttachment:(id)arg1 inSlotWithIdentifier:(id)arg2 ;
-(Class)editorClassForParameter:(id)arg0 ;
-(id)addElementToArrayForParameterKey:(id)arg0 ;
-(id)currentParameterStateForParameterKey:(id)arg0 ;
-(id)firstSlotIdentifierWithParameterKey:(id)arg0 ;
-(id)init;
-(id)parameterForKey:(id)arg0 ;
-(id)transformParameterStateForSerialization:(id)arg0 inEditor:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 fromContextMenuGesture:(BOOL)arg1 fromTextAttachment:(id)arg2 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)destroyCurrentEditor;
-(void)removeElementFromArrayAtIndex:(NSUInteger)arg0 forParameterKey:(id)arg1 ;
-(void)slotTemplateView:(id)arg0 deletePressedOnUnpopulatedSlotWithIdentifier:(id)arg1 ;
-(void)slotTemplateView:(id)arg0 didActivateContextMenuForSlotWithIdentifier:(id)arg1 textAttachmentToSelect:(id)arg2 ;
-(void)slotTemplateView:(id)arg0 didChangeText:(id)arg1 forSlotWithIdentifier:(id)arg2 ;
-(void)slotTemplateView:(id)arg0 didDeselectSlotWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)slotTemplateView:(id)arg0 didEndTypingInSlotWithIdentifier:(id)arg1 ;
-(void)slotTemplateView:(id)arg0 didSelectSlotWithIdentifier:(id)arg1 ;
-(void)slotTemplateView:(id)arg0 didTapTextAttachment:(id)arg1 inSlotWithIdentifier:(id)arg2 ;
-(void)slotTemplateView:(id)arg0 disclosureArrowDidChange:(BOOL)arg1 ;
-(void)slotTemplateView:(id)arg0 typingDidCopyWithOriginalBlock:(id)arg1 ;
-(void)slotTemplateView:(id)arg0 typingDidCutWithOriginalBlock:(id)arg1 ;
-(void)slotTemplateView:(id)arg0 typingDidPasteWithOriginalBlock:(id)arg1 ;
-(void)slotTemplateView:(id)arg0 willBeginTypingInSlotWithIdentifier:(id)arg1 usingTextEntry:(id)arg2 allowMultipleLines:(*BOOL)arg3 ;
-(void)slotTemplateViewDidInvalidateSize:(id)arg0 ;
-(void)slotTemplateViewTintColorDidChange:(id)arg0 ;
-(void)startEditingForParameterKey:(id)arg0 ;
-(void)summaryEditor:(id)arg0 didCommitParameterState:(id)arg1 ;
-(void)summaryEditor:(id)arg0 didStageParameterState:(id)arg1 ;
-(void)summaryEditor:(id)arg0 willUpdateVariable:(id)arg1 ;
-(void)summaryEditorDidFinish:(id)arg0 returnToKeyboard:(BOOL)arg1 withTextAttachmentToEdit:(id)arg2 ;
-(void)summaryEditorDidRequestTextEntry:(id)arg0 ;
-(void)updateTemplateContentsAnimated:(BOOL)arg0 ;
-(void)updateVariableObservationsWithContents:(id)arg0 ;
-(void)variableDidChange:(id)arg0 ;


@end


#endif