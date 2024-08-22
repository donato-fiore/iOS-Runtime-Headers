// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKGLOBEANNOTATIONTRACKINGCAMERACONTROLLER_H
#define VKGLOBEANNOTATIONTRACKINGCAMERACONTROLLER_H



#import "VKAnnotationTrackingCameraController.h"
#import "VKCameraRegionRestriction.h"

@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
    *void _anchor;
    ? _currentAnimationStartCoordinate;
    ? _currentAnimationPresentationStartCoordinate;
    ? _currentAnimationPresentationEndCoordinate;
    ? _currentAnimationEndCoordinate;
}


@property (nonatomic) *void globeView; // ivar: _globeView
@property (retain, nonatomic) VKCameraRegionRestriction *regionRestriction; // ivar: _regionRestriction


-(id)init;
-(struct Matrix<int, 2, 1> )_centerCursor;
-(struct Matrix<int, 2, 1> )_nonOffsetCenterCursor;
-(struct VKEdgeInsets )_effectiveEdgeInsets;
// -(void)_goToAnnotationAnimated:(BOOL)arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 isInitial:(unk)arg3  ;
-(void)_rotateToHeadingAnimated:(BOOL)arg0 duration:(CGFloat)arg1 ;
-(void)dealloc;
-(void)setEdgeInsets:(struct VKEdgeInsets )arg0 ;


@end


#endif