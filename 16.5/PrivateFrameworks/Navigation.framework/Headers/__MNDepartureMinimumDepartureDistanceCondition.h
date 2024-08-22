// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __MNDEPARTUREMINIMUMDEPARTUREDISTANCECONDITION_H
#define __MNDEPARTUREMINIMUMDEPARTUREDISTANCECONDITION_H

@class NSArray;
@protocol __MNDepartureCondition;

#import <Foundation/Foundation.h>

#import "MNDepartureUpdater.h"

@interface __MNDepartureMinimumDepartureDistanceCondition : NSObject <__MNDepartureCondition>

 {
    MNDepartureUpdater *_updater;
    NSArray *_arrivalPoints;
    CGFloat _closestDistanceToWaypoint;
    CGFloat _threshold;
}




-(CGFloat)scoreForLocation:(id)arg0 ;
-(id)initWithUpdater:(id)arg0 arrivalPoints:(id)arg1 distanceThreshold:(CGFloat)arg2 ;
-(id)initWithUpdater:(id)arg0 distanceThreshold:(CGFloat)arg1 ;


@end


#endif