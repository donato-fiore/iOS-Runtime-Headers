// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGEVENT_H
#define SGEVENT_H

@class NSURL, NSDate, NSString, NSTimeZone, NSArray;
@protocol SGEventForGeocode, OS_dispatch_queue;


#import "SGObject.h"
#import "SGEvent.h"

@interface SGEvent : SGObject <SGEventForGeocode>

 {
    NSObject<OS_dispatch_queue> *_geocodeQueue;
    SGEvent *_geocoded;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *end; // ivar: _end
@property (readonly, nonatomic) NSTimeZone *endTimeZone; // ivar: _endTimeZone
@property (readonly, nonatomic, getter=isGeocodeCandidate) BOOL geocodeCandidate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAllDay; // ivar: _isAllDay
@property (readonly, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, nonatomic) NSArray *locations; // ivar: _locations
@property (readonly, nonatomic, getter=isNaturalLanguageEvent) BOOL naturalLanguageEvent;
@property (readonly, nonatomic) NSUInteger naturalLanguageEventAttributes; // ivar: _naturalLanguageEventAttributes
@property (readonly, nonatomic) NSString *naturalLanguageEventTypeIdentifier; // ivar: _naturalLanguageEventTypeIdentifier
@property (readonly, nonatomic) NSString *notes; // ivar: _notes
@property (readonly, nonatomic) NSString *opaqueKey; // ivar: _opaqueKey
@property (readonly, nonatomic) NSArray *schemaOrg; // ivar: _schemaOrg
@property (readonly, nonatomic) NSDate *start; // ivar: _start
@property (readonly, nonatomic) NSTimeZone *startTimeZone; // ivar: _startTimeZone
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags; // ivar: _tags
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *uniqueKey; // ivar: _uniqueKey


+(BOOL)supportsSecureCoding;
+(id)eventWithRecordId:(id)arg0 origin:(id)arg1 uniqueKey:(id)arg2 opaqueKey:(id)arg3 title:(id)arg4 notes:(id)arg5 start:(id)arg6 startTimeZone:(id)arg7 end:(id)arg8 endTimeZone:(id)arg9 isAllDay:(BOOL)arg10 creationDate:(id)arg11 lastModifiedDate:(id)arg12 locations:(id)arg13 tags:(id)arg14 URL:(id)arg15 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEvent:(id)arg0 ;
-(BOOL)shouldAllowNotificationsInCalendarForBundleId:(id)arg0 appIsInForeground:(BOOL)arg1 ;
-(BOOL)shouldAllowNotificationsInCalendarForBundleId:(id)arg0 appIsInForeground:(BOOL)arg1 allowListOverride:(id)arg2 ;
-(BOOL)shouldAllowNotificationsInCalendarWithAllowListOverride:(id)arg0 ;
-(CGFloat)duration;
-(NSInteger)ekEventAvailabilityState;
-(NSUInteger)geocodingMode;
-(id)_componentsForDate:(id)arg0 timeZone:(id)arg1 isEnd:(BOOL)arg2 calendar:(id)arg3 ;
-(id)_naturalLanguageEventTagsInTags:(id)arg0 ;
-(id)dateForUTCDate:(id)arg0 withTimeZone:(id)arg1 ;
-(id)firstLocationForType:(NSUInteger)arg0 ;
-(id)geocodeEndDate;
-(id)geocodeEndTimeZone;
-(id)geocodeLocations;
-(id)geocodeStartDate;
-(id)geocodeStartTimeZone;
-(id)geocodedEventWithStartDate:(id)arg0 startTimeZone:(id)arg1 endDate:(id)arg2 endTimeZone:(id)arg3 locations:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordId:(id)arg0 origin:(id)arg1 uniqueKey:(id)arg2 opaqueKey:(id)arg3 title:(id)arg4 notes:(id)arg5 start:(id)arg6 startTimeZone:(id)arg7 end:(id)arg8 endTimeZone:(id)arg9 isAllDay:(BOOL)arg10 creationDate:(id)arg11 lastModifiedDate:(id)arg12 locations:(id)arg13 tagStrings:(id)arg14 URL:(id)arg15 naturalLanguageEventIdentifier:(id)arg16 naturalLanguageEventAttributes:(NSUInteger)arg17 schemaOrg:(id)arg18 ;
-(id)initWithRecordId:(id)arg0 origin:(id)arg1 uniqueKey:(id)arg2 opaqueKey:(id)arg3 title:(id)arg4 notes:(id)arg5 start:(id)arg6 startTimeZone:(id)arg7 end:(id)arg8 endTimeZone:(id)arg9 isAllDay:(BOOL)arg10 creationDate:(id)arg11 lastModifiedDate:(id)arg12 locations:(id)arg13 tags:(id)arg14 URL:(id)arg15 ;
-(id)loggingIdentifier;
-(id)poiFilters;
-(id)toEKEventWithStore:(id)arg0 ;
-(void)_applyTimeRangeToEKEvent:(id)arg0 withTZID:(id)arg1 ;
-(void)_mergeTagsIntoEKEvent:(id)arg0 withStore:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)geocodeWithCallback:(id)arg0 ;
-(void)mergeIntoEKEvent:(id)arg0 ;
-(void)mergeIntoEKEvent:(id)arg0 withStore:(id)arg1 ;
-(void)mergeIntoEKEvent:(id)arg0 withStore:(id)arg1 preservingValuesDifferentFrom:(id)arg2 ;


@end


#endif