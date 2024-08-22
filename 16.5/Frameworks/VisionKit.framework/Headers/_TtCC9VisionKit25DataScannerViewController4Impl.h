// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC9VISIONKIT25DATASCANNERVIEWCONTROLLER4IMPL_H
#define _TTCC9VISIONKIT25DATASCANNERVIEWCONTROLLER4IMPL_H

@protocol VKAVCaptureFrameProviderDelegate, VKDataScannerViewControllerBridgeDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC9VisionKit25DataScannerViewController4Impl : NSObject <VKAVCaptureFrameProviderDelegate, VKDataScannerViewControllerBridgeDelegate>

 {
    ? owner;
}




-(id)init;
-(void)avCaptureFrameProvider:(id)arg0 cameraAccessGranted:(BOOL)arg1 ;
-(void)avCaptureFrameProvider:(id)arg0 didCapturePhoto:(id)arg1 error:(id)arg2 ;
-(void)avCaptureFrameProvider:(id)arg0 didChangeIsRunning:(BOOL)arg1 ;
-(void)avCaptureFrameProviderDidFinishPreparation:(id)arg0 ;
-(void)avCaptureFrameProviderDidZoom:(id)arg0 ;
-(void)cameraRestrictedDidChange:(id)arg0 ;
-(void)frameProvider:(id)arg0 didChangeSceneLuminosity:(CGFloat)arg1 ;
-(void)frameProvider:(id)arg0 didChangeSceneStabilityState:(NSUInteger)arg1 ;


@end


#endif