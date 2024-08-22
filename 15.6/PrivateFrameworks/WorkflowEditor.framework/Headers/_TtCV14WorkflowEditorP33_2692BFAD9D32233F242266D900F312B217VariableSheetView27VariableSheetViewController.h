// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCV14WORKFLOWEDITORP33_2692BFAD9D32233F242266D900F312B217VARIABLESHEETVIEW27VARIABLESHEETVIEWCONTROLLER_H
#define _TTCV14WORKFLOWEDITORP33_2692BFAD9D32233F242266D900F312B217VARIABLESHEETVIEW27VARIABLESHEETVIEWCONTROLLER_H

@class UIViewController;
@protocol WFVariableUIDelegate;



@interface _TtCV14WorkflowEditorP33_2692BFAD9D32233F242266D900F312B217VariableSheetView27VariableSheetViewController : UIViewController <WFVariableUIDelegate>

 {
    ? _variableSheetIsPresented;
    ? variableSheet;
    ? textTokenChooser;
    ? onShowActionOutputPicker;
    ? onRevealAction;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
// -(void)revealAction:(id)arg0 fromSourceView:(id)arg1 preScrollHandler:(id)arg2 goBackHandler:(unk)arg3 scrolledAwayHandler:(id)arg4  ;
-(void)showActionOutputPickerFromSourceResponder:(id)arg0 allowShortcutInput:(BOOL)arg1 variableProvider:(id)arg2 completionHandler:(id)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif