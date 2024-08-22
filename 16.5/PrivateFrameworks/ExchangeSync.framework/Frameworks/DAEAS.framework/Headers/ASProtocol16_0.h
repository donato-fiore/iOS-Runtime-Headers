// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASPROTOCOL16_0_H
#define ASPROTOCOL16_0_H

@class 1;



@interface ASProtocol16_0 : 1



-(BOOL)alwaysSendAttendeeRole;
-(BOOL)includeCommentInMeetingResponse;
-(BOOL)includeExceptionsInParent;
-(BOOL)processFullMeetingInvitationData;
-(BOOL)sendDTStamp;
-(BOOL)sendEmailForMeetingInvitationAndResponse;
-(BOOL)sendUID;
-(BOOL)supportsAttachments;
-(BOOL)syncSnoozeEvents;
-(BOOL)useEmptyAttendees;
-(BOOL)useEmptyLocation;
-(BOOL)useEmptyRecurrence;
-(BOOL)useEmptyReminderMinutes;
-(BOOL)useFloatingTimeForAllDayEvents;
-(BOOL)useInstanceIdForException;
-(BOOL)useStructuredLocation;
-(id)protocolVersion;
-(unsigned char)shortProtocolVersion;


@end


#endif