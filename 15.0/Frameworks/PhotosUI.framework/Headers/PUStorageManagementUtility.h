// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSTORAGEMANAGEMENTUTILITY_H
#define PUSTORAGEMANAGEMENTUTILITY_H

@class PHPhotoLibrary, NSNumber;

#import <Foundation/Foundation.h>


@interface PUStorageManagementUtility : NSObject {
    PHPhotoLibrary *_photoLibrary;
}


@property (readonly, nonatomic) BOOL isCPLEnabled;
@property (readonly, nonatomic) BOOL isCPLInExitMode;
@property (readonly, nonatomic) BOOL isDeletableItemsInTrash;
@property (readonly, nonatomic) BOOL isOptimizedModeOn;
@property (readonly, nonatomic) BOOL shouldHideCPL;
@property (readonly, nonatomic) NSNumber *sizeForRecentlyDeletedItems;
@property (readonly, nonatomic) NSNumber *sizeForTrashedSpatialOvercaptureResources;
@property (readonly, nonatomic) NSUInteger totalReclaimableSizeFromPurgingVideoClips;


+(id)stringWithSizeUnitForValue:(id)arg0 ;
-(id)_assetsInTrash;
-(id)_assetsWithSpatialOvercaptureResources;
-(id)_defaultVideoAssetFetchOptionsWithSortOrder:(BOOL)arg0 fetchLimit:(NSUInteger)arg1 minimumFileSize:(NSUInteger)arg2 ;
-(id)_deleteableVideoAssets;
-(id)fetchVideoAssetsBySizeWithSortOrder:(BOOL)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)significantItems;
-(void)enableCPLWithCompletionBlock:(id)arg0 ;
-(void)enableOptimizedMode:(BOOL)arg0 ;
-(void)expungeRecentlyDeletedItemsWithCompletionBlock:(id)arg0 ;
-(void)expungeTrashedSpatialOverCaptureResourcesWithCompletionBlock:(id)arg0 ;
-(void)purgeableSizeAndOriginalsInLibrary:(id)arg0 ;


@end


#endif