// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
@property (nonatomic) BOOL crashBeforeCreation; // ivar: _crashBeforeCreation
@property (copy, nonatomic) PHAssetCreationMetadataCopyOptions *metadataCopyOptions; // ivar: _metadataCopyOptions
@property (nonatomic) BOOL resetUserSpecificMetadata; // ivar: _resetUserSpecificMetadata
@property (nonatomic) BOOL shouldCreateScreenshot; // ivar: _shouldCreateScreenshot
@property (nonatomic) BOOL shouldDownloadOrCloudReReferenceMissingResources; // ivar: _shouldDownloadOrCloudReReferenceMissingResources
@property (nonatomic) ? stillSourceTime; // ivar: _stillSourceTime
@property (nonatomic) BOOL useRecoverableStagingDirectory; // ivar: _useRecoverableStagingDirectory


-(id)init;


@end


#endif