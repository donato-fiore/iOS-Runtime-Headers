// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURECAMERASOURCEPIPELINE_H
#define FIGCAPTURECAMERASOURCEPIPELINE_H

@class NSMutableArray, NSArray, NSMutableDictionary, NSDictionary;


#import "FigCaptureSourcePipeline.h"
#import "BWMultiStreamCameraSourceNode.h"
#import "BWNodeOutput.h"
#import "BWFigVideoCaptureDevice.h"
#import "FigCaptureSourceVideoFormat.h"
#import "FigCaptureSourceDepthDataFormat.h"
#import "BWMemoryPool.h"
#import "BWDeskCamNode.h"

@interface FigCaptureCameraSourcePipeline : FigCaptureSourcePipeline {
    BOOL _useCaptureOutputForPreview;
    int _deviceType;
    int _devicePosition;
    NSMutableArray *_sourceNodes;
    BWMultiStreamCameraSourceNode *_sourceNode;
    BWMultiStreamCameraSourceNode *_telephotoSourceNode;
    BWMultiStreamCameraSourceNode *_superWideSourceNode;
    BWMultiStreamCameraSourceNode *_infraredSourceNode;
    BWNodeOutput *_sourceFormatReferenceOutput;
    NSMutableArray *_synchronizerNodes;
    NSArray *_previewFilters;
    NSMutableDictionary *_cinematicFramingNodesBySourceDeviceType;
    NSMutableDictionary *_backgroundBlurNodesBySourceDeviceType;
    NSDictionary *_previewOutputsBySourceDeviceType;
    NSDictionary *_stillImageOutputsByPortType;
    NSDictionary *_stillImageSensorRawOutputsByPortType;
    NSDictionary *_videoCaptureOutputsArrayBySourceDeviceType;
    unsigned int _nextVideoCaptureOutputIndexBySourceDeviceType;
    NSArray *_pointCloudOutputs;
    unsigned int _nextPointCloudOutputIndex;
    NSDictionary *_detectedObjectsOutputsBySourceDeviceType;
    NSDictionary *_visionDataOutputsBySourceDeviceType;
    BWNodeOutput *_depthOutput;
    BWFigVideoCaptureDevice *_captureDevice;
    *OpaqueFigCaptureSource _captureSource;
    FigCaptureSourceVideoFormat *_captureSourceVideoFormat;
    FigCaptureSourceDepthDataFormat *_captureSourceDepthDataFormat;
    BOOL _stillImageOutputDerivesFromVideoCaptureOutput;
    BWMemoryPool *_memoryPool;
    BOOL _overCapturePercentage;
    int _depthType;
    BOOL _hardwareDepthFilteringEnabled;
    BOOL _videoHDRImageStatisticsEnabled;
    BWDeskCamNode *_deskCamNode;
    int _stillImageOutputRetainedBufferCountOverride;
}




+(void)initialize;
-(void)dealloc;


@end


#endif