// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARLIBRARYMODEL_H
#define AVTAVATARLIBRARYMODEL_H

@class NSString, NSArray, NSMutableArray;
@protocol AVTAvatarEditorViewControllerDelegate, AVTAvatarStoreInternal, AVTAvatarLibraryModelDelegate;

#import <Foundation/Foundation.h>

#import "AVTAvatarLibraryCreateNewItem.h"
#import "AVTUIEnvironment.h"
#import "AVTViewSessionProvider.h"

@interface AVTAvatarLibraryModel : NSObject <AVTAvatarEditorViewControllerDelegate>



@property (readonly, nonatomic) NSObject<AVTAvatarStoreInternal> *avatarStore; // ivar: _avatarStore
@property (readonly, nonatomic) AVTAvatarLibraryCreateNewItem *createNewItem; // ivar: _createNewItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarLibraryModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCreatingAvatar; // ivar: _isCreatingAvatar
@property (readonly, nonatomic) NSArray *libraryItems;
@property (readonly, nonatomic) NSMutableArray *mutableLibraryItems; // ivar: _mutableLibraryItems
@property (readonly) Class superclass;
@property (readonly, nonatomic) AVTViewSessionProvider *viewSessionProvider; // ivar: _viewSessionProvider


-(NSInteger)indexForRecord:(id)arg0 ;
-(NSUInteger)numberOfRecords;
-(id)initWithAvatarStore:(id)arg0 avtViewSessionProvider:(id)arg1 environment:(id)arg2 ;
-(id)libraryItemsFromAvatarRecords:(id)arg0 ;
-(void)avatarEditorViewController:(id)arg0 didFinishWithAvatarRecord:(id)arg1 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg0 ;
-(void)insertItemForRecord:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)load;
-(void)performActionOnItemAtIndex:(NSUInteger)arg0 ;
-(void)presentActionSheetForRecordItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)presentEditor:(id)arg0 forCreating:(BOOL)arg1 ;
-(void)presetShareSheetWithRecords:(id)arg0 fromItem:(id)arg1 ;
-(void)reloadDataForRecords:(id)arg0 ;
-(void)removeItemForRecordAtIndex:(NSUInteger)arg0 ;
-(void)storeDidChangeNotification:(id)arg0 ;
-(void)updateForCreatedRecord:(id)arg0 ;
-(void)updateForEditedRecord:(id)arg0 ;


@end


#endif