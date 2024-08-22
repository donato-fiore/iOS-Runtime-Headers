// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSTONEPURCHASECONTINUATION_H
#define MSTONEPURCHASECONTINUATION_H

@class SUPurchaseContinuation, UIActionSheet, UIAlertView, CNContactPickerViewController, NSString;
@protocol CNContactPickerDelegate, UIActionSheetDelegate, UIAlertViewDelegate;



@interface MSTonePurchaseContinuation : SUPurchaseContinuation <CNContactPickerDelegate, UIActionSheetDelegate, UIAlertViewDelegate>

 {
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    CNContactPickerViewController *_contactPicker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_copyAllowedToneStyles;
-(id)initWithPurchase:(id)arg0 ;
-(void)_destroyActionSheet;
-(void)_destroyAlertView;
-(void)_dismissContactPicker;
-(void)_pickAssigneeToneStyle;
-(void)_showPeoplePicker;
-(void)actionSheet:(id)arg0 didDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)actionSheetCancel:(id)arg0 ;
-(void)alertView:(id)arg0 didDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)alertViewCancel:(id)arg0 ;
-(void)cancel;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)start;


@end


#endif