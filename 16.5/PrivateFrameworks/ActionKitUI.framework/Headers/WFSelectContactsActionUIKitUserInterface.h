// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSELECTCONTACTSACTIONUIKITUSERINTERFACE_H
#define WFSELECTCONTACTSACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSArray, NSString;
@protocol WFSelectContactsActionUserInterface, CNContactPickerDelegate, UIAdaptivePresentationControllerDelegate;



@interface WFSelectContactsActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFSelectContactsActionUserInterface, CNContactPickerDelegate, UIAdaptivePresentationControllerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSArray *contactProperties; // ivar: _contactProperties
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL selectMultiple; // ivar: _selectMultiple
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperties:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContacts:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)finishWithContacts:(id)arg0 error:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)showWithProperties:(id)arg0 selectMultiple:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif