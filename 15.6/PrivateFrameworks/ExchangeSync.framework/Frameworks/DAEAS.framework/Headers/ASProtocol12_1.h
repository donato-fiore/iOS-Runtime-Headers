// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASPROTOCOL12_1_H
#define ASPROTOCOL12_1_H

@class 5;



@interface ASProtocol12_1 : 5



-(BOOL)allowsReminderOnCompletedTasks;
-(BOOL)requiresExplicitlyFalseGetChanges;
-(BOOL)sendAttendeeRole;
-(BOOL)serverCreatesEventChangesForInvitations;
-(BOOL)shouldSendClassForFolderItemsSync;
-(BOOL)shouldSendFullContactInfo;
-(BOOL)shouldUseWBXMLProvisioning;
-(BOOL)useBooleanFolderItemsSyncDeletesAsMoves;
-(BOOL)usesAirSyncBaseNamespace;
-(id)protocolVersion;


@end


#endif