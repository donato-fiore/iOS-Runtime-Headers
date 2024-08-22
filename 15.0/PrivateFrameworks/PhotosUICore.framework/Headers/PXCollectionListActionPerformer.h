// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCOLLECTIONLISTACTIONPERFORMER_H
#define PXCOLLECTIONLISTACTIONPERFORMER_H

@class PHCollectionList, PHAssetCollection;


#import "PXActionPerformer.h"

@interface PXCollectionListActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PHCollectionList *collectionList; // ivar: _collectionList
@property (retain, nonatomic) PHAssetCollection *createdAssetCollection; // ivar: _createdAssetCollection


+(BOOL)canPerformActionForCollectionList:(id)arg0 ;
+(id)localizedTitleForActionType:(id)arg0 ;
-(NSInteger)_albumInsertionIndex;
-(id)initWithActionType:(id)arg0 collectionList:(id)arg1 ;
-(void)createAlbumWithAssets:(id)arg0 albumTitle:(id)arg1 ;
-(void)handleCreateSharedAlbum;
-(void)performUserInteractionTask;
-(void)presentSetupUIForAlbumCreationWithCompletionHandler:(id)arg0 ;


@end


#endif