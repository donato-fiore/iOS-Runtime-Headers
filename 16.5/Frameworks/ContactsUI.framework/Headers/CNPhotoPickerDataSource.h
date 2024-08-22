// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPHOTOPICKERDATASOURCE_H
#define CNPHOTOPICKERDATASOURCE_H

@class NSIndexPath, NSString, NSArray, NSMutableArray;
@protocol CNPhotoPickerProviderGroupDelegate, AVTAvatarStore;

#import <Foundation/Foundation.h>

#import "CNContactViewCache.h"
#import "CNPhotoPickerVariantsManager.h"
#import "CNVisualIdentity.h"

@interface CNPhotoPickerDataSource : NSObject <CNPhotoPickerProviderGroupDelegate>



@property (retain, nonatomic) NSIndexPath *activePhotoIndexPath; // ivar: _activePhotoIndexPath
@property (nonatomic) BOOL allowsPhotoLibraryAccess; // ivar: _allowsPhotoLibraryAccess
@property (readonly, nonatomic) NSObject<AVTAvatarStore> *avatarStore; // ivar: _avatarStore
@property (readonly, nonatomic) CNContactViewCache *contactViewCache; // ivar: _contactViewCache
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNPhotoPickerProviderGroupDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *emojiSuggestionItems; // ivar: _emojiSuggestionItems
@property (retain, nonatomic) NSMutableArray *groupIsCollapsedState; // ivar: _groupIsCollapsedState
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger itemsPerRow;
@property (readonly, nonatomic) NSArray *providerGroups; // ivar: _providerGroups
@property (readonly) Class superclass;
@property (readonly, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager
@property (retain, nonatomic) CNVisualIdentity *visualIdentity; // ivar: _visualIdentity


-(BOOL)isItemAtIndexPathAddItem:(id)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)sectionIndexForProviderGroup:(id)arg0 ;
-(NSInteger)sectionIndexForProviderGroupType:(NSInteger)arg0 ;
-(id)actionTitleForSection:(NSInteger)arg0 ;
-(id)findActiveIndexPathInGroup:(id)arg0 withImageData:(id)arg1 ;
-(id)indexOfAddedItem:(id)arg0 inGroupOfType:(NSInteger)arg1 ;
-(id)indexPathsToReloadForUpdatedGroup:(id)arg0 ;
-(id)initWithVisualIdentity:(id)arg0 contactViewCache:(id)arg1 photoPickerConfiguration:(id)arg2 ;
-(id)initWithVisualIdentity:(id)arg0 contactViewCache:(id)arg1 providerGroups:(id)arg2 avatarStore:(id)arg3 ;
-(id)injectedItemsGroup;
-(id)monogramProviderDefaultItemWithSize:(struct CGSize )arg0 ;
-(id)monogramProviderMonogramItemWithSize:(struct CGSize )arg0 ;
-(id)providerGroupAtIndexPath:(id)arg0 ;
-(id)providerGroupAtSection:(NSInteger)arg0 ;
-(id)providerItemAtIndexPath:(id)arg0 ;
-(id)removeItem:(id)arg0 ;
-(id)suggestionsGroup;
-(id)titleForSection:(NSInteger)arg0 ;
-(id)uniqueEmojiSuggestionItems:(id)arg0 ;
-(void)loadProviderGroupsItemsForSize:(struct CGSize )arg0 itemsPerRow:(CGFloat)arg1 scale:(CGFloat)arg2 RTL:(BOOL)arg3 ;
-(void)photoPickerProviderGroup:(id)arg0 didUpdateItem:(id)arg1 ;
-(void)photoPickerProviderGroupDidUpdate:(id)arg0 ;
-(void)updateGroupCollapsedStateForSection:(NSInteger)arg0 ;


@end


#endif