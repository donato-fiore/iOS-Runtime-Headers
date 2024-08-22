// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPMESSAGINGCONVERSATIONPARTICIPANTDIDJOINCONTEXT_H
#define CPMESSAGINGCONVERSATIONPARTICIPANTDIDJOINCONTEXT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "CPMessagingConversationActivitySession.h"
#import "CPMessagingConversationMessage.h"

@interface CPMessagingConversationParticipantDidJoinContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CPMessagingConversationActivitySession *activitySession; // ivar: _activitySession
@property (readonly, nonatomic) BOOL hasActivitySession;
@property (nonatomic) BOOL hasIsMirageAvailable;
@property (readonly, nonatomic) BOOL hasMessage;
@property (readonly, nonatomic) BOOL hasMessagesGroupName;
@property (readonly, nonatomic) BOOL hasMessagesGroupUUIDString;
@property (readonly, nonatomic) BOOL hasProviderIdentifier;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) BOOL hasVideo;
@property (nonatomic) BOOL isMirageAvailable; // ivar: _isMirageAvailable
@property (retain, nonatomic) NSMutableArray *members; // ivar: _members
@property (retain, nonatomic) CPMessagingConversationMessage *message; // ivar: _message
@property (retain, nonatomic) NSString *messagesGroupName; // ivar: _messagesGroupName
@property (retain, nonatomic) NSString *messagesGroupUUIDString; // ivar: _messagesGroupUUIDString
@property (retain, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (nonatomic) unsigned int version; // ivar: _version
@property (nonatomic) BOOL video; // ivar: _video


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)membersAtIndex:(NSUInteger)arg0 ;
-(void)addMembers:(id)arg0 ;
-(void)clearMembers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif