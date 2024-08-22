// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWVIDEOPOINTCLOUDSYNCHRONIZERNODE_H
#define BWVIDEOPOINTCLOUDSYNCHRONIZERNODE_H

@class NSString;
@protocol BWFigVideoCaptureDeviceMaxDepthFrameRateChangedDelegate;


#import "BWNode.h"
#import "BWFigVideoCaptureDevice.h"
#import "BWNodeInput.h"

@interface BWVideoPointCloudSynchronizerNode : BWNode <BWFigVideoCaptureDeviceMaxDepthFrameRateChangedDelegate>

 {
    BWFigVideoCaptureDevice *_captureDevice;
    float _depthMaxFrameRate;
    BOOL _depthMaxFrameRateAdjustmentPending;
    short _numberOfReceivedRGBFramesBeforeEmittingDepthFrame;
    short _numberOfReceivedRGBFramesSinceLastDepthFrameEmission;
    BOOL _shouldLetThroughFrames;
    *opaqueCMSampleBuffer _latestPointCloudBuffer;
    os_unfair_lock_s _bufferServicingLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BWNodeInput *imageInput; // ivar: _imageInput
@property (readonly, nonatomic) BWNodeInput *pointCloudInput; // ivar: _pointCloudInput
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_attachPointCloudDataToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(BOOL)_shouldEmitBuffer;
-(id)initWithCaptureDevice:(id)arg0 ;
-(void)_setUpPointCloudMediaConfigurationForOutput:(id)arg0 inputAttachedMediaKey:(id)arg1 outputAttachedMediaKey:(id)arg2 ;
-(void)_tryToEmitBuffersWithRGBBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_updateNumberOfReceivedRGBFramesBeforeEmittingDepthFrameWithDepthMaxFrameRate:(float)arg0 rgbMaxFrameRate:(float)arg1 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didChangeDepthMaxFrameRate:(float)arg0 ;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif