// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASPROTOCOL14_0_H
#define ASPROTOCOL14_0_H

@class 1;



@interface ASProtocol14_0 : 1



-(BOOL)allAttachmentsAreBase64ed;
-(BOOL)alwaysSendTimezone;
-(BOOL)fetchAttachmentsWithItemOperations;
-(BOOL)processFullMeetingInvitationData;
-(BOOL)sendCalendarInfoInRecurrence;
-(BOOL)sendEmailInWBXML;
-(BOOL)sendUserAgentInDeviceInfo;
-(BOOL)supportsAttendeesInExceptions;
-(BOOL)useSmartMailTasks;
-(BOOL)usesTopLevelStatusCodes;
-(id)protocolVersion;
-(unsigned char)shortProtocolVersion;


@end


#endif