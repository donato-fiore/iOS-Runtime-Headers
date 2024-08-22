// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV14WORKFLOWEDITORP33_060892FA80DB790CDB013ACF6F2F770418SUMMARYHOSTINGVIEW11COORDINATOR_H
#define _TTCV14WORKFLOWEDITORP33_060892FA80DB790CDB013ACF6F2F770418SUMMARYHOSTINGVIEW11COORDINATOR_H

@protocol WFModuleSummaryCoordinatorDelegate, WFVariableUIDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV14WorkflowEditorP33_060892FA80DB790CDB013ACF6F2F770418SummaryHostingView11Coordinator : NSObject <WFModuleSummaryCoordinatorDelegate, WFVariableUIDelegate>

 {
    ? view;
}




-(id)init;
-(id)viewControllerForCoordinator:(id)arg0 ;
// -(void)revealAction:(id)arg0 preScrollHandler:(id)arg1 goBackHandler:(unk)arg2 scrolledAwayHandler:(id)arg3  ;
-(void)showActionOutputPickerAllowingShortcutInput:(BOOL)arg0 variableProvider:(id)arg1 completionHandler:(id)arg2 ;
-(void)showParameterEditingHint:(id)arg0 ;
-(void)showVariableEditorWithOptions:(id)arg0 fromSourceRect:(struct CGRect )arg1 ;
-(void)summaryCoordinator:(id)arg0 disclosureArrowDidChange:(BOOL)arg1 ;
-(void)summaryCoordinatorDidInvalidateSize:(id)arg0 ;


@end


#endif