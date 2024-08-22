// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASPROTOCOL_H
#define ASPROTOCOL_H


#import <Foundation/Foundation.h>

#import "ASProtocolCapabilities.h"

@interface ASProtocol : NSObject

@property (retain, nonatomic) ASProtocolCapabilities *capabilities; // ivar: _capabilities


-(BOOL)allAttachmentsAreBase64ed;
-(BOOL)allowsReminderOnCompletedTasks;
-(BOOL)alwaysSendAttendeeRole;
-(BOOL)alwaysSendTimezone;
-(BOOL)commandStringNeedsSaveInSent;
-(BOOL)fetchAttachmentsWithItemOperations;
-(BOOL)headerNeedsPolicyKey;
-(BOOL)headerNeedsProtocolVersion;
-(BOOL)headerNeedsUserAgent;
-(BOOL)includeCommentInMeetingResponse;
-(BOOL)includeExceptionsInParent;
-(BOOL)processFullMeetingInvitationData;
-(BOOL)requiresExplicitlyFalseGetChanges;
-(BOOL)sendAttendeeRole;
-(BOOL)sendCalendarInfoInRecurrence;
-(BOOL)sendDTStamp;
-(BOOL)sendDeviceInfoOnProvision;
-(BOOL)sendEmailForMeetingInvitationAndResponse;
-(BOOL)sendEmailInWBXML;
-(BOOL)sendFirstDayOfWeekInRecurrence;
-(BOOL)sendUID;
-(BOOL)sendUserAgentInDeviceInfo;
-(BOOL)serverCreatesEventChangesForInvitations;
-(BOOL)serverUpdatesAttendeeStatusOnEvents;
-(BOOL)shouldSendClassForFolderItemsSync;
-(BOOL)shouldSendFullContactInfo;
-(BOOL)shouldUseWBXMLProvisioning;
-(BOOL)supportsAttachments;
-(BOOL)supportsAttendeesInExceptions;
-(BOOL)supportsForwarderTracking;
-(BOOL)supportsFreeBusyLookup;
-(BOOL)supportsGALPhotos;
-(BOOL)supportsItemOperationsCommand;
-(BOOL)supportsNoteSyncing;
-(BOOL)supportsProposeNewTime;
-(BOOL)supportsSettingsCommand;
-(BOOL)syncSnoozeEvents;
-(BOOL)useBooleanFolderItemsSyncDeletesAsMoves;
-(BOOL)useEmptyAttendees;
-(BOOL)useEmptyLocation;
-(BOOL)useEmptyRecurrence;
-(BOOL)useEmptyReminderMinutes;
-(BOOL)useEventIdsInMeetingResponse;
-(BOOL)useFloatingTimeForAllDayEvents;
-(BOOL)useInstanceIdForException;
-(BOOL)useSmartMailTasks;
-(BOOL)useStructuredLocation;
-(BOOL)usesAirSyncBaseNamespace;
-(BOOL)usesTopLevelStatusCodes;
-(BOOL)versionChangeRequiresAccountUpgrade:(id)arg0 ;
-(id)_initWithVersion:(id)arg0 capabilitiesVersion:(id)arg1 ;
-(id)_requestLinePrefixWithTask:(id)arg0 ;
-(id)_usernameOnlyPortionOfUserString:(id)arg0 ;
-(id)addressBookConstraintsPath;
-(id)calendarConstraintsPath;
-(id)init;
-(id)initWithCachedVersion:(id)arg0 ;
-(id)initWithVersion:(id)arg0 ;
-(id)protocolVersion;
-(id)requestURLStringWithTask:(id)arg0 ;
-(int)supportsConversations;
-(int)supportsDraftFolderSync;
-(int)supportsEmailFlagging;
-(int)supportsMailboxEnhancedSearch;
-(int)supportsMailboxSearch;
-(int)supportsUniqueServerId;


@end


#endif