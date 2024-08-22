// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUCONVERSATION_H
#define TUCONVERSATION_H

@class NSUUID, NSSet, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUContactsDataProvider.h"
#import "TUHandle.h"
#import "TUConversationLink.h"
#import "TUConversationMember.h"
#import "TUConversationProvider.h"
#import "TUConversationReport.h"

@interface TUConversation : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) NSSet *activeLightweightParticipants; // ivar: _activeLightweightParticipants
@property (copy, nonatomic) NSSet *activeRemoteParticipants; // ivar: _activeRemoteParticipants
@property (copy, nonatomic) NSSet *activitySessions; // ivar: _activitySessions
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // ivar: _audioEnabled
@property (readonly, nonatomic) NSUInteger avMode;
@property (copy, nonatomic) NSString *avcSessionIdentifier; // ivar: _avcSessionIdentifier
@property (nonatomic) NSInteger avcSessionToken; // ivar: _avcSessionToken
@property (nonatomic, getter=isBackedByGroupSession) BOOL backedByGroupSession; // ivar: _backedByGroupSession
@property (readonly, nonatomic) TUContactsDataProvider *contactsDataProvider; // ivar: _contactsDataProvider
@property (nonatomic, getter=isFromStorage) BOOL fromStorage; // ivar: _fromStorage
@property (retain, nonatomic) NSUUID *groupUUID; // ivar: _groupUUID
@property (nonatomic, getter=hasJoined) BOOL hasJoined; // ivar: _hasJoined
@property (nonatomic) BOOL hasReceivedLetMeInRequest; // ivar: _hasReceivedLetMeInRequest
@property (nonatomic) BOOL ignoreLMIRequests; // ivar: _ignoreLMIRequests
@property (retain, nonatomic) TUHandle *initiator; // ivar: _initiator
@property (copy, nonatomic) NSSet *invitationPreferences; // ivar: _invitationPreferences
@property (nonatomic) BOOL isAnyOtherAccountDeviceActive; // ivar: _isAnyOtherAccountDeviceActive
@property (copy, nonatomic) NSSet *kickedMembers; // ivar: _kickedMembers
@property (nonatomic) NSInteger letMeInRequestState; // ivar: _letMeInRequestState
@property (copy, nonatomic) NSSet *lightweightMembers; // ivar: _lightweightMembers
@property (retain, nonatomic) TUConversationLink *link; // ivar: _link
@property (retain, nonatomic) TUConversationMember *localMember; // ivar: _localMember
@property (nonatomic) NSUInteger localParticipantIdentifier; // ivar: _localParticipantIdentifier
@property (nonatomic, getter=isLocallyCreated) BOOL locallyCreated; // ivar: _locallyCreated
@property (nonatomic) NSInteger maxVideoDecodesAllowed; // ivar: _maxVideoDecodesAllowed
@property (copy, nonatomic) NSString *messagesGroupName; // ivar: _messagesGroupName
@property (retain, nonatomic) NSUUID *messagesGroupUUID; // ivar: _messagesGroupUUID
@property (nonatomic, getter=isOneToOneModeEnabled) BOOL oneToOneModeEnabled; // ivar: _oneToOneModeEnabled
@property (copy, nonatomic) NSSet *otherInvitedHandles; // ivar: _otherInvitedHandles
@property (copy, nonatomic) NSSet *participantHandles; // ivar: _participantHandles
@property (nonatomic, getter=isPendingConversation) BOOL pendingConversation; // ivar: _pendingConversation
@property (copy, nonatomic) NSSet *pendingMembers; // ivar: _pendingMembers
@property (readonly, nonatomic) TUConversationProvider *provider; // ivar: _provider
@property (copy, nonatomic) NSSet *rejectedMembers; // ivar: _rejectedMembers
@property (copy, nonatomic) NSSet *remoteMembers; // ivar: _remoteMembers
@property (copy, nonatomic) TUConversationReport *report; // ivar: _report
@property (retain, nonatomic) NSObject *reportingHierarchySubToken; // ivar: _reportingHierarchySubToken
@property (retain, nonatomic) NSObject *reportingHierarchyToken; // ivar: _reportingHierarchyToken
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled; // ivar: _screenEnabled
@property (retain, nonatomic) NSUUID *selectiveSharingSessionUUID; // ivar: _selectiveSharingSessionUUID
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic, getter=isVideo) BOOL video; // ivar: _video
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // ivar: _videoEnabled
@property (copy, nonatomic) NSSet *virtualParticipants; // ivar: _virtualParticipants


+(BOOL)supportsSecureCoding;
+(id)emptyConversationWithGroupUUID:(id)arg0 ;
+(id)numberFormatter;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversation:(id)arg0 ;
-(BOOL)isRepresentedByRemoteMembers:(id)arg0 andLink:(id)arg1 ;
-(BOOL)shouldShowInvitationOfStyles:(NSInteger)arg0 forHandle:(id)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)shouldShowInvitationRingingUIForHandle:(id)arg0 ;
-(BOOL)shouldShowInvitationUserNotificationForHandle:(id)arg0 ;
-(NSUInteger)hash;
-(id)bundleIdentifier;
-(id)contactNamesByHandleWithContactsDataSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayName;
-(id)handles;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversation:(id)arg0 ;
-(id)initWithUUID:(id)arg0 groupUUID:(id)arg1 ;
-(id)initWithUUID:(id)arg0 groupUUID:(id)arg1 provider:(id)arg2 ;
-(id)messagesGroupPhotoData;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif