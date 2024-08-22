// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTCV14WORKFLOWEDITORP33_060892FA80DB790CDB013ACF6F2F770418SUMMARYHOSTINGVIEW11COORDINATOR_H
#define _TTCV14WORKFLOWEDITORP33_060892FA80DB790CDB013ACF6F2F770418SUMMARYHOSTINGVIEW11COORDINATOR_H

@protocol WFModuleSummaryViewDelegate, WFVariableUIDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV14WorkflowEditorP33_060892FA80DB790CDB013ACF6F2F770418SummaryHostingView11Coordinator : NSObject <WFModuleSummaryViewDelegate, WFVariableUIDelegate>

 {
    ? view;
    ? lastComputedViewSize;
}




-(id)init;
-(id)viewControllerContainingSummaryView:(id)arg0 ;
// -(void)revealAction:(id)arg0 fromSourceView:(id)arg1 preScrollHandler:(id)arg2 goBackHandler:(unk)arg3 scrolledAwayHandler:(id)arg4  ;
-(void)showActionOutputPickerFromSourceResponder:(id)arg0 allowExtensionInput:(BOOL)arg1 variableProvider:(id)arg2 completionHandler:(id)arg3 ;
-(void)showParameterEditingHint:(id)arg0 ;
-(void)showVariableEditorWithOptions:(id)arg0 fromSourceRect:(struct CGRect )arg1 ;
-(void)summaryView:(id)arg0 disclosureArrowDidChange:(BOOL)arg1 ;
-(void)summaryViewDidInvalidateSize:(id)arg0 ;


@end


#endif