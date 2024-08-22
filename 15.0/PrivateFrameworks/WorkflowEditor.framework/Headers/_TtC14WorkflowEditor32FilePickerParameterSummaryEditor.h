// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC14WORKFLOWEDITOR32FILEPICKERPARAMETERSUMMARYEDITOR_H
#define _TTC14WORKFLOWEDITOR32FILEPICKERPARAMETERSUMMARYEDITOR_H

@protocol UIDocumentPickerDelegate, UIPopoverPresentationControllerDelegate;


#import "WFModuleSummaryEditor.h"

@interface _TtC14WorkflowEditor32FilePickerParameterSummaryEditor : WFModuleSummaryEditor <UIDocumentPickerDelegate, UIPopoverPresentationControllerDelegate>

 {
    ? chooser;
    ? modal;
}




-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithParameter:(id)arg0 initialState:(id)arg1 initialArrayState:(id)arg2 arrayIndex:(NSInteger)arg3 processing:(BOOL)arg4 ;
-(void)beginEditingNewArrayElementFromPresentationAnchor:(id)arg0 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif