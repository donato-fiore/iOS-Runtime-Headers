// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNTRIGGEREDEVENTNOTIFICATIONINFO_H
#define CALNTRIGGEREDEVENTNOTIFICATIONINFO_H

@class NSString, NSURL, NSDate, NSDictionary, EKStructuredLocation;

#import <Foundation/Foundation.h>


@interface CALNTriggeredEventNotificationInfo : NSObject

@property (readonly, nonatomic) BOOL allowsLocationAlerts; // ivar: _allowsLocationAlerts
@property (readonly, copy, nonatomic) NSString *calendarIdentifier; // ivar: _calendarIdentifier
@property (readonly, copy, nonatomic) NSURL *conferenceURL; // ivar: _conferenceURL
@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL eventHasAlarms; // ivar: _eventHasAlarms
@property (readonly, copy, nonatomic) NSString *eventID; // ivar: _eventID
@property (readonly, copy, nonatomic) NSString *eventObjectID; // ivar: _eventObjectID
@property (readonly, copy, nonatomic) NSString *eventOccurrenceID; // ivar: _eventOccurrenceID
@property (readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary; // ivar: _eventRepresentationDictionary
@property (readonly, nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses; // ivar: _forceDisplayOfNewTravelAdvisoryHypotheses
@property (readonly, nonatomic) BOOL hasSuggestedLocation; // ivar: _hasSuggestedLocation
@property (readonly, nonatomic) BOOL isAllDay; // ivar: _isAllDay
@property (readonly, nonatomic) BOOL isTimeSensitive; // ivar: _isTimeSensitive
@property (readonly, copy, nonatomic) NSString *legacyIdentifier; // ivar: _legacyIdentifier
@property (readonly, copy, nonatomic) NSString *location; // ivar: _location
@property (readonly, copy, nonatomic) NSString *locationWithoutPrediction; // ivar: _locationWithoutPrediction
@property (readonly, copy, nonatomic) NSURL *mailtoURL; // ivar: _mailtoURL
@property (readonly, nonatomic) EKStructuredLocation *preferredLocation; // ivar: _preferredLocation
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)description;
-(id)initWithTitle:(id)arg0 location:(id)arg1 locationWithoutPrediction:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 isAllDay:(BOOL)arg5 isTimeSensitive:(BOOL)arg6 eventID:(id)arg7 eventOccurrenceID:(id)arg8 eventObjectID:(id)arg9 calendarIdentifier:(id)arg10 eventRepresentationDictionary:(id)arg11 legacyIdentifier:(id)arg12 preferredLocation:(id)arg13 conferenceURL:(id)arg14 mailtoURL:(id)arg15 hasSuggestedLocation:(BOOL)arg16 eventHasAlarms:(BOOL)arg17 allowsLocationAlerts:(BOOL)arg18 forceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)arg19 ;


@end


#endif