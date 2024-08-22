// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IAPNAVIGATIONACCESSORYCOMPONENT_H
#define IAPNAVIGATIONACCESSORYCOMPONENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IAPNavigationAccessoryComponent : NSObject

@property BOOL _enabledModified; // ivar: __enabledModified
@property NSUInteger identifier; // ivar: _identifier
@property BOOL isEnabled; // ivar: _isEnabled
@property NSUInteger maxCapacity_GuidanceManeuver; // ivar: _maxCapacity_GuidanceManeuver
@property NSUInteger maxLength_CurrentRoadName; // ivar: _maxLength_CurrentRoadName
@property NSUInteger maxLength_DestinationRoadName; // ivar: _maxLength_DestinationRoadName
@property NSUInteger maxLength_ManeuverDescription; // ivar: _maxLength_ManeuverDescription
@property NSUInteger maxLength_PostManeuverRoadName; // ivar: _maxLength_PostManeuverRoadName
@property (retain) NSString *name; // ivar: _name
@property BOOL requestSourceName; // ivar: _requestSourceName
@property BOOL requestSourceSupportsRouteGuidance; // ivar: _requestSourceSupportsRouteGuidance


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithDict:(id)arg0 ;


@end


#endif