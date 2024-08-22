// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIFEEDBACKVISIONPROCESSOR_H
#define HMIFEEDBACKVISIONPROCESSOR_H

@class HMFObject;



@interface HMIFeedbackVisionProcessor : HMFObject



// +(BOOL)reencodeAssetURL:(id)arg0 outputURL:(id)arg1 bitRate:(NSInteger)arg2 duration:(struct ? )arg3 analysisFPS:(float)arg4 sampleFrameHandler:(id)arg5 dropFrameHandler:(unk)arg6  ;
-(BOOL)blurFacesFromAssetURL:(id)arg0 outputURL:(id)arg1 duration:(struct ? )arg2 analysisFPS:(float)arg3 windowSize:(NSUInteger)arg4 faceDetected:(*BOOL)arg5 ;
-(struct __CVBuffer *)_createBlurredPixelBuffer:(struct __CVBuffer *)arg0 events:(id)arg1 ;
-(unsigned int)_blurRadiusForEvents:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(void)_addEventsToEventQueue:(id)arg0 events:(id)arg1 ;
-(void)_blurSampleBufferWithEncoder:(id)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 events:(id)arg2 ;


@end


#endif