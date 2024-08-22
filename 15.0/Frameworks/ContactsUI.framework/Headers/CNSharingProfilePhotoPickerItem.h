// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSHARINGPROFILEPHOTOPICKERITEM_H
#define CNSHARINGPROFILEPHOTOPICKERITEM_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>

#import "CNSharingProfileAvatarItem.h"

@interface CNSharingProfilePhotoPickerItem : NSObject

@property (retain, nonatomic) CNSharingProfileAvatarItem *avatarItem; // ivar: _avatarItem
@property (retain, nonatomic) UIImage *cachedPreviewImage; // ivar: _cachedPreviewImage
@property (retain, nonatomic) NSString *symbolImageName; // ivar: _symbolImageName


-(id)compositeImageWithSize:(struct CGSize )arg0 ;
-(id)originalImageWithSize:(struct CGSize )arg0 ;


@end


#endif