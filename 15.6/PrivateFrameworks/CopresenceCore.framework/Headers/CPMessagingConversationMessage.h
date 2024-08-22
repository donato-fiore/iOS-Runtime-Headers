// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPMESSAGINGCONVERSATIONMESSAGE_H
#define CPMESSAGINGCONVERSATIONMESSAGE_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;


#import "CPMessagingConversationReport.h"

@interface CPMessagingConversationMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *activeParticipants; // ivar: _activeParticipants
@property (retain, nonatomic) NSMutableArray *activitySessions; // ivar: _activitySessions
@property (retain, nonatomic) NSMutableArray *addedMembers; // ivar: _addedMembers
@property (retain, nonatomic) NSString *conversationGroupUUIDString; // ivar: _conversationGroupUUIDString
@property (retain, nonatomic) NSData *customMessageData; // ivar: _customMessageData
@property (nonatomic) unsigned int customType; // ivar: _customType
@property (nonatomic) unsigned int disconnectedReason; // ivar: _disconnectedReason
@property (readonly, nonatomic) BOOL hasConversationGroupUUIDString;
@property (readonly, nonatomic) BOOL hasCustomMessageData;
@property (nonatomic) BOOL hasCustomType;
@property (nonatomic) BOOL hasDisconnectedReason;
@property (readonly, nonatomic) BOOL hasReportData;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUnicastConnectorBlob;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) CPMessagingConversationReport *reportData; // ivar: _reportData
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) NSData *unicastConnectorBlob; // ivar: _unicastConnectorBlob
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeParticipantsAtIndex:(NSUInteger)arg0 ;
-(id)activitySessionsAtIndex:(NSUInteger)arg0 ;
-(id)addedMembersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addActiveParticipants:(id)arg0 ;
-(void)addActivitySessions:(id)arg0 ;
-(void)addAddedMembers:(id)arg0 ;
-(void)clearActiveParticipants;
-(void)clearActivitySessions;
-(void)clearAddedMembers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif