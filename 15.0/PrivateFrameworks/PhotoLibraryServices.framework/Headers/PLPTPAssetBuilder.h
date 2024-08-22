// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPTPASSETBUILDER_H
#define PLPTPASSETBUILDER_H

@class NSString, NSArray, NSMutableArray;
@protocol PLPTPConversionSupport, PLPTPTransferableAsset, PLFileManager;

#import <Foundation/Foundation.h>

#import "PLMutablePTPAsset.h"
#import "PLSpatialOverCaptureInformation.h"

@interface PLPTPAssetBuilder : NSObject {
    id<PLPTPConversionSupport> *_conversionSupport;
    id<PLPTPTransferableAsset> *_asset;
    id<PLFileManager> *_fileManager;
    NSString *_filenameForPTP;
    PLMutablePTPAsset *_currentPtpAsset;
    PLMutablePTPAsset *_commonPtpAsset;
    PLMutablePTPAsset *_originalPtpAsset;
    NSArray *_sidecarPtpAssets;
    PLMutablePTPAsset *_diagnosticPtpAsset;
    PLMutablePTPAsset *_adjustmentPtpAsset;
    PLMutablePTPAsset *_fullSizeRenderImagePtpAsset;
    PLMutablePTPAsset *_fullSizeRenderVideoPtpAsset;
    PLMutablePTPAsset *_spatialOverCaptureImagePtpAsset;
    PLMutablePTPAsset *_spatialOverCaptureVideoComplementPtpAsset;
    PLMutablePTPAsset *_originalAdjustmentPtpAsset;
    PLSpatialOverCaptureInformation *_cachedSpatialOverCaptureInformation;
    PLMutablePTPAsset *_penultimateImagePtpAsset;
    PLMutablePTPAsset *_penultimateVideoPtpAsset;
    NSMutableArray *_convertedAssets;
    BOOL _irisSidecarRequiresFormatConversion;
}




+(BOOL)_shouldIncludeDiagnosticFile;
+(id)pictureTransferProtocolAssetsForAsset:(id)arg0 withConversionSupport:(id)arg1 ;
-(BOOL)_buildDirectoryPathAndFilename;
-(BOOL)_buildOriginalAsset;
-(BOOL)_hasIrisSidecarFile;
-(BOOL)_suppressPtpInfo;
-(BOOL)hasSpatialOverCaptureContent;
-(id)_assetForSidecar:(id)arg0 sidecarPath:(id)arg1 irisSidecarPath:(id)arg2 ;
-(id)initWithAsset:(id)arg0 conversionSupport:(id)arg1 ;
-(id)initWithAsset:(id)arg0 conversionSupport:(id)arg1 fileManager:(id)arg2 ;
-(id)pictureTransferProtocolAssets;
-(id)spatialOverCaptureInformation;
-(void)_buildAdjustmentAsset;
-(void)_buildBurst;
-(void)_buildCommonAsset;
-(void)_buildDeletedFlag;
-(void)_buildDiagnosticAsset;
-(void)_buildExifAvailable;
-(void)_buildFileSize;
-(void)_buildFullSizeRenderImageAsset;
-(void)_buildFullSizeRenderVideoAsset;
-(void)_buildGPSInformation;
-(void)_buildGroupUUID;
-(void)_buildImageDimensions;
-(void)_buildModificationAndCreationDate;
-(void)_buildOrientation;
-(void)_buildOriginatingAssetID;
-(void)_buildPhotoKey;
-(void)_buildRelatedUUID;
-(void)_buildSidecarAssets;
-(void)_buildSlowMo;
-(void)_buildSpatialOverCaptureGroupIdentifier;
-(void)_buildSpatialOverCaptureLivePhotoPairingIdentifier;
-(void)_buildThumbnailDimensions;
-(void)_buildThumbnailOffsetAndLength;
-(void)_buildTimelapse;
-(void)_durationOfTheAsset;
-(void)_updateAsset:(id)arg0 withConversionResult:(id)arg1 ;
-(void)_updateAssetForTranscodeChoice:(id)arg0 withConversionResult:(id)arg1 ;
-(void)_updateOriginalAssetFormatConversionFromVideoComplement;
-(void)buildOriginalAdjustmentPtpAsset;
-(void)buildPenultimateImagePtpAsset;
-(void)buildPenultimateVideoPtpAsset;
-(void)buildSpatialOverCaptureContentPtpAsset;
-(void)buildSpatialOverCaptureVideoComplementPtpAsset;
-(void)updateAssetForFormatConversion:(id)arg0 isVideo:(BOOL)arg1 isRender:(BOOL)arg2 forceLegacyConversion:(BOOL)arg3 ;
-(void)updateSiblingAssetTypesOnMutablePTPAssets:(id)arg0 ;


@end


#endif