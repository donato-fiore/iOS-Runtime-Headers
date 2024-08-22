// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLINTERLIBRARYTRANSFER_H
#define PLINTERLIBRARYTRANSFER_H

@class NSSet, NSFileManager;

#import <Foundation/Foundation.h>

#import "PLPhotoLibraryBundle.h"
#import "PLInterLibraryTransferOptions.h"

@interface PLInterLibraryTransfer : NSObject

@property (retain) PLPhotoLibraryBundle *destinationBundle; // ivar: _destinationBundle
@property (retain) NSSet *excludedEntityNames; // ivar: _excludedEntityNames
@property (retain) NSFileManager *fileManager; // ivar: _fileManager
@property (retain) PLInterLibraryTransferOptions *options; // ivar: _options
@property (retain) PLPhotoLibraryBundle *sourceBundle; // ivar: _sourceBundle


-(BOOL)_copyFileFrom:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(BOOL)_copyFilesFromSourceAsset:(id)arg0 toDestinationAsset:(id)arg1 objectMap:(id)arg2 filesCopied:(id)arg3 error:(*id)arg4 ;
-(BOOL)_copyMasterThumbnailFrom:(id)arg0 toDestinationAsset:(id)arg1 filesCopied:(id)arg2 error:(*id)arg3 ;
-(BOOL)_deleteAsset:(id)arg0 ;
-(BOOL)_shouldSkipRelationship:(id)arg0 ;
-(BOOL)_shouldSkipTransferWithSourceAsset:(id)arg0 destinationAsset:(id)arg1 ;
-(BOOL)transferAssetWithUuid:(id)arg0 error:(*id)arg1 ;
-(id)_copyObject:(id)arg0 toDestinationObject:(id)arg1 toLibrary:(id)arg2 objectMap:(id)arg3 ;
-(id)_createNewObjectWithEntity:(id)arg0 attributes:(id)arg1 inLibrary:(id)arg2 ;
-(id)_dedupedDestinationAssetWithSourceAsset:(id)arg0 destinationLibrary:(id)arg1 ;
-(id)_loadAssetWithUuid:(id)arg0 fromLibrary:(id)arg1 error:(*id)arg2 ;
-(id)_loadAssetWithValues:(id)arg0 forKeyPaths:(id)arg1 fromLibrary:(id)arg2 error:(*id)arg3 ;
-(id)_loadDestinationLibraryWithError:(*id)arg0 ;
-(id)_loadSourceLibraryWithError:(*id)arg0 ;
-(id)_sourceAttributesFromObject:(id)arg0 ;
-(id)initWithSourceBundle:(id)arg0 destinationBundle:(id)arg1 options:(id)arg2 ;
-(void)_copyRelationship:(id)arg0 fromObject:(id)arg1 toObject:(id)arg2 inLibrary:(id)arg3 objectMap:(id)arg4 ;
-(void)_setAttributes:(id)arg0 onObject:(id)arg1 ;
-(void)_transferThumbnailsForSourceAsset:(id)arg0 toDestinationAsset:(id)arg1 filesCopied:(id)arg2 ;


@end


#endif