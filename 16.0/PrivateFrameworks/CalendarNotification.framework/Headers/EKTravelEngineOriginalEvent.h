// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKTRAVELENGINEORIGINALEVENT_H
#define EKTRAVELENGINEORIGINALEVENT_H

@class NSDate, NSString, CLLocation, NSData;

#import <Foundation/Foundation.h>


@interface EKTravelEngineOriginalEvent : NSObject

@property (nonatomic) BOOL automaticGeocodingAllowed; // ivar: _automaticGeocodingAllowed
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSString *eventExternalURL; // ivar: _eventExternalURL
@property (retain, nonatomic) CLLocation *geoLocation; // ivar: _geoLocation
@property (nonatomic) BOOL hasPredictedLocation; // ivar: _hasPredictedLocation
@property (nonatomic) BOOL isOnSharedCalendar; // ivar: _isOnSharedCalendar
@property (nonatomic) BOOL locationIsAConferenceRoom; // ivar: _locationIsAConferenceRoom
@property (retain, nonatomic) NSData *locationMapKitHandle; // ivar: _locationMapKitHandle
@property (retain, nonatomic) NSString *locationString; // ivar: _locationString
@property (retain, nonatomic) NSString *locationStringWithoutPrediction; // ivar: _locationStringWithoutPrediction
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) int transportTypeOverride; // ivar: _transportTypeOverride


-(BOOL)isEqualToOriginalEvent:(id)arg0 ;
-(id)description;


@end


#endif