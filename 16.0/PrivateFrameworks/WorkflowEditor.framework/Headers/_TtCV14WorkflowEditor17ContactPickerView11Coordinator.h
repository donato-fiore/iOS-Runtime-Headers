// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV14WORKFLOWEDITOR17CONTACTPICKERVIEW11COORDINATOR_H
#define _TTCV14WORKFLOWEDITOR17CONTACTPICKERVIEW11COORDINATOR_H

@protocol CNContactPickerDelegate, WFRecipientFieldViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV14WorkflowEditor17ContactPickerView11Coordinator : NSObject <CNContactPickerDelegate, WFRecipientFieldViewControllerDelegate>

 {
    ? parent;
}




-(id)init;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)recipientViewControllerDidFinish:(id)arg0 cancelled:(BOOL)arg1 ;


@end


#endif