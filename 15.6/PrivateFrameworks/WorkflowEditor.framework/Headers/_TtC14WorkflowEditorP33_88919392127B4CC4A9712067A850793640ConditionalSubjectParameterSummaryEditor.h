// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC14WORKFLOWEDITORP33_88919392127B4CC4A9712067A850793640CONDITIONALSUBJECTPARAMETERSUMMARYEDITOR_H
#define _TTC14WORKFLOWEDITORP33_88919392127B4CC4A9712067A850793640CONDITIONALSUBJECTPARAMETERSUMMARYEDITOR_H



#import "WFModuleSummaryEditor.h"

@interface _TtC14WorkflowEditorP33_88919392127B4CC4A9712067A850793640ConditionalSubjectParameterSummaryEditor : WFModuleSummaryEditor {
    ? chooser;
    ? homeServiceModal;
}




-(id)initWithParameter:(id)arg0 initialState:(id)arg1 initialArrayState:(id)arg2 arrayIndex:(NSInteger)arg3 processing:(BOOL)arg4 ;
-(id)stateByReplacingVariableFromCurrentState:(id)arg0 withVariable:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)beginVariableMenuForSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;


@end


#endif