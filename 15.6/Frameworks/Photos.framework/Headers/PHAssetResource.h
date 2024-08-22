// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETRESOURCE_H
#define PHASSETRESOURCE_H

@class NSDate, NSString, NSManagedObjectID, PLPhotoLibraryPathManagerIdentifier, NSURL;
@protocol PHCPLAssetResource, PLResourceIdentity;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"

@interface PHAssetResource : NSObject <PHCPLAssetResource>

 {
    NSInteger _pixelWidth;
    NSInteger _pixelHeight;
    NSUInteger _fileSize;
    NSDate *_trashedDate;
    BOOL _trashed;
    BOOL _inCloud;
    PHPhotoLibrary *_photoLibrary;
    id *_privateFileLoader;
}


@property (readonly, nonatomic) NSInteger analysisType;
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier; // ivar: _assetLocalIdentifier
@property (readonly, nonatomic) NSManagedObjectID *assetObjectID; // ivar: _assetObjectID
@property (readonly, nonatomic) NSObject<PLResourceIdentity> *backingResourceIdentity; // ivar: _backingResourceIdentity
@property (nonatomic) NSUInteger cplResourceType; // ivar: _cplResourceType
@property (readonly, nonatomic, getter=isCurrent) BOOL current; // ivar: _current
@property (readonly, nonatomic) unsigned short dataStoreClassID; // ivar: _dataStoreClassID
@property (readonly, nonatomic) NSUInteger fileSize;
@property (readonly, nonatomic, getter=isInCloud) BOOL inCloud;
@property (readonly, nonatomic) PLPhotoLibraryPathManagerIdentifier *libraryID; // ivar: _libraryID
@property (readonly, nonatomic, getter=isLocallyAvailable) BOOL locallyAvailable;
@property (nonatomic, getter=isLocallyAvailable) BOOL locallyAvailable; // ivar: _locallyAvailable
@property (nonatomic) unsigned int orientation; // ivar: _orientation
@property (readonly, copy, nonatomic) NSString *originalFilename; // ivar: _originalFilename
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSInteger pixelHeight;
@property (readonly, nonatomic) NSInteger pixelWidth;
@property (readonly, copy, nonatomic) id *privateFileLoader;
@property (readonly, nonatomic) NSURL *privateFileURL;
@property (retain, nonatomic) NSURL *privateFileURL; // ivar: _privateFileURL
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic) NSDate *trashedDate;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier


+(id)_assetResourcesFromPLResources:(id)arg0 includeMetadata:(BOOL)arg1 mediaMetadataVirtualResources:(id)arg2 asset:(id)arg3 assetHasAdjustments:(BOOL)arg4 includeDerivatives:(BOOL)arg5 includeAdjustmentOverflowDataBlob:(BOOL)arg6 ;
+(id)assetResourceForAsset:(id)arg0 qualityClass:(id)arg1 ;
+(id)assetResourcesForAsset:(id)arg0 ;
+(id)assetResourcesForAsset:(id)arg0 includeDerivatives:(BOOL)arg1 ;
+(id)assetResourcesForAsset:(id)arg0 includeDerivatives:(BOOL)arg1 includeMetadata:(BOOL)arg2 ;
+(id)assetResourcesForAsset:(id)arg0 includeDerivatives:(BOOL)arg1 includeMetadata:(BOOL)arg2 includeAdjustmentOverflowDataBlob:(BOOL)arg3 ;
+(id)assetResourcesForLivePhoto:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithResource:(id)arg0 asset:(id)arg1 hasAdjustments:(BOOL)arg2 ;
-(id)initWithType:(NSInteger)arg0 livePhoto:(id)arg1 ;


@end


#endif