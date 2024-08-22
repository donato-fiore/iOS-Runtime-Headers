// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV18CREATEMLCOMPONENTS11VIDEOREADER8OBSERVER_H
#define _TTCV18CREATEMLCOMPONENTS11VIDEOREADER8OBSERVER_H

@protocol AVCaptureVideoDataOutputSampleBufferDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV18CreateMLComponents11VideoReader8Observer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>

 {
    ? cameraSession;
    ? currentCameraPosition;
    ? frontCamera;
    ? frontCameraInput;
    ? backCamera;
    ? backCameraInput;
    ? configuration;
    ? continuation;
    ? queue;
}




-(id)init;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)dealloc;


@end


#endif