// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETCREATIONOPTIONS_H
#define PHASSETCREATIONOPTIONS_H


#import <Foundation/Foundation.h>

#import "PHAssetCreationAdjustmentBakeInOptions.h"
#import "PHAssetCreationMetadataCopyOptions.h"

@interface PHAssetCreationOptions : NSObject

@property (copy, nonatomic) PHAssetCreationAdjustmentBakeInOptions *adjustmentBakeInOptions; // ivar: _adjustmentBakeInOptions
@property (nonatomic) BOOL copyAsAlternateAsset; // ivar: _copyAsAlternateAsset
@property (nonatomic) BOOL copyOriginal; // ivar: _copyOriginal
@property (nonatomic) BOOL copySinglePhotoFromBurst; // ivar: _copySinglePhotoFromBurst
@property (nonatomic) BOOL copyStillPhotoFromLivePhoto; // ivar: _copyStillPhotoFromLivePhoto
@property (copy, nonatomic) PHAssetCreationMetadataCopyOptions *metadataCopyOptions; // ivar: _metadataCopyOptions
@property (nonatomic) BOOL resetUserSpecificMetadata; // ivar: _resetUserSpecificMetadata
@property (nonatomic) BOOL shouldDownloadOrCloudReReferenceMissingResources; // ivar: _shouldDownloadOrCloudReReferenceMissingResources
@property (nonatomic) ? stillSourceTime; // ivar: _stillSourceTime


-(id)init;


@end


#endif