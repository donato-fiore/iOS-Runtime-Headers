// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC14WORKFLOWEDITORP33_2752CA8C95F7CD441264E696EB76D2D537PARAMETEREDITINGSESSIONVIEWCONTROLLER_H
#define _TTC14WORKFLOWEDITORP33_2752CA8C95F7CD441264E696EB76D2D537PARAMETEREDITINGSESSIONVIEWCONTROLLER_H

@class UIViewController;
@protocol WFUIKitParameterEditingControllerDelegate;



@interface _TtC14WorkflowEditorP33_2752CA8C95F7CD441264E696EB76D2D537ParameterEditingSessionViewController : UIViewController <WFUIKitParameterEditingControllerDelegate>

 {
    ? parameter;
    ? currentState;
    ? delegate;
    ? currentEditingController;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)cancelEditing;
-(void)finishEditingWithParameterState:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif