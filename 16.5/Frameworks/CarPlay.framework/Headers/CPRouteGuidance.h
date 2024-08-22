// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPROUTEGUIDANCE_H
#define CPROUTEGUIDANCE_H

@class NSArray, NSString, NSMeasurement, NSDate;
@protocol CPAccNavPrimaryUpdateProtocol, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPLaneGuidance.h"

@interface CPRouteGuidance : NSObject <CPAccNavPrimaryUpdateProtocol, NSCopying, NSSecureCoding>



@property (nonatomic) BOOL beingShownInApp; // ivar: _beingShownInApp
@property (nonatomic) unsigned short componentID;
@property (nonatomic) unsigned short componentID; // ivar: _componentID
@property (retain, nonatomic) CPLaneGuidance *currentLaneGuidance; // ivar: _currentLaneGuidance
@property (nonatomic) unsigned short currentLaneGuidanceIndex;
@property (nonatomic) unsigned short currentLaneGuidanceIndex; // ivar: _currentLaneGuidanceIndex
@property (copy, nonatomic) NSArray *currentManeuverIndexes;
@property (copy, nonatomic) NSArray *currentManeuverIndexes; // ivar: _currentManeuverIndexes
@property (copy, nonatomic) NSArray *currentManeuvers; // ivar: _currentManeuvers
@property (copy, nonatomic) NSArray *currentRoadNameVariants; // ivar: _currentRoadNameVariants
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *destinationNameVariants; // ivar: _destinationNameVariants
@property (nonatomic) unsigned char destinationTimeZoneOffsetMinutes; // ivar: _destinationTimeZoneOffsetMinutes
@property (retain, nonatomic) NSMeasurement *distanceRemaining; // ivar: _distanceRemaining
@property (retain, nonatomic) NSMeasurement *distanceRemainingDisplay; // ivar: _distanceRemainingDisplay
@property (nonatomic) unsigned int distanceRemainingToNextManeuver; // ivar: _distanceRemainingToNextManeuver
@property (retain, nonatomic) NSMeasurement *distanceRemainingToNextManeuverDisplay; // ivar: _distanceRemainingToNextManeuverDisplay
@property (retain, nonatomic) NSDate *estimatedTimeOfArrival; // ivar: _estimatedTimeOfArrival
@property (nonatomic) unsigned char guidanceState; // ivar: _guidanceState
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL laneGuidanceShowing; // ivar: _laneGuidanceShowing
@property (nonatomic) unsigned char maneuverState; // ivar: _maneuverState
@property (copy, nonatomic) NSString *sourceName; // ivar: _sourceName
@property (nonatomic) BOOL sourceSupportsRouteGuidance; // ivar: _sourceSupportsRouteGuidance
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeRemaining; // ivar: _timeRemaining
@property (nonatomic) unsigned short totalLaneGuidanceCount; // ivar: _totalLaneGuidanceCount
@property (nonatomic) unsigned short totalManeuverCount; // ivar: _totalManeuverCount


+(BOOL)supportsSecureCoding;
+(id)accNavParameters;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif