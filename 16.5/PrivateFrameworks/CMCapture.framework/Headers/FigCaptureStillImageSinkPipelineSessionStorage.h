// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESTILLIMAGESINKPIPELINESESSIONSTORAGE_H
#define FIGCAPTURESTILLIMAGESINKPIPELINESESSIONSTORAGE_H

@class NSDictionary, NSArray, FigCaptureSinkPipeline<FigCaptureStillImageSinkPipeline>;

#import <Foundation/Foundation.h>

#import "FigCaptureSessionPreparedBracket.h"
#import "FigCaptureCameraSourcePipeline.h"
#import "FigCapturePixelConverter.h"
#import "BWImageQueueSinkNode.h"
#import "FigVideoCaptureConnectionConfiguration.h"

@interface FigCaptureStillImageSinkPipelineSessionStorage : NSObject {
    *opaqueCMFormatDescription _stillImageFormatDescription;
    *opaqueCMFormatDescription _previewFormatDescription;
    *opaqueCMFormatDescription _rawFormatDescription;
    FigCaptureSessionPreparedBracket *_preparedBracket;
}


@property (readonly, nonatomic) FigCaptureCameraSourcePipeline *cameraSourcePipeline; // ivar: _cameraSourcePipeline
@property (readonly, nonatomic) NSDictionary *colorInfo; // ivar: _colorInfo
@property (nonatomic) NSUInteger currentUserInitiatedRequestHostTime; // ivar: _currentUserInitiatedRequestHostTime
@property (nonatomic) ? currentUserInitiatedRequestPTS; // ivar: _currentUserInitiatedRequestPTS
@property (nonatomic) NSInteger mostRecentBurstSettingsID; // ivar: _mostRecentBurstSettingsID
@property (readonly, nonatomic) FigCapturePixelConverter *pixelConverter; // ivar: _pixelConverter
@property (readonly, nonatomic) FigCaptureSessionPreparedBracket *preparedBracket;
@property ? previewFormatDescriptionPtr;
@property (readonly, nonatomic) BWImageQueueSinkNode *previewSinkNode; // ivar: _previewSinkNode
@property (retain, nonatomic) NSArray *rawDNGColorCalibrations; // ivar: _rawDNGColorCalibrations
@property ? rawFormatDescriptionPtr;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration; // ivar: _stillImageConnectionConfiguration
@property ? stillImageFormatDescriptionPtr;
@property (readonly, nonatomic) FigCaptureSinkPipeline<FigCaptureStillImageSinkPipeline> *stillImageSinkPipeline; // ivar: _stillImageSinkPipeline
@property (readonly, nonatomic) BOOL stillImagesAreOptimizedForOfflineVideoStabilization; // ivar: _stillImagesAreOptimizedForOfflineVideoStabilization
@property (nonatomic) BOOL videoStabilizationOverscanCropEnabled; // ivar: _videoStabilizationOverscanCropEnabled
@property (nonatomic) float videoStabilizationOverscanCropMultiplier; // ivar: _videoStabilizationOverscanCropMultiplier


-(id)initWithStillImageSinkPipeline:(id)arg0 cameraSourcePipeline:(id)arg1 previewSinkNode:(id)arg2 pixelConverter:(id)arg3 colorInfo:(id)arg4 stillImagesAreOptimizedForOfflineVideoStabilization:(BOOL)arg5 videoStabilizationOverscanCropMultiplier:(float)arg6 preparedBracket:(id)arg7 stillImageConnectionConfiguration:(id)arg8 ;


@end


#endif