// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMPREVIEWVIEW_H
#define ICDOCCAMPREVIEWVIEW_H

@class UIView, AVCaptureSession, AVCaptureVideoPreviewLayer;



@interface ICDocCamPreviewView : UIView

@property (retain, nonatomic) AVCaptureSession *session;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;


+(Class)layerClass;


@end


#endif