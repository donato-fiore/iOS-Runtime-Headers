// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKAUTOCOMPLETESEARCHRESULT_H
#define EKAUTOCOMPLETESEARCHRESULT_H

@class NSURL, NSArray, NSDate, NSString, NSData, NSTimeZone;

#import <Foundation/Foundation.h>

#import "EKCalendar.h"
#import "EKStructuredLocation.h"
#import "EKSuggestedEventInfo.h"

@interface EKAutocompleteSearchResult : NSObject

@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSArray *alarms; // ivar: _alarms
@property (nonatomic, getter=isAllDay) BOOL allDay; // ivar: _allDay
@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (retain, nonatomic) NSArray *attendees; // ivar: _attendees
@property (nonatomic) NSInteger availability; // ivar: _availability
@property (retain, nonatomic) EKCalendar *calendar; // ivar: _calendar
@property (nonatomic) *CGColor calendarColor; // ivar: _calendarColor
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSString *foundInBundleID; // ivar: _foundInBundleID
@property (nonatomic) BOOL isNaturalLanguageSuggested; // ivar: _isNaturalLanguageSuggested
@property (retain, nonatomic) NSData *localStructuredData; // ivar: _localStructuredData
@property (retain, nonatomic) NSString *location; // ivar: _location
@property (retain, nonatomic) NSString *locationWithoutPrediction; // ivar: _locationWithoutPrediction
@property (retain, nonatomic) NSString *notes; // ivar: _notes
@property (retain, nonatomic) EKStructuredLocation *preferredLocation; // ivar: _preferredLocation
@property (nonatomic) NSInteger privacyLevel; // ivar: _privacyLevel
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) EKStructuredLocation *structuredLocation; // ivar: _structuredLocation
@property (nonatomic, getter=isSuggested) BOOL suggested; // ivar: _suggested
@property (retain, nonatomic) EKSuggestedEventInfo *suggestionInfo; // ivar: _suggestionInfo
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(BOOL)_participantShouldBeUsedForAutocomplete:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithUniqueID:(id)arg0 ;
-(void)dealloc;


@end


#endif