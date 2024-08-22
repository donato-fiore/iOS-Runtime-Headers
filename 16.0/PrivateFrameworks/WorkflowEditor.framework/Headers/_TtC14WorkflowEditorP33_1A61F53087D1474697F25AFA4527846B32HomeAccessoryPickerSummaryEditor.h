// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14WORKFLOWEDITORP33_1A61F53087D1474697F25AFA4527846B32HOMEACCESSORYPICKERSUMMARYEDITOR_H
#define _TTC14WORKFLOWEDITORP33_1A61F53087D1474697F25AFA4527846B32HOMEACCESSORYPICKERSUMMARYEDITOR_H



#import "WFModuleSummaryEditor.h"

@interface _TtC14WorkflowEditorP33_1A61F53087D1474697F25AFA4527846B32HomeAccessoryPickerSummaryEditor : WFModuleSummaryEditor {
    ? modal;
}




-(id)initWithParameter:(id)arg0 initialState:(id)arg1 initialArrayState:(id)arg2 arrayIndex:(NSInteger)arg3 processing:(BOOL)arg4 ;
-(id)stateByReplacingVariableFromCurrentState:(id)arg0 withVariable:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;


@end


#endif