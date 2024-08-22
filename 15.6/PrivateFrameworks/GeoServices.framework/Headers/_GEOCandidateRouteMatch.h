// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOCANDIDATEROUTEMATCH_H
#define _GEOCANDIDATEROUTEMATCH_H


#import <Foundation/Foundation.h>


@interface _GEOCandidateRouteMatch : NSObject

@property (nonatomic) CGFloat courseDelta; // ivar: _courseDelta
@property (nonatomic) CGFloat courseMatchScore; // ivar: _courseMatchScore
@property (nonatomic) CGFloat courseWeight; // ivar: _courseWeight
@property (nonatomic) CGFloat distanceAlongRouteFromPreviousMatch; // ivar: _distanceAlongRouteFromPreviousMatch
@property (nonatomic) CGFloat distanceFromRoute; // ivar: _distanceFromRoute
@property (nonatomic) CGFloat distanceMatchScore; // ivar: _distanceMatchScore
@property (nonatomic) CGFloat distanceWeight; // ivar: _distanceWeight
@property (nonatomic) BOOL isGoodMatch; // ivar: _isGoodMatch
@property (nonatomic) ? locationCoordinate; // ivar: _locationCoordinate
@property (nonatomic) CGFloat maxCourseDelta; // ivar: _maxCourseDelta
@property (nonatomic) CGFloat maxDistance; // ivar: _maxDistance
@property (nonatomic) PolylineCoordinate routeCoordinate; // ivar: _routeCoordinate
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) NSUInteger stepIndex; // ivar: _stepIndex


-(id)description;
-(id)initWithRoute:(id)arg0 ;


@end


#endif