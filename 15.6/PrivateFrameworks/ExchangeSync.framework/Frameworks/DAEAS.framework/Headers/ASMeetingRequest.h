// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASMEETINGREQUEST_H
#define ASMEETINGREQUEST_H

@class NSString, NSDate, NSArray, NSNumber, NSMutableDictionary;
@protocol ASParsingAcceptingTopLevelLeaves, NSSecureCoding;


#import "ASEvent.h"
#import "ASEmailItem.h"

@interface ASMeetingRequest : ASEvent <ASParsingAcceptingTopLevelLeaves, NSSecureCoding>



@property (retain, nonatomic) NSString *cachedParentFolderId; // ivar: _cachedParentFolderId
@property (retain, nonatomic) NSString *cachedParentServerId; // ivar: _cachedParentServerId
@property (retain, nonatomic) NSDate *dateReceived; // ivar: _dateReceived
@property (retain, nonatomic) NSArray *forwardees; // ivar: _forwardees
@property (retain, nonatomic) NSNumber *instanceType; // ivar: _instanceType
@property (nonatomic) int meetingClassType; // ivar: _meetingClassType
@property (nonatomic) int meetingMessageType; // ivar: _meetingMessageType
@property (weak, nonatomic) ASEmailItem *parentEmailItem; // ivar: _parentEmailItem
@property (retain, nonatomic) NSMutableDictionary *placeHolder; // ivar: _placeHolder
@property (retain, nonatomic) NSDate *recurrenceId; // ivar: _recurrenceId
@property (retain, nonatomic) NSString *sender; // ivar: _sender


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)supportsSecureCoding;
+(id)asParseRules;
-(BOOL)_bailIfNotNewestDataForAccount:(id)arg0 ;
-(BOOL)cachedOrganizerIsSelfWithAccount:(id)arg0 ;
-(BOOL)saveEmailServerIdToCalendarWithExistingRecord:(*void)arg0 intoCalendar:(*void)arg1 account:(id)arg2 ;
-(BOOL)saveForwardeesToCalendarWithExistingRecord:(*void)arg0 ;
-(BOOL)saveResponseCommentToCalendarWithExistingRecord:(*void)arg0 ;
-(BOOL)saveToCalendarWithExistingRecord:(*void)arg0 intoCalendar:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(BOOL)shouldUseInMemoryAttendeesForAccount:(id)arg0 numExistingAttendees:(NSUInteger)arg1 ;
-(BOOL)writeInviteToCalDBCreateAsRejected:(BOOL)arg0 defaultCalendar:(*void)arg1 account:(id)arg2 ;
-(id)description;
-(id)exceptionDate;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)unactionableICSRepresentationForAccount:(id)arg0 ;
-(void)_determineSelfnessWithLocalEvent:(*void)arg0 forAccount:(id)arg1 ;
-(void)_setReminderSecsBefore:(id)arg0 ;
-(void)applyPlaceHolder;
-(void)clearPlaceHolder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;
-(void)postProcessApplicationData;
-(void)saveEmailServerIdAndUpdateNotificationToRecord:(*void)arg0 account:(id)arg1 ;
-(void)setDTStamp:(id)arg0 ;
-(void)setExceptionDate:(id)arg0 ;
-(void)setObject:(id)arg0 forDCCPT:(int)arg1 ;
-(void)setOrganizer:(id)arg0 ;
-(void)takeValuesFromParentEmailForAccount:(id)arg0 ;


@end


#endif