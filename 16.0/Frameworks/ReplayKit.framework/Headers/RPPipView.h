// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPPIPVIEW_H
#define RPPIPVIEW_H

@class UIView, AVCaptureVideoPreviewLayer;



@interface RPPipView : UIView

@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // ivar: _previewLayer


-(void)addPreviewLayer:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif