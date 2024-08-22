// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHIMPORTER_H
#define PHIMPORTER_H

@class PLImportFileManager, NSMutableDictionary, NSMutableArray, PLCacheDeleteClient, NSString, NSMutableSet, NSProgress;
@protocol PHImportServiceImporterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"
#import "PHImportOptions.h"
#import "PHImportResults.h"
#import "PHImportSource.h"

@interface PHImporter : NSObject {
    id<PHImportServiceImporterDelegate> *_delegate;
    id *_completionHandler;
    NSObject<OS_dispatch_queue> *_importQueue;
    unsigned char _importState;
    PLImportFileManager *_importFileManager;
    NSMutableDictionary *_downloadFolderUrlByImportIdentifier;
    NSMutableArray *_additionalDcimImportFolders;
    NSMutableDictionary *_parentFolderMapping;
    NSMutableArray *_downloadedRecords;
    BOOL _isCanceled;
    NSMutableDictionary *_folderByFolderPath;
    NSMutableDictionary *_containerPathByLocalIdentifier;
    NSMutableDictionary *_albumByAlbumPath;
    NSMutableDictionary *_albumRequestsByAlbumId;
    NSMutableDictionary *_folderRequestByFolderId;
    NSUInteger _importBatchSize;
}


@property (retain, nonatomic) PLCacheDeleteClient *cacheDeleteClient; // ivar: _cacheDeleteClient
@property (retain, nonatomic) NSString *importSessionID; // ivar: _importSessionID
@property (retain, nonatomic) NSMutableSet *importedBurstUUIDs; // ivar: _importedBurstUUIDs
@property (retain, nonatomic) PHPhotoLibrary *library; // ivar: _library
@property (retain, nonatomic) PHImportOptions *options; // ivar: _options
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) PHImportResults *results; // ivar: _results
@property (retain, nonatomic) PHImportSource *source; // ivar: _source


+(id)removeItemAtPath:(id)arg0 type:(NSUInteger)arg1 recursive:(BOOL)arg2 ;
+(void)dumpImageData:(id)arg0 ;
+(void)dumpMetadataForData:(id)arg0 ;
+(void)importAssets:(id)arg0 fromImportSource:(id)arg1 intoLibrary:(id)arg2 withOptions:(id)arg3 progress:(*id)arg4 delegate:(id)arg5 atEnd:(id)arg6 ;
-(BOOL)handleErrorsForRecord:(id)arg0 batch:(id)arg1 file:(char *)arg2 line:(int)arg3 ;
-(BOOL)shouldImportRecordAsReference:(id)arg0 ;
-(BOOL)shouldIngestInPlace:(id)arg0 ;
-(id)_importRecord:(id)arg0 createdAlbumIdentifiers:(id)arg1 createdFolderIdentifiers:(id)arg2 ;
-(id)_recordsToImportWithCount:(NSUInteger)arg0 ;
-(id)beginImport:(id)arg0 ;
-(id)createAlbumForPath:(id)arg0 inFolder:(id)arg1 error:(*id)arg2 ;
-(id)createFolderForPath:(id)arg0 inFolder:(id)arg1 error:(*id)arg2 ;
-(id)folderChangeRequestForFolder:(id)arg0 ;
-(id)getDestinationUrlForImportAsset:(id)arg0 ;
-(id)initWithLibrary:(id)arg0 options:(id)arg1 source:(id)arg2 delegate:(id)arg3 completionHandler:(id)arg4 ;
-(id)makeDownloadUrlForParentFolderPath:(id)arg0 ;
-(id)relativePathComponentsForAlbumPath:(id)arg0 fromRootPath:(id)arg1 ;
-(id)removeImportDirectoryForLibrary:(id)arg0 ;
-(void)_applyFastVideoModernizationToRecord:(id)arg0 ;
-(void)addDescriptionPropertiesFromImportAsset:(id)arg0 toCreationRequest:(id)arg1 ;
-(void)addLibraryPropertiesFromImportAssetBundleAsset:(id)arg0 toCreationRequest:(id)arg1 ;
-(void)addRecordToResults:(id)arg0 ;
-(void)cancellationHandler;
-(void)downloadNextAssetInRecord:(id)arg0 toURL:(id)arg1 subRecordEnumerator:(id)arg2 completionHandler:(id)arg3 ;
-(void)ensureContainersExistForAlbumPath:(id)arg0 forAsset:(id)arg1 completion:(id)arg2 ;
-(void)ensureEnoughDiskSpaceAvailableIfNeededForAssets:(id)arg0 completion:(id)arg1 ;
-(void)finishImport;
-(void)importNextAsset:(id)arg0 ;
-(void)importRecords:(id)arg0 ;
-(void)importRecords:(id)arg0 completionHandler:(id)arg1 ;
-(void)importedBurstAsset:(id)arg0 ;
-(void)performLegacyDiskSpaceCheckForRequiredBytes:(NSInteger)arg0 forPath:(id)arg1 withCompletion:(id)arg2 ;
-(void)updateAlbumCacheWithAlbumIdentifiers:(id)arg0 ;
-(void)updateFolderCacheWithFolders:(id)arg0 ;
-(void)validateSourceForAsset:(id)arg0 ;


@end


#endif