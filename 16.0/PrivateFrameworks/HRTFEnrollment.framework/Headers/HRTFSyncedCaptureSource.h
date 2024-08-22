// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRTFSYNCEDCAPTURESOURCE_H
#define HRTFSYNCEDCAPTURESOURCE_H

@class AVCaptureSession, AVCaptureVideoPreviewLayer, AVCaptureDeviceFormat, AVCaptureDataOutputSynchronizer, AVCaptureVideoDataOutput, AVCaptureDepthDataOutput, AVCaptureMetadataOutput, NSString;
@protocol AVCaptureDataOutputSynchronizerDelegate, OS_dispatch_queue, HRTFSyncedCaptureSourceDelegate;

#import <Foundation/Foundation.h>


@interface HRTFSyncedCaptureSource : NSObject <AVCaptureDataOutputSynchronizerDelegate>

 {
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_previewLayer;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _preferredPixelFormat;
    unsigned int _preferredDepthFormat;
    unsigned int _preferredColorResolutionX;
    unsigned int _preferredColorResolutionY;
    unsigned int _preferredDepthResolutionX;
    unsigned int _preferredDepthResolutionY;
    AVCaptureDeviceFormat *_finalColorFormat;
    AVCaptureDeviceFormat *_finalDepthFormat;
    AVCaptureDataOutputSynchronizer *_outputSynchronizer;
    AVCaptureVideoDataOutput *_colorDataOutput;
    AVCaptureDepthDataOutput *_depthDataOutput;
    AVCaptureMetadataOutput *_metadataOutput;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HRTFSyncedCaptureSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_configureVideoOutputsForDevice:(id)arg0 inSession:(id)arg1 ;
-(BOOL)_initialize;
-(BOOL)_verifyCaptureDevice:(id)arg0 ;
-(id)initWithQueue:(id)arg0 options:(struct ? )arg1 ;
-(void)_handleCaptureSessionNotification:(id)arg0 ;
-(void)dataOutputSynchronizer:(id)arg0 didOutputSynchronizedDataCollection:(id)arg1 ;
-(void)startCaptureSession;
-(void)stopCaptureSession;


@end


#endif