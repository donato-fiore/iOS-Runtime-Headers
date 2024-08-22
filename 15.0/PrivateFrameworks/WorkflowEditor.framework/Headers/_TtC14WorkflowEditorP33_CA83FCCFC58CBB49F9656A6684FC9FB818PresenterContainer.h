// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC14WORKFLOWEDITORP33_CA83FCCFC58CBB49F9656A6684FC9FB818PRESENTERCONTAINER_H
#define _TTC14WORKFLOWEDITORP33_CA83FCCFC58CBB49F9656A6684FC9FB818PRESENTERCONTAINER_H

@protocol WFStandaloneModuleSummaryPresenterDelegate, WFVariableUIDelegate;

#import <Foundation/Foundation.h>


@interface _TtC14WorkflowEditorP33_CA83FCCFC58CBB49F9656A6684FC9FB818PresenterContainer : NSObject <WFStandaloneModuleSummaryPresenterDelegate, WFVariableUIDelegate>

 {
    ? presenter;
    ? state;
    ? onShowActionOutputPicker;
    ? onRevealAction;
    ? onFinish;
    ? parameterEditingHint;
}




-(id)init;
-(void)moduleSummaryPresenter:(id)arg0 didCommitParameterState:(id)arg1 ;
-(void)moduleSummaryPresenterDidFinish:(id)arg0 ;
// -(void)revealAction:(id)arg0 fromSourceView:(id)arg1 preScrollHandler:(id)arg2 goBackHandler:(unk)arg3 scrolledAwayHandler:(id)arg4  ;
-(void)showActionOutputPickerFromSourceResponder:(id)arg0 allowExtensionInput:(BOOL)arg1 variableProvider:(id)arg2 completionHandler:(id)arg3 ;
-(void)showParameterEditingHint:(id)arg0 ;


@end


#endif