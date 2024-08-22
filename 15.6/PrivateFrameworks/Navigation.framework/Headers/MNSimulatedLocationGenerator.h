// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNSIMULATEDLOCATIONGENERATOR_H
#define MNSIMULATEDLOCATIONGENERATOR_H


#import <Foundation/Foundation.h>

#import "MNActiveRouteInfo.h"
#import "MNLocation.h"

@interface MNSimulatedLocationGenerator : NSObject {
    MNActiveRouteInfo *_routeInfo;
    CGFloat _currentTime;
    NSUInteger _currentLegIndex;
    CGFloat _startWaitingTime;
    CGFloat _speedOverride;
    BOOL _isChinaShifted;
}


@property (nonatomic) BOOL endAtFinalDestination; // ivar: _endAtFinalDestination
@property (readonly, nonatomic) MNLocation *lastLocation; // ivar: _lastLocation
@property (readonly, nonatomic) ? lastRouteCoordinate; // ivar: _lastRouteCoordinate
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(BOOL)_isCoordinate:(struct ? )arg0 atEndOfLeg:(id)arg1 ;
-(CGFloat)_courseFromCoordinate:(struct ? )arg0 toCoordinate:(struct ? )arg1 ;
-(id)_locationWithCoordinate:(struct ? )arg0 course:(CGFloat)arg1 speed:(CGFloat)arg2 ;
-(id)initWithRouteInfo:(id)arg0 ;
-(id)nextSimulatedLocationWithElapsedTime:(CGFloat)arg0 ;
-(id)stringForState:(NSInteger)arg0 ;
-(struct ? )_projectedCoordinateOffRouteFrom:(struct ? )arg0 toCoordinate:(struct ? )arg1 overTimeDelta:(CGFloat)arg2 outCourse:(*CGFloat)arg3 outSpeed:(*CGFloat)arg4 ;
-(struct ? )_projectedCoordinateOnRouteFrom:(struct ? )arg0 overTimeDelta:(CGFloat)arg1 outSpeed:(*CGFloat)arg2 ;
-(struct ? )_simulationStartRouteCoordinate;
-(struct ? )_updateForFollowingRouteOverTimeDelta:(CGFloat)arg0 outCourse:(*CGFloat)arg1 outSpeed:(*CGFloat)arg2 ;
-(struct ? )_updateForProceedingToStartOfLegOverTimeDelta:(CGFloat)arg0 outCourse:(*CGFloat)arg1 outSpeed:(*CGFloat)arg2 ;
-(struct ? )_updateForProceedingToWaypointOverTimeDelta:(CGFloat)arg0 outCourse:(*CGFloat)arg1 outSpeed:(*CGFloat)arg2 ;
-(struct ? )_updateForWaitingAtWaypointOverTimeDelta:(CGFloat)arg0 outCourse:(*CGFloat)arg1 outSpeed:(*CGFloat)arg2 ;
-(void)updateWithRouteInfo:(id)arg0 ;


@end


#endif