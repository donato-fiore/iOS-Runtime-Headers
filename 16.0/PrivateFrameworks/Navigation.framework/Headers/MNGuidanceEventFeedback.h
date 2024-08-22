// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNGUIDANCEEVENTFEEDBACK_H
#define MNGUIDANCEEVENTFEEDBACK_H

@class NSString, NSArray, NSData, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNGuidanceEventFeedback : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat endDistance; // ivar: _endDistance
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (copy, nonatomic) NSString *enrouteNoticeIdentifier; // ivar: _enrouteNoticeIdentifier
@property (nonatomic) NSUInteger enrouteNoticeIndex; // ivar: _enrouteNoticeIndex
@property (copy, nonatomic) NSString *eventDescription; // ivar: _eventDescription
@property (nonatomic) NSUInteger eventIndex; // ivar: _eventIndex
@property (retain, nonatomic) NSArray *junctionViewImageIDs; // ivar: _junctionViewImageIDs
@property (nonatomic) CGFloat maneuverTime; // ivar: _maneuverTime
@property (retain, nonatomic) NSData *routeID; // ivar: _routeID
@property (nonatomic) NSUInteger selectedPrimaryStringIndex; // ivar: _selectedPrimaryStringIndex
@property (nonatomic) NSUInteger selectedSecondaryStringIndex; // ivar: _selectedSecondaryStringIndex
@property (nonatomic) CGFloat startDistance; // ivar: _startDistance
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) NSUInteger stepID; // ivar: _stepID
@property (nonatomic) int trafficCameraType; // ivar: _trafficCameraType
@property (nonatomic) NSUInteger trafficColor; // ivar: _trafficColor
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSUUID *uniqueID; // ivar: _uniqueID
@property (nonatomic) CGFloat vehicleSpeed; // ivar: _vehicleSpeed


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif