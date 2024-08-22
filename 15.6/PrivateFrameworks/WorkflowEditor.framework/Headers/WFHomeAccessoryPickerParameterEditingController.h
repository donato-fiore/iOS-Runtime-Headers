// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFHOMEACCESSORYPICKERPARAMETEREDITINGCONTROLLER_H
#define WFHOMEACCESSORYPICKERPARAMETEREDITINGCONTROLLER_H

@protocol HUTriggerActionBuilderEditorDelegate;


#import "WFUIKitParameterEditingController.h"

@interface WFHomeAccessoryPickerParameterEditingController : WFUIKitParameterEditingController <HUTriggerActionBuilderEditorDelegate>





-(void)actionBuilderEditor:(id)arg0 didFinishWithTriggerActionSetBuilder:(id)arg1 ;
-(void)createViewControllerWithInitialState:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif