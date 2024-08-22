// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV15FOCUSSETTINGSUI22CNCONTACTPICKERADAPTOR11COORDINATOR_H
#define _TTCV15FOCUSSETTINGSUI22CNCONTACTPICKERADAPTOR11COORDINATOR_H

@protocol CNContactPickerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV15FocusSettingsUI22CNContactPickerAdaptor11Coordinator : NSObject <CNContactPickerDelegate>

 {
    ? adaptor;
    ? viewController;
}




-(id)init;
-(void)contactPicker:(id)arg0 didSelectContacts:(id)arg1 ;


@end


#endif