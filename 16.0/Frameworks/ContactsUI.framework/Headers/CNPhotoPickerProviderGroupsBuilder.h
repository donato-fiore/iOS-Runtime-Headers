// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPHOTOPICKERPROVIDERGROUPSBUILDER_H
#define CNPHOTOPICKERPROVIDERGROUPSBUILDER_H

@protocol AVTAvatarStore;

#import <Foundation/Foundation.h>

#import "CNContactViewCache.h"
#import "CNUIContactsEnvironment.h"
#import "CNVisualIdentity.h"

@interface CNPhotoPickerProviderGroupsBuilder : NSObject

@property (readonly, nonatomic) NSObject<AVTAvatarStore> *avatarStore; // ivar: _avatarStore
@property (readonly, nonatomic) CNContactViewCache *contactViewCache; // ivar: _contactViewCache
@property (readonly, nonatomic) CNUIContactsEnvironment *environment; // ivar: _environment
@property (nonatomic) BOOL includeAddAnimojiItem; // ivar: _includeAddAnimojiItem
@property (nonatomic) BOOL includeAddEmojiItem; // ivar: _includeAddEmojiItem
@property (nonatomic) BOOL includeAnimoji; // ivar: _includeAnimoji
@property (nonatomic) BOOL includeContactImage; // ivar: _includeContactImage
@property (nonatomic) BOOL includeFaces; // ivar: _includeFaces
@property (nonatomic) BOOL includeMonograms; // ivar: _includeMonograms
@property (nonatomic) BOOL includePhotoFromLibraryItem; // ivar: _includePhotoFromLibraryItem
@property (nonatomic) BOOL includeRecents; // ivar: _includeRecents
@property (nonatomic) BOOL includeTakePhotoItem; // ivar: _includeTakePhotoItem
@property (nonatomic) BOOL includeUnifiedContactImages; // ivar: _includeUnifiedContactImages
@property (readonly, nonatomic) BOOL includesAnyPhotoContent;
@property (nonatomic) BOOL includesEmojiContent; // ivar: _includesEmojiContent
@property (nonatomic) BOOL shouldOrderEmojiBeforeAnimoji; // ivar: _shouldOrderEmojiBeforeAnimoji
@property (readonly, nonatomic) CNVisualIdentity *visualIdentity; // ivar: _visualIdentity


+(id)builderWithVisualIdentity:(id)arg0 avatarStore:(id)arg1 environment:(id)arg2 contactViewCache:(id)arg3 photoPickerConfiguration:(id)arg4 ;
-(id)addItemsContentGroup;
-(id)animojiContentGroup;
-(id)build;
-(id)emojiContentGroup;
-(id)initWithVisualIdentity:(id)arg0 avatarStore:(id)arg1 environment:(id)arg2 contactViewCache:(id)arg3 ;
-(id)injectedItemsGroup;
-(id)photoContentGroup;


@end


#endif