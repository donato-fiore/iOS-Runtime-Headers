// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKMAPANNOTATIONTRACKINGCAMERACONTROLLER_H
#define VKMAPANNOTATIONTRACKINGCAMERACONTROLLER_H



#import "VKAnnotationTrackingCameraController.h"

@interface VKMapAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
    float _currentAnimationCompletedFraction;
    BOOL _zooming;
}




-(CGFloat)_minTrackingCameraDistance:(BOOL)arg0 ;
-(CGFloat)_zoomLevelForCameraPosition:(struct Matrix<double, 3, 1> )arg0 ;
-(struct VKEdgeInsets )_effectiveEdgeInsets;
// -(void)_goToAnnotationAnimated:(BOOL)arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 isInitial:(unk)arg3  ;
-(void)_rotateToHeadingAnimated:(BOOL)arg0 duration:(CGFloat)arg1 ;
-(void)setEdgeInsets:(struct VKEdgeInsets )arg0 ;
-(void)updateFramerate;


@end


#endif