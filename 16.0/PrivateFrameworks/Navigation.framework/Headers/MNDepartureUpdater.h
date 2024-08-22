// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNDEPARTUREUPDATER_H
#define MNDEPARTUREUPDATER_H

@class NSArray, NSMutableDictionary, GEOComposedRouteLeg, GEOComposedRoute;

#import <Foundation/Foundation.h>


@interface MNDepartureUpdater : NSObject {
    NSArray *_conditions;
    NSMutableDictionary *_conditionScores;
}


@property (readonly, nonatomic) GEOComposedRouteLeg *arrivalLeg; // ivar: _arrivalLeg
@property (readonly, nonatomic) NSUInteger arrivalWaypointLegIndex;
@property (readonly, nonatomic) GEOComposedRoute *route; // ivar: _route


-(BOOL)allowDepartureForLocation:(id)arg0 ;
-(id)_arrivalRegionsDepartureConditions;
-(id)_defaultDepartureConditions;
-(id)initWithRoute:(id)arg0 arrivalLegIndex:(NSUInteger)arg1 ;
-(void)_initConditions;


@end


#endif