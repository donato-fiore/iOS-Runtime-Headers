// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXJOINCALLACTION_H
#define CXJOINCALLACTION_H

@class NSString, NSNumber, NSDate, NSUUID, NSDictionary, NSSet, NSData;


#import "CXCallAction.h"
#import "CXHandle.h"
#import "CXJoinCallActivity.h"

@interface CXJoinCallAction : CXCallAction

@property (copy, nonatomic) NSString *associationAVCIdentifier; // ivar: _associationAVCIdentifier
@property (copy, nonatomic) NSNumber *associationIdentifier; // ivar: _associationIdentifier
@property (nonatomic) NSUInteger avMode; // ivar: _avMode
@property (copy, nonatomic) CXHandle *callerID; // ivar: _callerID
@property (copy, nonatomic) NSString *collaborationIdentifier; // ivar: _collaborationIdentifier
@property (copy, nonatomic) NSString *conversationProviderIdentifier; // ivar: _conversationProviderIdentifier
@property (copy, nonatomic) NSDate *dateStarted; // ivar: _dateStarted
@property (copy, nonatomic) NSUUID *groupUUID; // ivar: _groupUUID
@property (copy, nonatomic) CXJoinCallActivity *joinCallActivity; // ivar: _joinCallActivity
@property (nonatomic, getter=isJoiningConversationWithLink) BOOL joiningConversationWithLink; // ivar: _joiningConversationWithLink
@property (nonatomic, getter=isLetMeIn) BOOL letMeIn; // ivar: _letMeIn
@property (copy, nonatomic) NSString *messagesGroupName; // ivar: _messagesGroupName
@property (copy, nonatomic) NSUUID *messagesGroupUUID; // ivar: _messagesGroupUUID
@property (copy, nonatomic) NSDictionary *notificationStylesByHandleType; // ivar: _notificationStylesByHandleType
@property (copy, nonatomic) NSSet *otherInvitedHandles; // ivar: _otherInvitedHandles
@property (copy, nonatomic) NSString *pseudonym; // ivar: _pseudonym
@property (copy, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (nonatomic, getter=isRelay) BOOL relay; // ivar: _relay
@property (copy, nonatomic) NSSet *remoteMembers; // ivar: _remoteMembers
@property (copy, nonatomic) NSSet *remotePushTokens; // ivar: _remotePushTokens
@property (nonatomic) BOOL shouldSuppressInCallUI; // ivar: _shouldSuppressInCallUI
@property (nonatomic, getter=isUpgrade) BOOL upgrade; // ivar: _upgrade
@property (copy, nonatomic) NSUUID *upgradeSessionUUID; // ivar: _upgradeSessionUUID
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted; // ivar: _uplinkMuted
@property (nonatomic, getter=isVideo) BOOL video; // ivar: _video
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // ivar: _videoEnabled
@property (nonatomic) BOOL wantsStagingArea; // ivar: _wantsStagingArea


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCallUUID:(id)arg0 groupUUID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fulfill;
-(void)fulfillWithDateStarted:(id)arg0 ;
-(void)updateAsFulfilledWithDateStarted:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif