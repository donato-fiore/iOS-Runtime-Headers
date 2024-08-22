// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNLOCATION_H
#define MNLOCATION_H

@class CLLocation, GEONavigationMatchInfo, NSDate, GEORoadMatch, NSString, NSUUID, GEORouteMatch;
@protocol NSSecureCoding;



@interface MNLocation : CLLocation <NSSecureCoding>

 {
    NSUInteger _traceIndex;
}


@property (retain, nonatomic) GEONavigationMatchInfo *detailedMatchInfo; // ivar: _detailedMatchInfo
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (nonatomic) BOOL isDirectional; // ivar: _isDirectional
@property (nonatomic) BOOL isLeeched; // ivar: _isLeeched
@property (readonly, nonatomic) BOOL isProjected;
@property (nonatomic) BOOL locationUnreliable; // ivar: _locationUnreliable
@property (retain, nonatomic) NSDate *originalDate; // ivar: _originalDate
@property (nonatomic) int rampType; // ivar: _rampType
@property (retain, nonatomic) CLLocation *rawLocation; // ivar: _rawLocation
@property (nonatomic) CLLocationCoordinate2D rawShiftedCoordinate; // ivar: _rawShiftedCoordinate
@property (nonatomic) unsigned int roadLineType; // ivar: _roadLineType
@property (retain, nonatomic) GEORoadMatch *roadMatch; // ivar: _roadMatch
@property (copy, nonatomic) NSString *roadName; // ivar: _roadName
@property (readonly, nonatomic) NSUUID *routeID; // ivar: _routeID
@property (retain, nonatomic) GEORouteMatch *routeMatch; // ivar: _routeMatch
@property (copy, nonatomic) NSString *shieldText; // ivar: _shieldText
@property (nonatomic) NSInteger shieldType; // ivar: _shieldType
@property (nonatomic) NSUInteger speedLimit; // ivar: _speedLimit
@property (nonatomic) BOOL speedLimitIsMPH; // ivar: _speedLimitIsMPH
@property (nonatomic) NSInteger speedLimitShieldType; // ivar: _speedLimitShieldType
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSUInteger stepIndex;
@property (nonatomic) NSUInteger traceIndex;
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)_navigation_hasValidCourse;
-(BOOL)_navigation_isStale;
-(BOOL)isEqualToLocation:(id)arg0 ;
-(id)_referenceFrameAsString:(int)arg0 ;
-(id)_roadFeature;
-(id)description;
-(id)initWithCLLocation:(id)arg0 ;
-(id)initWithClientLocation:(struct ? )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRawLocation:(id)arg0 ;
-(id)initWithRawLocation:(id)arg0 locationMatchType:(NSUInteger)arg1 ;
-(id)initWithRoadMatch:(id)arg0 rawLocation:(id)arg1 locationMatchType:(NSUInteger)arg2 ;
-(id)initWithRouteMatch:(id)arg0 rawLocation:(id)arg1 locationMatchType:(NSUInteger)arg2 ;
-(id)matchInfo;
-(id)propagatedLocationForTimeInterval:(CGFloat)arg0 shouldProjectAlongRoute:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif