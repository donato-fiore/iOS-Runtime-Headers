// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETRESOURCEBAG_H
#define PHASSETRESOURCEBAG_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PHAssetCreationRequest.h"
#import "PHExternalAssetResource.h"

@interface PHAssetResourceBag : NSObject {
    NSArray *_assetResourceContexts;
}


@property (readonly, weak, nonatomic) PHAssetCreationRequest *assetCreationRequest; // ivar: _assetCreationRequest
@property (readonly, nonatomic) NSArray *assetResources; // ivar: _assetResources
@property (readonly, nonatomic) BOOL didValidateForInsertion; // ivar: _didValidateForInsertion
@property (readonly, nonatomic) BOOL hasAdjustments;
@property (readonly, nonatomic) BOOL hasCurrentAdjustment; // ivar: _hasCurrentAdjustment
@property (readonly, nonatomic) BOOL hasOriginalAdjustment; // ivar: _hasOriginalAdjustment
@property (readonly, nonatomic) BOOL hasRAW; // ivar: _hasRAW
@property (readonly, nonatomic) BOOL hasSpatialOverCapture; // ivar: _hasSpatialOverCapture
@property (readonly, nonatomic) NSUInteger mediaSubtype; // ivar: _mediaSubtype
@property (readonly, nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) PHExternalAssetResource *primaryResource; // ivar: _primaryResource
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


+(BOOL)_supportsAssetResourceTypes:(id)arg0 mediaType:(*NSInteger)arg1 mediaSubtype:(*NSUInteger)arg2 importedBy:(short)arg3 ;
+(BOOL)supportsAssetResourceTypes:(id)arg0 mediaType:(*NSInteger)arg1 importedBy:(short)arg2 ;
+(id)_primaryAssetResource:(id)arg0 ;
-(BOOL)_extractValidatedAdjustmentsURL:(*id)arg0 fromResource:(id)arg1 photoLibrary:(id)arg2 error:(*id)arg3 ;
-(BOOL)_extractValidatedAudioURL:(*id)arg0 fromResource:(id)arg1 photoLibrary:(id)arg2 error:(*id)arg3 ;
-(BOOL)_extractValidatedImageURL:(*id)arg0 imageData:(*id)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(*id)arg4 ;
-(BOOL)_extractValidatedVideoURL:(*id)arg0 fromResource:(id)arg1 photoLibrary:(id)arg2 error:(*id)arg3 ;
-(BOOL)_validateAssetResourcesForAssetCreation:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)_validateAssetResourceForAssetCreation:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(id)_validatedContextForResource:(id)arg0 ;
-(id)assetResourceWithType:(NSInteger)arg0 ;
-(id)initWithAssetResources:(id)arg0 assetCreationRequest:(id)arg1 ;
-(id)validatedDataForAssetResource:(id)arg0 ;
-(id)validatedURLForAssetResource:(id)arg0 ;


@end


#endif