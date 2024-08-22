// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCNAVIGATIONACCESSORYCOMPONENT_H
#define ACCNAVIGATIONACCESSORYCOMPONENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ACCNavigationAccessoryComponent : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger identifier; // ivar: _identifier
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) NSUInteger maxCapacity_GuidanceManeuver; // ivar: _maxCapacity_GuidanceManeuver
@property (nonatomic) NSUInteger maxCapacity_LaneGuidance; // ivar: _maxCapacity_LaneGuidance
@property (nonatomic) NSUInteger maxLength_CurrentRoadName; // ivar: _maxLength_CurrentRoadName
@property (nonatomic) NSUInteger maxLength_DestinationRoadName; // ivar: _maxLength_DestinationRoadName
@property (nonatomic) NSUInteger maxLength_LaneGuidanceDescription; // ivar: _maxLength_LaneGuidanceDescription
@property (nonatomic) NSUInteger maxLength_ManeuverDescription; // ivar: _maxLength_ManeuverDescription
@property (nonatomic) NSUInteger maxLength_PostManeuverRoadName; // ivar: _maxLength_PostManeuverRoadName
@property (retain) NSString *name; // ivar: _name
@property (nonatomic) BOOL requestSourceName; // ivar: _requestSourceName
@property (nonatomic) BOOL requestSourceSupportsRouteGuidance; // ivar: _requestSourceSupportsRouteGuidance
@property (nonatomic) BOOL supportsExitInfo; // ivar: _supportsExitInfo
@property (nonatomic) BOOL supportsLaneGuidance; // ivar: _supportsLaneGuidance
@property (nonatomic) BOOL supportsTimeZoneOffset; // ivar: _supportsTimeZoneOffset


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif