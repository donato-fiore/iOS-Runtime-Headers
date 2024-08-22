// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PLINGESTJOBCAMERAMETADATA_H
#define _PLINGESTJOBCAMERAMETADATA_H

@class NSString, NSData, NSArray, VNImageAestheticsObservation, NSDictionary, PFCameraMetadata;

#import <Foundation/Foundation.h>


@interface _PLIngestJobCameraMetadata : NSObject {
    BOOL _hasDeserializedMetadata;
    NSString *_cameraMetadataPath;
    NSString *_overCaptureMetadataPath;
    CGRect _preferredCropRect;
    CGRect _acceptableCropRect;
    NSData *_sceneprintData;
    NSArray *_junkImageClassificationObservations;
    VNImageAestheticsObservation *_imageAestheticsObservation;
    NSDictionary *_smartCamInfo;
}


@property (readonly, nonatomic) PFCameraMetadata *cameraMetadata; // ivar: _cameraMetadata
@property (readonly, nonatomic) PFCameraMetadata *overCaptureCameraMetadata; // ivar: _overCaptureCameraMetadata


-(id)initWithCameraMetadataPath:(id)arg0 overCaptureMetadataPath:(id)arg1 ;
-(void)_deserializeCameraMetadata;
-(void)applyCameraMetadataToAsset:(id)arg0 ;
-(void)applyCameraMetadataToSpatialOverCaptureAsset:(id)arg0 ;


@end


#endif