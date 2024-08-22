// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKSHAREEPICKERVIEWCONTROLLER_H
#define EKSHAREEPICKERVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray;
@protocol EKEventAttendeePickerDelegate, EKUIManagedViewController, EKShareePickerViewControllerDelegate;


#import "EKCalendarShareePicker.h"

@interface EKShareePickerViewController : UIViewController <EKEventAttendeePickerDelegate, EKUIManagedViewController>

 {
    EKCalendarShareePicker *_picker;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKShareePickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *sharees;
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)canManagePresentationStyle;
-(BOOL)wantsManagement;
-(NSUInteger)eventAttendeePicker:(id)arg0 getValidationStatusForAddress:(id)arg1 ;
-(id)_createRecipientFromSharee:(id)arg0 ;
-(id)_createShareeFromRecipient:(id)arg0 ;
-(id)_recipientFromSharee:(id)arg0 ;
-(id)_shareeFromRecipient:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 calendar:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)add;
-(void)cancel;
-(void)eventAttendeePicker:(id)arg0 cacheValidationStatus:(NSUInteger)arg1 forAddress:(id)arg2 ;
-(void)setSearchAccountID:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif