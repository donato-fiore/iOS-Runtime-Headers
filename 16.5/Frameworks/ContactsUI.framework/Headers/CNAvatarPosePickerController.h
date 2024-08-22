// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAVATARPOSEPICKERCONTROLLER_H
#define CNAVATARPOSEPICKERCONTROLLER_H

@protocol CNPhotoPickerVariantListControllerDelegate, CNAvatarPosePickerControllerDelegate;

#import <Foundation/Foundation.h>

#import "CNPhotoPickerAnimojiProviderItem.h"
#import "CNPhotoPickerVariantListController.h"
#import "CNPhotoPickerVariantsManager.h"

@interface CNAvatarPosePickerController : NSObject <CNPhotoPickerVariantListControllerDelegate>



@property (weak, nonatomic) NSObject<CNAvatarPosePickerControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGSize desiredContentSize; // ivar: _desiredContentSize
@property (nonatomic) NSInteger numberOfItemsPerRow; // ivar: _numberOfItemsPerRow
@property (retain, nonatomic) CNPhotoPickerAnimojiProviderItem *originalProviderItem; // ivar: _originalProviderItem
@property (retain, nonatomic) CNPhotoPickerVariantListController *posePickerController; // ivar: _posePickerController
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager


-(id)initWithAnimojiProviderItem:(id)arg0 variantsManager:(id)arg1 ;
-(id)initWithAvatarRecord:(id)arg0 variantsManager:(id)arg1 ;
-(id)posePickerViewController;
-(void)photoPickerVariantListController:(id)arg0 didSelectProviderItem:(id)arg1 ;
-(void)photoPickerVariantListControllerDidCancel:(id)arg0 ;


@end


#endif