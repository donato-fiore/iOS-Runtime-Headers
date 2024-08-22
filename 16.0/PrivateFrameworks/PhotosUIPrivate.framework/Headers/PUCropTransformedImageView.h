// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCROPTRANSFORMEDIMAGEVIEW_H
#define PUCROPTRANSFORMEDIMAGEVIEW_H

@class UIView, NUComposition, UIImage, PHLivePhoto, NUMediaView;
@protocol PUCropTransformedImageViewDelegate;



@interface PUCropTransformedImageView : UIView

@property (retain, nonatomic) NUComposition *autoloopComposition; // ivar: _autoloopComposition
@property (nonatomic) CGRect canvasFrame; // ivar: _canvasFrame
@property (readonly, nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, nonatomic, getter=isDecelerating) BOOL decelerating; // ivar: _decelerating
@property (weak, nonatomic) NSObject<PUCropTransformedImageViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) ? imageModulationOptions; // ivar: _imageModulationOptions
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) PHLivePhoto *livePhoto; // ivar: _livePhoto
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) CGFloat pitchAngle; // ivar: _pitchAngle
@property (nonatomic) CGFloat straightenAngle; // ivar: _straightenAngle
@property (readonly, nonatomic, getter=isTracking) BOOL tracking; // ivar: _tracking
@property (readonly, nonatomic) NUComposition *videoComposition; // ivar: _videoComposition
@property (retain, nonatomic) NUMediaView *videoMediaView; // ivar: _videoMediaView
@property (nonatomic) CGFloat yawAngle; // ivar: _yawAngle


-(id)cropModel;
-(struct CGRect )imageCropRectForViewRect:(struct CGRect )arg0 ;
-(struct CGRect )validateViewCropRectAgainstModelCropRect:(struct CGRect )arg0 ;
-(struct CGRect )viewCropRectForImageRect:(struct CGRect )arg0 ;
-(void)_setCropModel:(id)arg0 ;
-(void)setModelCropRect:(struct CGRect )arg0 viewCropRect:(struct CGRect )arg1 ;
-(void)setNeedsLayerTransformsUpdateAnimated:(BOOL)arg0 ;


@end


#endif