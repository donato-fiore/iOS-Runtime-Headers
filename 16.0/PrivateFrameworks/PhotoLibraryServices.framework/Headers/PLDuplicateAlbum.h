// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLDUPLICATEALBUM_H
#define PLDUPLICATEALBUM_H

@class NSSet;


#import "PLManagedAlbum.h"

@interface PLDuplicateAlbum : PLManagedAlbum

@property (nonatomic) short duplicateType;
@property (retain, nonatomic) NSSet *metadataMatchingAssets;
@property (retain, nonatomic) NSSet *perceptualMatchingAssets;
@property (nonatomic) NSInteger processingVersion;


+(id)albumSupportsAssetOrderKeysPredicate;
+(id)duplicateAlbumsInCurrentManagedObjectContext:(id)arg0 ;
+(id)duplicateAlbumsInCurrentManagedObjectContext:(id)arg0 predicate:(id)arg1 ;
+(id)duplicateAlbumsInCurrentManagedObjectContext:(id)arg0 type:(short)arg1 ;
+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg0 ;
-(BOOL)hasDuplicateAssetVisibilityStateVisibleAssets:(id)arg0 ;
-(BOOL)supportsAssetOrderKeys;
-(id)albumAssetsFetchRequestForDuplicateSort;
-(id)duplicateAssetsFromCollection;
-(id)mutableMetadataMatchingAssets;
-(id)mutablePerceptualMatchingAssets;
-(void)addAssets:(id)arg0 type:(short)arg1 ;
-(void)awakeFromInsert;
-(void)cleanupAlbumForDeletedDuplicateAsset;
-(void)removeAssetsAtIndexes:(id)arg0 ;
-(void)removeInternalAssets:(id)arg0 ;
-(void)sortAssets;
-(void)updateAlbumType;
-(void)updateDuplicateAssetVisibilityStatePropertyForAsset:(id)arg0 duplicateAssetVisibilityState:(short)arg1 ;
-(void)updateDuplicateAssetVisibilityStateWithDuplicateAssets:(id)arg0 ;


@end


#endif