// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASEVENT_H
#define ASEVENT_H

@class NSNumber, NSDate, NSArray, NSString, NSCalendarDate;
@protocol NSSecureCoding, DADataElement;


#import "ASChangedCollectionLeaf.h"
#import "ASEventUID.h"
#import "ASLocation.h"
#import "ASRecurrence.h"
#import "ASTimeZone.h"

@interface ASEvent : ASChangedCollectionLeaf <NSSecureCoding, DADataElement>



@property (readonly, nonatomic) int CalCalendarItemStatus;
@property (retain, nonatomic) NSNumber *allDayEvent; // ivar: _allDayEvent
@property (retain, nonatomic) NSDate *appointmentReplyTime; // ivar: _appointmentReplyTime
@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (retain, nonatomic) NSArray *attendees; // ivar: _attendees
@property (retain, nonatomic) NSArray *attendeesPendingDeletion; // ivar: _attendeesPendingDeletion
@property (retain, nonatomic) NSString *body; // ivar: _body
@property (nonatomic) BOOL bodyTruncated; // ivar: _bodyTruncated
@property (retain, nonatomic) NSNumber *busyStatus; // ivar: _busyStatus
@property (nonatomic) BOOL cachedOrganizerIsSelf; // ivar: _cachedOrganizerIsSelf
@property (readonly, nonatomic) int calAttendeePendingStatus;
@property (readonly, nonatomic) int calAttendeeStatus;
@property (nonatomic) *void calEvent; // ivar: _calEvent
@property (nonatomic) BOOL calculateNextStatusAsIfMeetingRequest; // ivar: _calculateNextStatusAsIfMeetingRequest
@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (retain, nonatomic) NSDate *dTStamp; // ivar: _dTStamp
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *deletedAttachmentsIDs; // ivar: _deletedAttachmentsIDs
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *disallowNewTimeProposal; // ivar: _disallowNewTimeProposal
@property (nonatomic) BOOL doNotSendBody; // ivar: _doNotSendBody
@property (readonly, nonatomic) NSCalendarDate *endDateForCalFramework;
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (retain, nonatomic) ASEventUID *eventUID; // ivar: _eventUID
@property (retain, nonatomic) NSDate *exceptionDate;
@property (retain, nonatomic) NSArray *exceptions; // ivar: _exceptions
@property (retain, nonatomic) NSArray *from; // ivar: _from
@property (readonly, nonatomic) BOOL hasOccurrenceInTheFuture;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL haveCheckedOrganizerEmail; // ivar: _haveCheckedOrganizerEmail
@property (nonatomic) BOOL isAttendeeUpdateOnly; // ivar: _isAttendeeUpdateOnly
@property (nonatomic) BOOL isDTStampUpdateOnly; // ivar: _isDTStampUpdateOnly
@property (nonatomic) BOOL isOrganizerUpdate; // ivar: _isOrganizerUpdate
@property (readonly, nonatomic) BOOL isTombstoneEndTimeInFuture;
@property (retain, nonatomic) ASLocation *location; // ivar: _location
@property (nonatomic) int meetingResponseForEmail;
@property (nonatomic) int meetingResponseToEmailAbout; // ivar: _meetingResponseToEmailAbout
@property (retain, nonatomic) NSNumber *meetingStatus; // ivar: _meetingStatus
@property (retain, nonatomic) NSString *onlineMeetingExternalLink; // ivar: _onlineMeetingExternalLink
@property (retain, nonatomic) NSString *organizerEmail; // ivar: _organizerEmail
@property (retain, nonatomic) NSString *organizerName; // ivar: _organizerName
@property (retain, nonatomic) NSDate *proposedEndTime; // ivar: _proposedEndTime
@property (retain, nonatomic) NSDate *proposedStartTime; // ivar: _proposedStartTime
@property (retain, nonatomic) ASRecurrence *recurrence; // ivar: _recurrence
@property (retain, nonatomic) NSNumber *reminderMinsBefore; // ivar: _reminderMinsBefore
@property (retain, nonatomic) NSString *responseComment; // ivar: _responseComment
@property (retain, nonatomic) NSNumber *responseRequested; // ivar: _responseRequested
@property (retain, nonatomic) NSNumber *responseType; // ivar: _responseType
@property (retain, nonatomic) NSNumber *sensitivity; // ivar: _sensitivity
@property (nonatomic) BOOL shouldUpdateStatus; // ivar: _shouldUpdateStatus
@property (readonly, nonatomic) NSCalendarDate *startDateForCalFramework;
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (retain, nonatomic) NSString *subject; // ivar: _subject
@property (readonly) Class superclass;
@property (retain, nonatomic) ASTimeZone *timeZone; // ivar: _timeZone
@property (retain, nonatomic) NSDate *tombstoneEndTime; // ivar: _tombstoneEndTime
@property (readonly, nonatomic) NSString *uidForCalFramework;


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)supportsSecureCoding;
+(id)asParseRules;
+(id)attendeeExternalRepClasses;
+(id)calendarItemExternalRepClasses;
+(id)eventWithCalEvent:(*void)arg0 serverID:(id)arg1 account:(id)arg2 ;
+(void)_setFakeDTStampDateForUnitTests:(id)arg0 ;
+(void)setSystemTimeZoneNameForUnitTests:(id)arg0 ;
-(*void)copySelfAttendeeGeneratedIfNecessaryWithLocalEvent:(*void)arg0 forAccount:(id)arg1 ;
-(BOOL)_bailIfNotNewestDataForAccount:(id)arg0 ;
-(BOOL)_selfIsMoreCorrectThanOtherEvent:(id)arg0 account:(id)arg1 ;
-(BOOL)cachedOrganizerIsSelfWithAccount:(id)arg0 ;
-(BOOL)deleteFromCalendar;
-(BOOL)deleteFromContainer:(*void)arg0 ;
-(BOOL)fillOutMissingExternalIds;
-(BOOL)isEqualToEvent:(id)arg0 ;
-(BOOL)loadCalRecordForAccount:(id)arg0 ;
-(BOOL)loadLocalItemWithAccount:(id)arg0 ;
-(BOOL)purgeAttendeesPendingDeletion;
-(BOOL)saveDetachedEventsWithExistingRecord:(*void)arg0 intoCalendar:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(BOOL)saveServerIDAndUidToCalendar;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)saveToCalendarWithExistingRecord:(*void)arg0 intoCalendar:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(BOOL)saveWithLocalObject:(*void)arg0 toContainer:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(BOOL)shouldUseInMemoryAttendeesForAccount:(id)arg0 numExistingAttendees:(NSUInteger)arg1 ;
-(BOOL)verifyExternalIds;
-(NSInteger)dataclass;
-(id)_attachmentFromAttachmentRef:(*void)arg0 ;
-(id)_transformedEndDateForActiveSync:(id)arg0 isFloating:(BOOL)arg1 ;
-(id)_transformedEndDateForCalFramework:(id)arg0 startDate:(id)arg1 ;
-(id)_transformedStartDateForActiveSync:(id)arg0 isFloating:(BOOL)arg1 ;
-(id)_transformedStartDateForCalFramework:(id)arg0 ;
-(id)eventByMergingInEvent:(id)arg0 account:(id)arg1 ;
-(id)eventByMergingInLosingEvent:(id)arg0 account:(id)arg1 ;
-(id)fullOrganizerString;
-(id)init;
-(id)initWithCalEvent:(*void)arg0 serverID:(id)arg1 account:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)uidGeneratedIfNecessaryWithLocalEvent:(*void)arg0 ;
-(int)_meetingResponseShouldUseEmail:(BOOL)arg0 shouldFilterForEmail:(BOOL)arg1 ;
-(int)_nextAttendeeStatusWithOldStatus:(int)arg0 account:(id)arg1 ;
-(int)_nextAttendeeStatusWithOldStatus:(int)arg0 meetingClassType:(int)arg1 account:(id)arg2 ;
-(int)_nextEventStatusWithOldStatus:(int)arg0 account:(id)arg1 ;
-(int)_nextEventStatusWithOldStatus:(int)arg0 meetingClassType:(int)arg1 account:(id)arg2 ;
-(int)meetingResponseForAccount:(id)arg0 ;
-(int)selfAttendeeMeetingResponse;
-(void)_determineSelfnessWithLocalEvent:(*void)arg0 forAccount:(id)arg1 ;
-(void)_loadAttachmentsChangesForEvent:(*void)arg0 ;
-(void)_loadAttributesFromCalEvent:(*void)arg0 forAccount:(id)arg1 ;
-(void)_sanitizeLocalExceptionsForAccount:(id)arg0 ;
-(void)appendActiveSyncDataForTask:(id)arg0 toWBXMLData:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)informExceptionsThatParentIsReadyForAccount:(id)arg0 ;
-(void)loadClientIDs;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;
-(void)postProcessApplicationData;
-(void)setLocalItem:(*void)arg0 ;
-(void)updateAttachmentsFromServerResponse;


@end


#endif