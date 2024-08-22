// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC14WORKFLOWEDITORP33_43BA2E4FFF91A585BB3837D4F314AD5928SLIDERPARAMETERSUMMARYEDITOR_H
#define _TTC14WORKFLOWEDITORP33_43BA2E4FFF91A585BB3837D4F314AD5928SLIDERPARAMETERSUMMARYEDITOR_H



#import "WFModuleSummaryEditor.h"

@interface _TtC14WorkflowEditorP33_43BA2E4FFF91A585BB3837D4F314AD5928SliderParameterSummaryEditor : WFModuleSummaryEditor {
    ? modal;
}




+(NSUInteger)variableResultTypeForParameter:(id)arg0 ;
-(id)initWithParameter:(id)arg0 initialState:(id)arg1 initialArrayState:(id)arg2 arrayIndex:(NSInteger)arg3 processing:(BOOL)arg4 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;


@end


#endif