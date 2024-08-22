// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKNAVIGATIONPUCK_H
#define VKNAVIGATIONPUCK_H

@class NSString;
@protocol VKTrackableAnnotationPresentation, VKAnnotation;

#import <Foundation/Foundation.h>

#import "VKTimedAnimation.h"

@interface VKNavigationPuck : NSObject <VKTrackableAnnotationPresentation>

 {
    VKTimedAnimation *_puckStyleAnimation;
    *AnimationRunner _animationRunner;
    *void _navigationPuck;
}


@property (nonatomic, getter=isAnimatingAccuracy) BOOL animatingAccuracy; // ivar: _animatingAccuracy
@property (nonatomic) BOOL animatingToCoordinate; // ivar: _animatingToCoordinate
@property (retain, nonatomic) NSObject<VKAnnotation> *annotation; // ivar: _annotation
@property (readonly, nonatomic) VKEdgeInsets annotationTrackingEdgeInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat minimumAccuracy;
@property (nonatomic) int mode;
@property (nonatomic) CGFloat presentationAccuracy; // ivar: _presentationAccuracy
@property (nonatomic) ? presentationCoordinate;
@property (nonatomic) CGFloat presentationCourse;
@property (nonatomic) float scale;
@property (nonatomic) BOOL showCourse;
@property (nonatomic) BOOL stale; // ivar: _stale
@property (readonly) Class superclass;
@property (nonatomic) BOOL tracking; // ivar: _tracking


-(*void)puck;
-(?)initWithAnimationRunner;
-(void)dealloc;
-(void)destroyAnimationRunner;
-(void)runAnimation:(id)arg0 ;


@end


#endif