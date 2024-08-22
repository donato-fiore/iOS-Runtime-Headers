// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUMUTABLECONVERSATION_H
#define TUMUTABLECONVERSATION_H

@class NSSet, NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "TUConversation.h"
#import "TUHandle.h"
#import "TUConversationLink.h"
#import "TUConversationMember.h"
#import "TUConversationReport.h"

@interface TUMutableConversation : TUConversation

@property (copy, nonatomic) NSSet *activeRemoteParticipants;
@property (copy, nonatomic) NSSet *activitySessions;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (copy, nonatomic) NSString *avcSessionIdentifier;
@property (nonatomic) NSInteger avcSessionToken;
@property (nonatomic, getter=isBackedByGroupSession) BOOL backedByGroupSession;
@property (nonatomic, getter=hasJoined) BOOL hasJoined;
@property (retain, nonatomic) TUHandle *initiator;
@property (copy, nonatomic) NSSet *invitationPreferences;
@property (nonatomic) NSInteger letMeInRequestState;
@property (copy, nonatomic) NSSet *lightweightMembers;
@property (retain, nonatomic) TUConversationLink *link;
@property (retain, nonatomic) TUConversationMember *localMember;
@property (nonatomic) NSUInteger localParticipantIdentifier;
@property (nonatomic, getter=isLocallyCreated) BOOL locallyCreated;
@property (nonatomic) NSInteger maxVideoDecodesAllowed;
@property (copy, nonatomic) NSString *messagesGroupName;
@property (retain, nonatomic) NSUUID *messagesGroupUUID;
@property (nonatomic, getter=isOneToOneModeEnabled) BOOL oneToOneModeEnabled;
@property (copy, nonatomic) NSSet *participantHandles;
@property (copy, nonatomic) NSSet *pendingMembers;
@property (copy, nonatomic) NSSet *rejectedMembers;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (copy, nonatomic) TUConversationReport *report;
@property (retain, nonatomic) NSObject *reportingHierarchySubToken;
@property (retain, nonatomic) NSObject *reportingHierarchyToken;
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled;
@property (nonatomic) NSInteger state;
@property (nonatomic, getter=isVideo) BOOL video;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (copy, nonatomic) NSSet *virtualParticipants;




@end


#endif