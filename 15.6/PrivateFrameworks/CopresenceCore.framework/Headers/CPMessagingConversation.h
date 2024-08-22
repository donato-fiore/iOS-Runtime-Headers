// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPMESSAGINGCONVERSATION_H
#define CPMESSAGINGCONVERSATION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "CPMessagingHandle.h"
#import "CPMessagingConversationMember.h"
#import "CPMessagingConversationReport.h"

@interface CPMessagingConversation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *activeRemoteParticipants; // ivar: _activeRemoteParticipants
@property (retain, nonatomic) NSMutableArray *activitySessions; // ivar: _activitySessions
@property (retain, nonatomic) NSString *conversationProviderIdentifier; // ivar: _conversationProviderIdentifier
@property (retain, nonatomic) NSString *groupUUIDString; // ivar: _groupUUIDString
@property (readonly, nonatomic) BOOL hasConversationProviderIdentifier;
@property (readonly, nonatomic) BOOL hasGroupUUIDString;
@property (readonly, nonatomic) BOOL hasInitiator;
@property (readonly, nonatomic) BOOL hasLocalMember;
@property (nonatomic) BOOL hasLocallyCreated;
@property (readonly, nonatomic) BOOL hasMessagesGroupUUIDString;
@property (readonly, nonatomic) BOOL hasReportData;
@property (readonly, nonatomic) BOOL hasUUIDString;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) CPMessagingHandle *initiator; // ivar: _initiator
@property (retain, nonatomic) CPMessagingConversationMember *localMember; // ivar: _localMember
@property (nonatomic) BOOL locallyCreated; // ivar: _locallyCreated
@property (retain, nonatomic) NSString *messagesGroupUUIDString; // ivar: _messagesGroupUUIDString
@property (retain, nonatomic) NSMutableArray *remoteMembers; // ivar: _remoteMembers
@property (retain, nonatomic) CPMessagingConversationReport *reportData; // ivar: _reportData
@property (retain, nonatomic) NSString *uUIDString; // ivar: _uUIDString
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeRemoteParticipantsAtIndex:(NSUInteger)arg0 ;
-(id)activitySessionsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)remoteMembersAtIndex:(NSUInteger)arg0 ;
-(void)addActiveRemoteParticipants:(id)arg0 ;
-(void)addActivitySessions:(id)arg0 ;
-(void)addRemoteMembers:(id)arg0 ;
-(void)clearActiveRemoteParticipants;
-(void)clearActivitySessions;
-(void)clearRemoteMembers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif