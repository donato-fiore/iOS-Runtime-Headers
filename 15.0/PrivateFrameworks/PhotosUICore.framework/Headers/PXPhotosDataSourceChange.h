// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSDATASOURCECHANGE_H
#define PXPHOTOSDATASOURCECHANGE_H

@class NSDictionary, PHFetchResultChangeDetails, NSIndexSet, NSArray, PHChange;

#import <Foundation/Foundation.h>

#import "PXSectionedDataSourceChangeDetails.h"

@interface PXPhotosDataSourceChange : NSObject {
    NSInteger _previousCollectionsCount;
    NSDictionary *_assetCollectionToSectionCache;
    PHFetchResultChangeDetails *_collectionListChangeDetails;
    NSDictionary *_assetCollectionChangeDetails;
    BOOL _prepared;
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    NSIndexSet *_changedSections;
    NSArray *_deletedIndexPaths;
    NSArray *_insertedIndexPaths;
    NSArray *_changedIndexPaths;
    NSArray *_contentChangedIndexPaths;
    NSArray *_favoriteChangedIndexPaths;
    BOOL _changesAreNoOp;
}


@property (readonly, copy) NSArray *changedIndexPaths;
@property (readonly, copy) NSIndexSet *changedSections;
@property (readonly) BOOL changesAreNoOp;
@property (readonly, copy) NSArray *contentChangedIndexPaths;
@property (readonly, copy) NSArray *deletedIndexPaths;
@property (readonly, copy) NSIndexSet *deletedSections;
@property (readonly, copy) NSArray *favoriteChangedIndexPaths;
@property (readonly) BOOL hasIncrementalChanges;
@property (readonly, copy) NSArray *insertedIndexPaths;
@property (readonly, copy) NSIndexSet *insertedSections;
@property (readonly, weak) PHChange *originatingPhotoLibraryChange; // ivar: _originatingPhotoLibraryChange
@property (readonly) PXSectionedDataSourceChangeDetails *sectionedDataSourceChangeDetails; // ivar: _sectionedDataSourceChangeDetails
@property (readonly, nonatomic) NSIndexSet *sectionsWithKeyAssetChanges; // ivar: _sectionsWithKeyAssetChanges


-(BOOL)_shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg0 collectionChangeNotifications:(id)arg1 ;
-(BOOL)affectsSectionsInRange:(struct _NSRange )arg0 ;
-(id)description;
-(id)indexPathAfterApplyingIncrementalChangesToIndexPath:(id)arg0 ;
-(id)indexPathAfterRevertingIncrementalChangeDetailsFromIndexPath:(id)arg0 ;
-(id)initWithFromIdentifier:(NSInteger)arg0 toIdentifier:(NSInteger)arg1 ;
-(id)initWithIncrementalChanges:(id)arg0 assetCollectionChangeDetails:(id)arg1 sectionsWithKeyAssetChanges:(id)arg2 previousCollectionsCount:(NSInteger)arg3 assetCollectionToSectionCache:(id)arg4 originatingPhotoLibraryChange:(id)arg5 fromIdentifier:(NSInteger)arg6 toIdentifier:(NSInteger)arg7 ;
-(void)_prepareIncrementalDetails;
-(void)prepareIfNeeded;


@end


#endif