// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTPICKEREXTENSIONHOSTCONTEXT_H
#define CNCONTACTPICKEREXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol CNContactPickerServiceProtocol, CNContactPickerHostProtocol;


#import "CNContactPickerHostViewController.h"

@interface CNContactPickerExtensionHostContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) CNContactPickerHostViewController *viewController; // ivar: _viewController


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(void)invalidateSelectionAnimated:(BOOL)arg0 ;
-(void)pickerDidCancel;
-(void)pickerDidSelectAddNewContact;
-(void)pickerDidSelectContact:(id)arg0 property:(id)arg1 ;
-(void)pickerDidSelectContacts:(id)arg0 properties:(id)arg1 ;
-(void)setupWithOptions:(id)arg0 readyBlock:(id)arg1 ;


@end


#endif