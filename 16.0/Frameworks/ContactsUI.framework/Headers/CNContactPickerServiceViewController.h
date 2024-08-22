// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTPICKERSERVICEVIEWCONTROLLER_H
#define CNCONTACTPICKERSERVICEVIEWCONTROLLER_H

@class NSString;
@protocol CNContactPickerContentDelegate;


#import "CNContactPickerContentViewController.h"

@interface CNContactPickerServiceViewController : CNContactPickerContentViewController <CNContactPickerContentDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_filteredContact:(id)arg0 withKeys:(id)arg1 ;
-(id)_filteredProperty:(id)arg0 ;
-(id)init;
-(void)_logPrivacyAccountingAccessEvent;
-(void)pickerDidCancel;
-(void)pickerDidCompleteWithNewContact:(id)arg0 ;
-(void)pickerDidSelectAddNewContact;
-(void)pickerDidSelectContact:(id)arg0 property:(id)arg1 ;
-(void)pickerDidSelectContacts:(id)arg0 properties:(id)arg1 ;


@end


#endif