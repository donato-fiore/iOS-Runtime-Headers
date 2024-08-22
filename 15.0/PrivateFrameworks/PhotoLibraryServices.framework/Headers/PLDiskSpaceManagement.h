// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLDISKSPACEMANAGEMENT_H
#define PLDISKSPACEMANAGEMENT_H


#import <Foundation/Foundation.h>


@interface PLDiskSpaceManagement : NSObject



+(NSInteger)_processCloudSharedAsset:(id)arg0 shouldFreeSpace:(BOOL)arg1 ;
+(NSUInteger)_scanAndDeleteCacheFilesInDirectory:(id)arg0 shouldFreeSpace:(BOOL)arg1 bytesToPurge:(NSUInteger)arg2 ;
+(NSUInteger)_scanFilesInPhotoLibrary:(id)arg0 fromCloudSharingCacheDataDirectoryShouldFreeSpace:(BOOL)arg1 bytesToPurge:(NSUInteger)arg2 ;
+(NSUInteger)_scanFilesInPhotoLibrary:(id)arg0 fromPhotoMetadataDirectoryShouldFreeSpace:(BOOL)arg1 bytesToPurge:(NSUInteger)arg2 skipAssets:(id)arg3 ;
+(NSUInteger)_scanFilesInPhotoLibrary:(id)arg0 fromReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(BOOL)arg1 bytesToPurge:(NSUInteger)arg2 ;
+(NSUInteger)performCloudSharingSpaceManagementWithBytesToPurge:(NSUInteger)arg0 shouldFreeSpace:(BOOL)arg1 shouldKeepRecentlyViewedAssets:(BOOL)arg2 fromPhotoLibrary:(id)arg3 ;


@end


#endif