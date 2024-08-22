// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC14WORKFLOWEDITOR36DYNAMICRESOLVEPARAMETERSUMMARYEDITOR_H
#define _TTC14WORKFLOWEDITOR36DYNAMICRESOLVEPARAMETERSUMMARYEDITOR_H

@protocol WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate;


#import "WFModuleSummaryEditor.h"

@interface _TtC14WorkflowEditor36DynamicResolveParameterSummaryEditor : WFModuleSummaryEditor <WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>

 {
    ? presentedViewController;
}




-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithParameter:(id)arg0 initialState:(id)arg1 initialArrayState:(id)arg2 arrayIndex:(NSInteger)arg3 processing:(BOOL)arg4 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)parameterValuePickerViewController:(id)arg0 didFinishWithParameterState:(id)arg1 ;
-(void)parameterValuePickerViewControllerDidCancel:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif