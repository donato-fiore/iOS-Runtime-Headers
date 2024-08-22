// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMVIDEOPREVIEWVIEW_H
#define CAMVIDEOPREVIEWVIEW_H

@class UIView, AVCaptureVideoPreviewLayer;



@interface CAMVideoPreviewView : UIView

@property (readonly, nonatomic) UIView *previewLayerView; // ivar: _previewLayerView
@property (nonatomic) NSInteger previewViewAspectMode; // ivar: _previewViewAspectMode
@property (nonatomic, getter=isSquare) BOOL square; // ivar: _square
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // ivar: _videoPreviewLayer


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_frameForSubviewsAccountForSquare:(BOOL)arg0 ;
-(void)_updateAspectModeForSublayers;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif