// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSHARINGPROFILEAVATARITEMPROVIDER_H
#define CNSHARINGPROFILEAVATARITEMPROVIDER_H

@class NSArray, CNContact, NSData, PRMonogramColor;
@protocol AVTAvatarRecord;

#import <Foundation/Foundation.h>

#import "CNPhotoPickerColorVariant.h"
#import "CNSharingProfileAvatarItem.h"
#import "CNSharingProfileAvatarItemProviderConfiguration.h"
#import "CNSharingProfileLogger.h"
#import "CNAvatarImageRenderer.h"
#import "CNPhotoPickerVariantsManager.h"

@interface CNSharingProfileAvatarItemProvider : NSObject

@property (retain, nonatomic) CNPhotoPickerColorVariant *animojiColor; // ivar: _animojiColor
@property (retain, nonatomic) CNSharingProfileAvatarItem *animojiItem; // ivar: _animojiItem
@property (readonly, nonatomic) NSArray *avatarItems;
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (nonatomic) BOOL contactIsFromFullPhotoPicker; // ivar: _contactIsFromFullPhotoPicker
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) CNSharingProfileLogger *logger; // ivar: _logger
@property (retain, nonatomic) NSData *memojiMetadata;
@property (retain, nonatomic) PRMonogramColor *monogramColor;
@property (retain, nonatomic) CNSharingProfileAvatarItem *monogramItem; // ivar: _monogramItem
@property (retain, nonatomic) CNSharingProfileAvatarItem *photoItem; // ivar: _photoItem
@property (retain, nonatomic) CNSharingProfileAvatarItem *previousAnimojiItem; // ivar: _previousAnimojiItem
@property (retain, nonatomic) CNSharingProfileAvatarItem *previousPhotoItem; // ivar: _previousPhotoItem
@property (retain, nonatomic) CNAvatarImageRenderer *renderer; // ivar: _renderer
@property (nonatomic) BOOL shouldIncludeAnimoji; // ivar: _shouldIncludeAnimoji
@property (nonatomic) BOOL shouldIncludeMonogram; // ivar: _shouldIncludeMonogram
@property (nonatomic) BOOL shouldIncludePhoto; // ivar: _shouldIncludePhoto
@property (nonatomic) BOOL shouldIncludeSilhouette; // ivar: _shouldIncludeSilhouette
@property (retain, nonatomic) CNSharingProfileAvatarItem *silhouetteItem; // ivar: _silhouetteItem
@property (nonatomic) BOOL useRTL; // ivar: _useRTL
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager


+(id)animojiItemWithRecord:(id)arg0 stickerConfiguration:(id)arg1 backgroundColor:(id)arg2 ;
+(id)compositeImageForImage:(id)arg0 backgroundImage:(id)arg1 ;
+(id)contactImageItemWithContact:(id)arg0 renderer:(id)arg1 logger:(id)arg2 type:(NSInteger)arg3 ;
+(id)descriptorForRequiredKeys;
+(id)monogramImageItemWithContact:(id)arg0 monogramColor:(id)arg1 renderer:(id)arg2 RTL:(BOOL)arg3 ;
+(id)originalAnimojiImageForRecord:(id)arg0 stickerConfiguration:(id)arg1 size:(struct CGSize )arg2 ;
+(id)silhouetteImageItemWithRenderer:(id)arg0 ;
+(id)unposedImageForAvatarRecord:(id)arg0 ;
-(BOOL)contactHasImageOfPhotoType:(id)arg0 ;
-(id)animojColor;
-(id)initWithContact:(id)arg0 avatarRecord:(id)arg1 logger:(id)arg2 ;
-(void)buildItems;
-(void)clearCachedItems;
-(void)pickRandomColors;
-(void)updateWithContact:(id)arg0 fromFullPhotoPicker:(BOOL)arg1 ;


@end


#endif