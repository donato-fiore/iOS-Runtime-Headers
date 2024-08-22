// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLINGESTJOBCAMERAMETADATA_H
#define PLINGESTJOBCAMERAMETADATA_H

@class NSString, NSData, NSArray, VNImageAestheticsObservation, NSDictionary, PFCameraMetadata;

#import <Foundation/Foundation.h>


@interface PLIngestJobCameraMetadata : NSObject {
    BOOL _hasDeserializedMetadata;
    NSString *_cameraMetadataPath;
    NSString *_overCaptureMetadataPath;
    CGRect _preferredCropRect;
    CGRect _acceptableCropRect;
    NSData *_sceneprintData;
    NSArray *_junkImageClassificationObservations;
    VNImageAestheticsObservation *_imageAestheticsObservation;
    NSDictionary *_smartCamInfo;
    NSArray *_contactIDsInProximity;
    NSInteger _sharedLibraryMode;
}


@property (retain, nonatomic) PFCameraMetadata *cameraMetadata; // ivar: _cameraMetadata
@property (retain, nonatomic) PFCameraMetadata *overCaptureCameraMetadata; // ivar: _overCaptureCameraMetadata


+(BOOL)faceObservationIngestDisabled;
+(BOOL)facePrintIngestDisabled;
-(id)initWithCameraMetadataPath:(id)arg0 overCaptureMetadataPath:(id)arg1 ;
-(void)_ingestCameraMetadata;
-(void)applyCameraMetadataToAsset:(id)arg0 ;
-(void)applyCameraMetadataToSpatialOverCaptureAsset:(id)arg0 ;
-(void)deserializeCameraMetadata;


@end


#endif