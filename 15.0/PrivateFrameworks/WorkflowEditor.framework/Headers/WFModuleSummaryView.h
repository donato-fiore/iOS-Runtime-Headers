// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMODULESUMMARYVIEW_H
#define WFMODULESUMMARYVIEW_H

@class UIView, NSString, UIColor, NSSet, NSArray, NSMutableDictionary, NSDictionary, UIFont, WFVariable, NSHashTable;
@protocol WFSlotTemplateViewDelegate, WFModuleSummaryEditorDelegate, WFVariableDelegate, WFEditorAuxiliaryViewPresenter, WFModuleSummaryViewDelegate, WFVariableProvider, WFVariableUIDelegate;


#import "WFModuleSummaryEditor.h"
#import "WFSlotIdentifier.h"
#import "WFModuleSummaryTemplateBuilder.h"
#import "WFSlotTemplateView.h"

@interface WFModuleSummaryView : UIView <WFSlotTemplateViewDelegate, WFModuleSummaryEditorDelegate, WFVariableDelegate>



@property (weak, nonatomic) NSObject<WFEditorAuxiliaryViewPresenter> *auxiliaryViewPresenter; // ivar: _auxiliaryViewPresenter
@property (retain, nonatomic) WFModuleSummaryEditor *currentEditor; // ivar: _currentEditor
@property (retain, nonatomic) WFSlotIdentifier *currentlyEditingSlotIdentifier; // ivar: _currentlyEditingSlotIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFModuleSummaryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *disabledSlotBackgroundColor;
@property (readonly, nonatomic) UIColor *disabledSlotTitleColor;
@property (nonatomic) BOOL disclosureArrowIsOpen;
@property (readonly, copy, nonatomic) NSSet *editableParameters; // ivar: _editableParameters
@property (copy, nonatomic) NSArray *exclusionRects; // ivar: _exclusionRects
@property (nonatomic) BOOL extendSlotBackgroundOffEdges;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalPadding;
@property (retain, nonatomic) NSMutableDictionary *mutableStagedParameterStates; // ivar: _mutableStagedParameterStates
@property (readonly, copy, nonatomic) NSDictionary *parameterStates; // ivar: _parameterStates
@property (readonly, copy, nonatomic) NSSet *parameters; // ivar: _parameters
@property (nonatomic) BOOL processing; // ivar: _processing
@property (nonatomic) BOOL showsDisclosureArrow;
@property (readonly, copy, nonatomic) NSDictionary *stagedParameterStates;
@property (retain, nonatomic) UIFont *summaryFont;
@property (readonly, copy, nonatomic) NSString *summaryFormatString; // ivar: _summaryFormatString
@property (retain, nonatomic) UIFont *summaryUnpopulatedFont;
@property (readonly) Class superclass;
@property (retain, nonatomic) WFModuleSummaryTemplateBuilder *templateBuilder; // ivar: _templateBuilder
@property (weak, nonatomic) WFSlotTemplateView *templateView; // ivar: _templateView
@property (nonatomic) NSInteger textAlignment;
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (retain, nonatomic) WFVariable *variableBeingEdited; // ivar: _variableBeingEdited
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate
@property (retain, nonatomic) NSHashTable *variablesBeingObserved; // ivar: _variablesBeingObserved


+(CGFloat)heightForWidth:(CGFloat)arg0 withSummaryFormatString:(id)arg1 parameters:(id)arg2 editableParameters:(id)arg3 parameterStates:(id)arg4 stagedParameterStates:(id)arg5 horizontalPadding:(CGFloat)arg6 font:(id)arg7 unpopulatedFont:(id)arg8 textAlignment:(NSInteger)arg9 ;
+(id)paragraphStyleWithAlignment:(NSInteger)arg0 ;
+(id)parameterStatesByApplyingStaging:(id)arg0 toOriginal:(id)arg1 ;
+(void)enumerateVariableAttachmentsInContents:(id)arg0 withBlock:(id)arg1 ;
-(BOOL)slotTemplateView:(id)arg0 shouldActivateContextMenuForSlotWithIdentifier:(id)arg1 ;
-(BOOL)slotTemplateView:(id)arg0 shouldChangeText:(id)arg1 forSlotWithIdentifier:(id)arg2 ;
-(BOOL)slotTemplateView:(id)arg0 shouldTapTextAttachment:(id)arg1 inSlotWithIdentifier:(id)arg2 ;
-(CGFloat)heightForWidth:(CGFloat)arg0 ;
-(Class)editorClassForParameter:(id)arg0 ;
-(id)addElementToArrayForParameterKey:(id)arg0 ;
-(id)currentParameterStateForParameterKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)parameterForKey:(id)arg0 ;
-(id)transformParameterStateForSerialization:(id)arg0 inEditor:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 sourceRect:(struct CGRect )arg1 fromContextMenuGesture:(BOOL)arg2 fromTextAttachment:(id)arg3 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)destroyCurrentEditor;
-(void)removeElementFromArrayAtIndex:(NSUInteger)arg0 forParameterKey:(id)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)slotTemplateView:(id)arg0 deletePressedOnUnpopulatedSlotWithIdentifier:(id)arg1 ;
-(void)slotTemplateView:(id)arg0 didActivateContextMenuForSlotWithIdentifier:(id)arg1 sourceRect:(struct CGRect )arg2 textAttachmentToSelect:(id)arg3 ;
-(void)slotTemplateView:(id)arg0 didChangeText:(id)arg1 forSlotWithIdentifier:(id)arg2 ;
-(void)slotTemplateView:(id)arg0 didDeselectSlotWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)slotTemplateView:(id)arg0 didEndTypingInSlotWithIdentifier:(id)arg1 ;
-(void)slotTemplateView:(id)arg0 didSelectSlotWithIdentifier:(id)arg1 sourceRect:(struct CGRect )arg2 ;
-(void)slotTemplateView:(id)arg0 didTapTextAttachment:(id)arg1 inSlotWithIdentifier:(id)arg2 ;
-(void)slotTemplateView:(id)arg0 disclosureArrowDidChange:(BOOL)arg1 ;
-(void)slotTemplateView:(id)arg0 typingDidCopyWithOriginalBlock:(id)arg1 ;
-(void)slotTemplateView:(id)arg0 typingDidCutWithOriginalBlock:(id)arg1 ;
-(void)slotTemplateView:(id)arg0 typingDidPasteWithOriginalBlock:(id)arg1 ;
-(void)slotTemplateView:(id)arg0 willBeginTypingInSlotWithIdentifier:(id)arg1 usingTextEntry:(id)arg2 allowMultipleLines:(*BOOL)arg3 ;
-(void)slotTemplateViewDidInvalidateSize:(id)arg0 ;
-(void)startEditingForParameterKey:(id)arg0 ;
-(void)summaryEditor:(id)arg0 didCommitParameterState:(id)arg1 ;
-(void)summaryEditor:(id)arg0 didStageParameterState:(id)arg1 ;
-(void)summaryEditor:(id)arg0 willUpdateVariable:(id)arg1 ;
-(void)summaryEditorDidFinish:(id)arg0 returnToKeyboard:(BOOL)arg1 withTextAttachmentToEdit:(id)arg2 ;
-(void)summaryEditorDidRequestTextEntry:(id)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateExclusionRectsWithBounds:(struct CGRect )arg0 ;
-(void)updateTemplateContentsAnimated:(BOOL)arg0 ;
-(void)updateVariableAttachmentAppearanceInContents:(id)arg0 ;
-(void)updateVariableObservationsWithContents:(id)arg0 ;
-(void)variableDidChange:(id)arg0 ;


@end


#endif