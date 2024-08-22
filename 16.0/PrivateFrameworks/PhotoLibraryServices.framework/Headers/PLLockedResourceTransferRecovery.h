// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLOCKEDRESOURCETRANSFERRECOVERY_H
#define PLLOCKEDRESOURCETRANSFERRECOVERY_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "PLFileSystemImportAsset.h"

@interface PLLockedResourceTransferRecovery : NSObject

@property (readonly, nonatomic) NSURL *destinationDirectoryURL; // ivar: _destinationDirectoryURL
@property (readonly, nonatomic) PLFileSystemImportAsset *transferAsset; // ivar: _transferAsset


+(BOOL)isStaleResourceURL:(id)arg0 asset:(id)arg1 resource:(id)arg2 pathManager:(id)arg3 ;
+(BOOL)updateAssetPropertiesAndSaveForAsset:(id)arg0 moveToDestinationScope:(unsigned short)arg1 library:(id)arg2 error:(*id)arg3 ;
+(id)assetDirectoryForAsset:(id)arg0 bundleScope:(unsigned short)arg1 pathManager:(id)arg2 ;
+(id)assetMainScopeDirectoryFromMarkerFilePathRelativeToBundle:(id)arg0 pathManager:(id)arg1 ;
+(id)dcimDirectoryForAssetDirectory:(id)arg0 filename:(id)arg1 bundleScope:(unsigned short)arg2 pathManager:(id)arg3 ;
+(id)dcimFileURLForAsset:(id)arg0 cplResourceType:(NSUInteger)arg1 version:(unsigned int)arg2 recipeID:(unsigned int)arg3 resourceType:(unsigned int)arg4 utiString:(id)arg5 bundleScope:(unsigned short)arg6 pathManager:(id)arg7 ;
+(id)dcimFileURLForAsset:(id)arg0 resource:(id)arg1 bundleScope:(unsigned short)arg2 pathManager:(id)arg3 ;
+(id)destinationURLForResource:(id)arg0 asset:(id)arg1 bundleScope:(unsigned short)arg2 pathManager:(id)arg3 ;
+(id)dontImportMarkerFileURLForAsset:(id)arg0 bundleScope:(unsigned short)arg1 pathManager:(id)arg2 ;
+(id)lockedTransferRecoveryMarkerFileExtension;
+(id)pathToResourceDirectoryForPhotoDirectoryType:(unsigned char)arg0 fromMarkerFilePathRelativeToBundle:(id)arg1 pathManager:(id)arg2 ;
+(unsigned short)oppositeBundleScope:(unsigned short)arg0 ;
+(void)_validateAsset:(id)arg0 pathManager:(id)arg1 ;
+(void)enumerateFilesInDirectoryWithType:(unsigned char)arg0 forMarkerFilePathRelativeToBundle:(id)arg1 pathManager:(id)arg2 block:(id)arg3 ;
+(void)validateAssetWithUUID:(id)arg0 inLibrary:(id)arg1 ;
-(BOOL)recoverFromInProgressLockedTransferForImportAsset:(id)arg0 pathManager:(id)arg1 ;
-(id)initWithTransferImportAsset:(id)arg0 destinationDirectoryURL:(id)arg1 ;


@end


#endif