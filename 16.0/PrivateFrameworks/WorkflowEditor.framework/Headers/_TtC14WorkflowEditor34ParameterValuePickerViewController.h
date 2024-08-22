// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14WORKFLOWEDITOR34PARAMETERVALUEPICKERVIEWCONTROLLER_H
#define _TTC14WORKFLOWEDITOR34PARAMETERVALUEPICKERVIEWCONTROLLER_H

@class UIViewController;
@protocol _TtP14WorkflowEditor42ParameterValuePickerViewControllerDelegate_, WFVariableProvider, WFVariableUIDelegate;



@interface _TtC14WorkflowEditor34ParameterValuePickerViewController : UIViewController {
    ? parameter;
    ? currentState;
    ? initialValue;
    ? allowsMultipleSelection;
    ? allowsVariables;
    ? hostingViewController;
}


@property (nonatomic, weak) NSObject<_TtP14WorkflowEditor42ParameterValuePickerViewControllerDelegate_> *delegate; // ivar: delegate
@property (nonatomic, weak) NSObject<WFVariableProvider> *variableProvider; // ivar: variableProvider
@property (nonatomic, weak) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: variableUIDelegate


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithParameter:(id)arg0 allowsVariables:(BOOL)arg1 allowsMultipleSelection:(BOOL)arg2 initialCollection:(id)arg3 currentState:(id)arg4 ;
-(void)loadView;


@end


#endif