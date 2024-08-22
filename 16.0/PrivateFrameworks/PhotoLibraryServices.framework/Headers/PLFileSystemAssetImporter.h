// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLFILESYSTEMASSETIMPORTER_H
#define PLFILESYSTEMASSETIMPORTER_H

@class NSString, NSMutableIndexSet, NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"
#import "PLLibraryServicesManager.h"

@interface PLFileSystemAssetImporter : NSObject {
    PLPhotoLibrary *_photoLibrary;
    PLLibraryServicesManager *_libraryServicesManager;
    NSString *_libraryBundlePath;
    NSString *_photoLibraryStoreUUID;
    NSMutableIndexSet *_thumbIndexes;
    BOOL _hasProcessedAnyAssets;
}


@property (retain, nonatomic) NSMutableDictionary *existingOIDsByUUID; // ivar: _existingOIDsByUUID
@property (retain, nonatomic) NSMutableSet *existingUUIDs; // ivar: _existingUUIDs
@property (retain, nonatomic) NSMutableDictionary *existingUUIDsByUppercasePath; // ivar: _existingUUIDsByUppercasePath
@property (nonatomic) NSUInteger thumbnailBatchFetchSize; // ivar: _thumbnailBatchFetchSize


-(BOOL)_setupAdjustmentsFromAdjustmentFileForAsset:(id)arg0 ;
-(BOOL)_setupPhotoAsset:(id)arg0 withURL:(id)arg1 isPlaceholder:(BOOL)arg2 hasVideoComplementResource:(BOOL)arg3 ;
-(BOOL)_setupPhotoAsset:(id)arg0 withURL:(id)arg1 unknownType:(BOOL)arg2 isPlaceholder:(BOOL)arg3 hasVideoComplementResource:(BOOL)arg4 ;
-(BOOL)_setupPhotoAssetAsPhotoIrisIfNeeded:(id)arg0 hasVideoComplementResource:(BOOL)arg1 ;
-(BOOL)_setupUnknownAsset:(id)arg0 withURL:(id)arg1 ;
-(BOOL)_setupVideoAsset:(id)arg0 withURL:(id)arg1 ;
-(NSUInteger)nextThumbnailIndex;
-(id)_addAssetWithURL:(id)arg0 existingOID:(id)arg1 assetUUID:(id)arg2 isPlaceholder:(BOOL)arg3 ;
-(id)_assetAdjustmentsIfExistsForAsset:(id)arg0 ;
-(id)addAssetWithURLs:(id)arg0 assetPayload:(id)arg1 forceInsert:(BOOL)arg2 forceUpdate:(BOOL)arg3 fixAddedDate:(BOOL)arg4 ;
-(id)assetURLisInDatabase:(id)arg0 deferredPreviewURL:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 libraryServicesManager:(id)arg1 ;
-(id)libraryBundlePathWithPhotoLibrary:(id)arg0 ;
-(void)addAvailableThumbnailIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setModificationAndCreationDateOnAsset:(id)arg0 withURL:(id)arg1 ;


@end


#endif