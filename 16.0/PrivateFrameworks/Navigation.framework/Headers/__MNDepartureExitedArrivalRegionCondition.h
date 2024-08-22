// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __MNDEPARTUREEXITEDARRIVALREGIONCONDITION_H
#define __MNDEPARTUREEXITEDARRIVALREGIONCONDITION_H

@class NSArray, NSMutableArray;
@protocol __MNDepartureCondition;

#import <Foundation/Foundation.h>

#import "MNDepartureUpdater.h"

@interface __MNDepartureExitedArrivalRegionCondition : NSObject <__MNDepartureCondition>

 {
    MNDepartureUpdater *_updater;
    NSArray *_arrivalRegions;
    CGFloat _closestDistanceToWaypoint;
    CGFloat _threshold;
    NSUInteger _numHistoricalLocations;
    NSMutableArray *_regionDepartureHistory;
}




-(CGFloat)scoreForLocation:(id)arg0 ;
-(id)initWithUpdater:(id)arg0 arrivalRegions:(id)arg1 ;


@end


#endif