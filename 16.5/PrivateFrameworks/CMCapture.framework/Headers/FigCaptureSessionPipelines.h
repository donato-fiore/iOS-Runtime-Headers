// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESESSIONPIPELINES_H
#define FIGCAPTURESESSIONPIPELINES_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "FigCaptureMicSourcePipeline.h"

@interface FigCaptureSessionPipelines : NSObject {
    NSMutableArray *_lidarDepthPipelines;
}


@property (readonly, nonatomic) NSArray *audioDataSinkPipelines; // ivar: _audioDataSinkPipelines
@property (readonly, nonatomic) NSArray *audioFileSinkPipelines; // ivar: _audioFileSinkPipelines
@property (readonly, nonatomic) NSArray *cameraCalibrationDataSinkPipelines; // ivar: _cameraCalibrationDataSinkPipelines
@property (readonly, nonatomic) NSArray *cameraSourcePipelines; // ivar: _cameraSourcePipelines
@property (readonly, nonatomic) NSArray *cinematographyPipelines; // ivar: _cinematographyPipelines
@property (readonly, nonatomic) NSArray *depthDataSinkPipelines; // ivar: _depthDataSinkPipelines
@property (readonly, nonatomic) NSArray *metadataSinkPipelines; // ivar: _metadataSinkPipelines
@property (readonly, nonatomic) NSArray *metadataSourcePipelines; // ivar: _metadataSourcePipelines
@property (retain, nonatomic) FigCaptureMicSourcePipeline *micSourcePipeline; // ivar: _micSourcePipeline
@property (readonly, nonatomic) NSArray *movieFileSinkPipelines; // ivar: _movieFileSinkPipelines
@property (readonly, nonatomic) NSArray *pointCloudDataSinkPipelines; // ivar: _pointCloudDataSinkPipelines
@property (readonly, nonatomic) NSArray *previewSinkPipelines; // ivar: _previewSinkPipelines
@property (readonly, nonatomic) NSArray *stillImageSinkPipelineSessionStorages; // ivar: _stillImageSinkPipelineStorages
@property (readonly, nonatomic) NSArray *videoDataSinkPipelines; // ivar: _videoDataSinkPipelines
@property (readonly, nonatomic) NSArray *videoThumbnailSinkPipelines; // ivar: _videoThumbnailSinkPipelines
@property (readonly, nonatomic) NSArray *visionDataSinkPipelines; // ivar: _visionDataSinkPipelines


-(id)audioDataSinkPipelineWithSinkID:(id)arg0 ;
-(id)audioFileSinkPipelineWithFileSinkNode:(id)arg0 ;
-(id)audioFileSinkPipelineWithSinkID:(id)arg0 ;
-(id)cameraCalibrationDataSinkPipelineWithSinkID:(id)arg0 ;
-(id)cameraSourcePipelineWithSourceID:(id)arg0 ;
-(id)cinematographyPipelineWithSourceID:(id)arg0 ;
-(id)depthDataSinkPipelineWithSinkID:(id)arg0 ;
-(id)depthDataSinkPipelineWithSourceID:(id)arg0 sourceDeviceType:(int)arg1 ;
-(id)lidarDepthPipelineWithRGBCameraSourceID:(id)arg0 ;
-(id)metadataSinkPipelineWithSinkID:(id)arg0 ;
-(id)metadataSinkPipelineWithSourceID:(id)arg0 sourceDeviceType:(int)arg1 ;
-(id)movieFileSinkPipelineWithFileCoordinatorNode:(id)arg0 ;
-(id)movieFileSinkPipelineWithFileSinkNode:(id)arg0 ;
-(id)movieFileSinkPipelineWithIrisStagingNode:(id)arg0 ;
-(id)movieFileSinkPipelineWithSinkID:(id)arg0 ;
-(id)movieFileSinkPipelineWithSourceID:(id)arg0 sourceDeviceType:(int)arg1 ;
-(id)movieFileSinkPipelineWithVideoConnectionID:(id)arg0 ;
-(id)pointCloudDataSinkPipelineWithSinkID:(id)arg0 ;
-(id)previewSinkPipelineWithSinkID:(id)arg0 ;
-(id)previewSinkPipelineWithSourceID:(id)arg0 sourceDeviceType:(int)arg1 ;
-(id)stillImageSinkPipelineSessionStorageWithSinkID:(id)arg0 ;
-(id)stillImageSinkPipelineSessionStorageWithStillImageCoordinator:(id)arg0 ;
-(id)videoDataSinkPipelineForMetadataWithSourceID:(id)arg0 sourceDeviceType:(int)arg1 ;
-(id)videoDataSinkPipelineWithSinkID:(id)arg0 ;
-(id)videoThumbnailSinkPipelineWithSinkID:(id)arg0 ;
-(id)visionDataSinkPipelineWithSinkID:(id)arg0 ;
-(void)addAudioDataSinkPipeline:(id)arg0 ;
-(void)addAudioFileSinkPipeline:(id)arg0 ;
-(void)addCameraCalibrationDataSinkPipeline:(id)arg0 ;
-(void)addCameraSourcePipeline:(id)arg0 ;
-(void)addCinematographyPipeline:(id)arg0 ;
-(void)addDepthDataSinkPipeline:(id)arg0 ;
-(void)addLiDARDepthPipeline:(id)arg0 ;
-(void)addMetadataSinkPipeline:(id)arg0 ;
-(void)addMetadataSourcePipeline:(id)arg0 ;
-(void)addMovieFileSinkPipeline:(id)arg0 ;
-(void)addPointCloudDataSinkPipeline:(id)arg0 ;
-(void)addPreviewSinkPipeline:(id)arg0 ;
-(void)addStillImageSinkPipelineSessionStorage:(id)arg0 ;
-(void)addVideoDataSinkPipeline:(id)arg0 ;
-(void)addVideoThumbnailSinkPipeline:(id)arg0 ;
-(void)addVisionDataSinkPipeline:(id)arg0 ;
-(void)dealloc;


@end


#endif