// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCV9PAYMENTUI23CONTACTPICKERCONTROLLER11COORDINATOR_H
#define _TTCV9PAYMENTUI23CONTACTPICKERCONTROLLER11COORDINATOR_H

@protocol CNContactPickerDelegate, UINavigationControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV9PaymentUI23ContactPickerController11Coordinator : NSObject <CNContactPickerDelegate, UINavigationControllerDelegate>

 {
    ? parent;
}




-(id)init;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;


@end


#endif