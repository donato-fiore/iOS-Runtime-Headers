// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCAPTUREVIDEOPREVIEWVIEW_H
#define VKCAPTUREVIDEOPREVIEWVIEW_H

@class UIImageView, CIContext, CIImage;
@protocol OS_dispatch_queue;



@interface VKCaptureVideoPreviewView : UIImageView {
    *opaqueCMSampleBuffer _currentFrame;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    CIContext *q_ciContext;
}


@property (readonly, nonatomic) CIImage *ciImage;
@property (readonly, nonatomic) CGRect regionOfInterest;
@property (readonly, nonatomic) CGFloat viewToImageScale;


-(CGFloat)screenScale;
-(id)init;
-(struct CGSize )imageSize;
-(struct CGSize )viewSizeInPixels;
-(void)dealloc;
-(void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)snapshotWithCompletion:(id)arg0 ;


@end


#endif