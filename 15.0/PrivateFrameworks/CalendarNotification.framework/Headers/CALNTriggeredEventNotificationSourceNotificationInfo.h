// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNTRIGGEREDEVENTNOTIFICATIONSOURCENOTIFICATIONINFO_H
#define CALNTRIGGEREDEVENTNOTIFICATIONSOURCENOTIFICATIONINFO_H

@class NSString, NSURL, NSDate, NSDictionary, EKTravelEngineHypothesis, EKStructuredLocation;

#import <Foundation/Foundation.h>


@interface CALNTriggeredEventNotificationSourceNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *alarmID; // ivar: _alarmID
@property (readonly, nonatomic) BOOL allowsLocationAlerts; // ivar: _allowsLocationAlerts
@property (readonly, copy, nonatomic) NSURL *conferenceURL; // ivar: _conferenceURL
@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL eventHasAlarms; // ivar: _eventHasAlarms
@property (readonly, copy, nonatomic) NSString *eventID; // ivar: _eventID
@property (readonly, copy, nonatomic) NSString *eventObjectID; // ivar: _eventObjectID
@property (readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary; // ivar: _eventRepresentationDictionary
@property (readonly, nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses; // ivar: _forceDisplayOfNewTravelAdvisoryHypotheses
@property (readonly, nonatomic) BOOL hasSuggestedLocation; // ivar: _hasSuggestedLocation
@property (readonly, copy, nonatomic) EKTravelEngineHypothesis *hypothesis; // ivar: _hypothesis
@property (readonly, nonatomic) BOOL isAllDay; // ivar: _isAllDay
@property (readonly, nonatomic) BOOL isLocationEvent; // ivar: _isLocationEvent
@property (readonly, nonatomic) BOOL isOffsetFromTravelTimeStart; // ivar: _isOffsetFromTravelTimeStart
@property (readonly, nonatomic) BOOL isTimeSensitive; // ivar: _isTimeSensitive
@property (readonly, copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime; // ivar: _lastFireTimeOfAlertOffsetFromTravelTime
@property (readonly, copy, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (readonly, copy, nonatomic) NSString *legacyIdentifier; // ivar: _legacyIdentifier
@property (readonly, copy, nonatomic) NSString *location; // ivar: _location
@property (readonly, copy, nonatomic) NSString *locationWithoutPrediction; // ivar: _locationWithoutPrediction
@property (readonly, copy, nonatomic) NSURL *mailtoURL; // ivar: _mailtoURL
@property (readonly, copy, nonatomic) NSURL *mapItemURL; // ivar: _mapItemURL
@property (readonly, nonatomic) EKStructuredLocation *preferredLocation; // ivar: _preferredLocation
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger travelAdvisoryTimelinessPeriod; // ivar: _travelAdvisoryTimelinessPeriod


-(id)description;
-(id)initWithTitle:(id)arg0 location:(id)arg1 locationWithoutPrediction:(id)arg2 preferredLocation:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 isAllDay:(BOOL)arg6 isTimeSensitive:(BOOL)arg7 launchURL:(id)arg8 isLocationEvent:(BOOL)arg9 eventID:(id)arg10 eventObjectID:(id)arg11 eventRepresentationDictionary:(id)arg12 legacyIdentifier:(id)arg13 mapItemURL:(id)arg14 conferenceURL:(id)arg15 mailtoURL:(id)arg16 hasSuggestedLocation:(BOOL)arg17 eventHasAlarms:(BOOL)arg18 alarmID:(id)arg19 isOffsetFromTravelTimeStart:(BOOL)arg20 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg21 allowsLocationAlerts:(BOOL)arg22 hypothesis:(id)arg23 travelAdvisoryTimelinessPeriod:(NSUInteger)arg24 forceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)arg25 ;


@end


#endif