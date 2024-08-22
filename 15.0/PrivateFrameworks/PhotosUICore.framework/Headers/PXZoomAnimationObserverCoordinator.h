// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXZOOMANIMATIONOBSERVERCOORDINATOR_H
#define PXZOOMANIMATIONOBSERVERCOORDINATOR_H

@protocol PXZoomAnimationObserverCoordinatorDelegate;


#import "PXZoomAnimationCoordinator.h"

@interface PXZoomAnimationObserverCoordinator : PXZoomAnimationCoordinator {
    ? _delegateRespondsTo;
}


@property (weak, nonatomic) NSObject<PXZoomAnimationObserverCoordinatorDelegate> *delegate; // ivar: _delegate


-(void)animateContentForEndPointType:(NSInteger)arg0 withZoomAnimationContext:(id)arg1 ;


@end


#endif