// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTPICKEREXTENSIONCONTEXT_H
#define CNCONTACTPICKEREXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol CNContactPickerServiceProtocol, CNContactPickerHostProtocol;



@interface CNContactPickerExtensionContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)invalidateSelectionAnimated:(BOOL)arg0 ;
-(void)pickerDidCancel;
-(void)pickerDidCompleteWithNewContact:(id)arg0 ;
-(void)pickerDidSelectAddNewContact;
-(void)pickerDidSelectContact:(id)arg0 property:(id)arg1 ;
-(void)pickerDidSelectContacts:(id)arg0 properties:(id)arg1 ;
-(void)setupWithOptions:(id)arg0 readyBlock:(id)arg1 ;


@end


#endif