// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIDVRGBCAMERAPREVIEW_H
#define CIDVRGBCAMERAPREVIEW_H

@class UIView, CAShapeLayer, CALayer;
@protocol CIDVRGBAVSessionManager;



@interface CIDVRGBCameraPreview : UIView {
    id<CIDVRGBAVSessionManager> *_sessionManager;
    CAShapeLayer *_regionOfInterestLayer;
    CALayer *_objectLayer;
}


@property (retain, nonatomic) CAShapeLayer *debugLayer;
@property (readonly, nonatomic) CGRect metadataRegionOfInterest;


+(Class)layerClass;
-(id)_convertPoints:(id)arg0 fromBounds:(struct CGRect )arg1 ;
-(id)previewLayer;
-(struct CGRect )regionOfInterest;
-(void)_alignRegionOfInterest;
-(void)_alignVideoFeedToCurrentOrientation;
-(void)_drawLandmarkRegionWithPoints:(id)arg0 ;
-(void)_drawLandmarks:(id)arg0 obtainedFromFaceWithBounds:(struct CGRect )arg1 ;
-(void)_drawRegionOfInterest;
-(void)_processLandmarksInFrame:(id)arg0 ;
-(void)didMoveToWindow;
-(void)flashRegionOfInterest;
-(void)layoutSubviews;
-(void)processFrame:(id)arg0 ;
-(void)setSessionManager:(id)arg0 ;
-(void)showDetectedObjectBounds:(struct CGRect )arg0 ;


@end


#endif