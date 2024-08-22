// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCV14WORKFLOWEDITOR24MULTIPLEVALUEHOSTINGVIEW11COORDINATOR_H
#define _TTCV14WORKFLOWEDITOR24MULTIPLEVALUEHOSTINGVIEW11COORDINATOR_H

@protocol WFVariableUIDelegate, WFMultipleValueEditorViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV14WorkflowEditor24MultipleValueHostingView11Coordinator : NSObject <WFVariableUIDelegate, WFMultipleValueEditorViewDelegate>

 {
    ? configuration;
    ? onShowActionOutputPicker;
    ? onRevealAction;
}




-(id)init;
-(void)multipleValueEditorView:(id)arg0 didUpdateWithItem:(id)arg1 ;
// -(void)revealAction:(id)arg0 fromSourceView:(id)arg1 preScrollHandler:(id)arg2 goBackHandler:(unk)arg3 scrolledAwayHandler:(id)arg4  ;
-(void)showActionOutputPickerFromSourceResponder:(id)arg0 allowShortcutInput:(BOOL)arg1 variableProvider:(id)arg2 completionHandler:(id)arg3 ;
-(void)showParameterEditingHint:(id)arg0 ;


@end


#endif