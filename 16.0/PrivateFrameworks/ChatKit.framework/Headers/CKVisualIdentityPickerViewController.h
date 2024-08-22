// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVISUALIDENTITYPICKERVIEWCONTROLLER_H
#define CKVISUALIDENTITYPICKERVIEWCONTROLLER_H

@class CNVisualIdentityPickerViewController;
@protocol CNVisualIdentityPickerViewControllerDelegate, CKVisualIdentityPickerViewControllerDelegate;


#import "CKConversation.h"

@interface CKVisualIdentityPickerViewController : CNVisualIdentityPickerViewController <CNVisualIdentityPickerViewControllerDelegate>



@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (weak, nonatomic) NSObject<CKVisualIdentityPickerViewControllerDelegate> *presentationDelegate; // ivar: _presentationDelegate


+(id)imagePickerForContact:(id)arg0 ;
+(id)imagePickerForGroupIdentity:(id)arg0 withConversation:(id)arg1 ;
-(void)visualIdentityPicker:(id)arg0 didUpdatePhotoForVisualIdentity:(id)arg1 withContactImage:(id)arg2 ;
-(void)visualIdentityPickerDidCancel:(id)arg0 ;


@end


#endif