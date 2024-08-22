// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIASSIGNTOCONTACTACTIVITY_H
#define UIASSIGNTOCONTACTACTIVITY_H

@class NSString, UIImage, UIImagePickerController, CNContactPickerViewController, CNContact;
@protocol CNContactPickerDelegate, CNContactViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate;


#import "UIActivity.h"

@interface UIAssignToContactActivity : UIActivity <CNContactPickerDelegate, CNContactViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImagePickerController *imagePickerController; // ivar: _imagePickerController
@property (retain, nonatomic) CNContactPickerViewController *peoplePicker; // ivar: _peoplePicker
@property (retain, nonatomic) CNContact *person; // ivar: _person
@property (readonly) Class superclass;


+(BOOL)_isCapabilityBasedActivity;
+(NSUInteger)_xpcAttributes;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContactProperty:(id)arg1 ;
-(id)_embeddedActivityViewController;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(void)_cleanup;
-(void)_willPresentAsFormSheet;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif