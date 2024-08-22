// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTPICKERHOSTVIEWCONTROLLER_H
#define CNCONTACTPICKERHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, UIBarButtonItem, NSString, NSExtension, UINavigationController;
@protocol CNContactPickerContentViewController, CNContactPickerHostProtocol, NSCopying, CNContactPickerContentDelegate;



@interface CNContactPickerHostViewController : UIRemoteViewController <CNContactPickerContentViewController, CNContactPickerHostProtocol>



@property (readonly, nonatomic) UIBarButtonItem *addContactBarButtonItem;
@property (retain, nonatomic) NSObject<NSCopying> *currentRequestIdentifier; // ivar: _currentRequestIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactPickerContentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly) Class superclass;


+(BOOL)getViewController:(id)arg0 ;
+(id)contactPickerExtension;
+(id)contextForIdentifier:(id)arg0 ;
-(void)invalidate;
-(void)invalidateSelectionAnimated:(BOOL)arg0 ;
-(void)pickerDidCancel;
-(void)pickerDidSelectAddNewContact;
-(void)pickerDidSelectContact:(id)arg0 property:(id)arg1 ;
-(void)pickerDidSelectContacts:(id)arg0 properties:(id)arg1 ;
-(void)setupWithOptions:(id)arg0 readyBlock:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif