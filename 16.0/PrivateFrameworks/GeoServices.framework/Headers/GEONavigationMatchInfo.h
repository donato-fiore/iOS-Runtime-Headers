// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEONAVIGATIONMATCHINFO_H
#define GEONAVIGATIONMATCHINFO_H


#import <Foundation/Foundation.h>


@interface GEONavigationMatchInfo : NSObject

@property (nonatomic) CGFloat courseDelta; // ivar: courseDelta
@property (nonatomic) CGFloat courseMatchScore; // ivar: courseMatchScore
@property (nonatomic) CGFloat courseWeight; // ivar: courseWeight
@property (nonatomic) CGFloat distanceFromNearestJunction; // ivar: distanceFromNearestJunction
@property (nonatomic) CGFloat distanceFromRoad; // ivar: distanceFromRoad
@property (nonatomic) CGFloat distanceFromRoute; // ivar: distanceFromRoute
@property (nonatomic) CGFloat distanceMatchScore; // ivar: distanceMatchScore
@property (nonatomic) CGFloat distanceWeight; // ivar: distanceWeight
@property (nonatomic) CGFloat maxCourseDelta; // ivar: maxCourseDelta
@property (nonatomic) CGFloat maxDistance; // ivar: maxDistance
@property (nonatomic) CGFloat roadCourseDelta; // ivar: roadCourseDelta
@property (nonatomic) CGFloat roadWidthOnRoute; // ivar: roadWidthOnRoute
@property (nonatomic) CGFloat routeMatchScore; // ivar: routeMatchScore


-(id)description;


@end


#endif