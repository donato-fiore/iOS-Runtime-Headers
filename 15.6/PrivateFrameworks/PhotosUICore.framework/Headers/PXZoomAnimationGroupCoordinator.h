// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXZOOMANIMATIONGROUPCOORDINATOR_H
#define PXZOOMANIMATIONGROUPCOORDINATOR_H

@class NSArray;


#import "PXZoomAnimationCoordinator.h"

@interface PXZoomAnimationGroupCoordinator : PXZoomAnimationCoordinator

@property (readonly, copy, nonatomic) NSArray *zoomAnimationCoordinators; // ivar: _zoomAnimationCoordinators


-(id)init;
-(id)initWithZoomAnimationCoordinators:(id)arg0 ;
-(void)animateContentForEndPointType:(NSInteger)arg0 inView:(id)arg1 withLayerType:(NSInteger)arg2 zoomAnimationContext:(id)arg3 ;
-(void)animateContentForEndPointType:(NSInteger)arg0 withZoomAnimationContext:(id)arg1 ;


@end


#endif