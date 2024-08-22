// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKUSERLOCATIONANNOTATIONVIEWPROXY_H
#define MKUSERLOCATIONANNOTATIONVIEWPROXY_H

@class NSString, GEORouteMatch;
@protocol VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation;

#import <Foundation/Foundation.h>

#import "MKAnnotationView.h"

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation>



@property (nonatomic, getter=isAnimatingAccuracy) BOOL animatingAccuracy;
@property (readonly, nonatomic) VKEdgeInsets annotationTrackingEdgeInsets;
@property (weak, nonatomic) MKAnnotationView *annotationView; // ivar: _annotationView
@property (readonly, nonatomic) CGSize collisionSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat minimumAccuracy;
@property (nonatomic) CGFloat presentationAccuracy;
@property (nonatomic) ? presentationCoordinate;
@property (nonatomic) CGFloat presentationCourse;
@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (readonly) Class superclass;
@property (nonatomic) BOOL tracking;


-(void)setAnimatingToCoordinate:(BOOL)arg0 ;


@end


#endif