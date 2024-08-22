// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPHOTOPICKERVIEWCONTROLLER_H
#define CNPHOTOPICKERVIEWCONTROLLER_H

@class NSString, CNMutableContact;
@protocol CNPhotoPickerViewControllerDelegate;


#import "CNVisualIdentityPickerViewController.h"

@interface CNPhotoPickerViewController : CNVisualIdentityPickerViewController

@property (retain, nonatomic) NSString *assignActionTitleOverride;
@property (weak, nonatomic) NSObject<CNPhotoPickerViewControllerDelegate> *delegate; // ivar: delegate
@property (retain, nonatomic) CNMutableContact *pendingEditContact; // ivar: _pendingEditContact


+(BOOL)canShowAvatarEditor;
+(id)log;
+(id)navigationControllerForPicker:(id)arg0 ;
+(id)photoPickerForGameCenterWithContact:(id)arg0 ;
-(id)contactViewCache;
-(id)initWithContact:(id)arg0 style:(id)arg1 configuration:(id)arg2 ;
-(id)viewControllerForPhotoView:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)done:(id)arg0 ;
-(void)photoView:(id)arg0 didAcceptDropOfImageData:(id)arg1 ;
-(void)photoViewDidUpdate:(id)arg0 ;
-(void)updateHeaderViewAvatar;
-(void)updatePendingEditContact;


@end


#endif