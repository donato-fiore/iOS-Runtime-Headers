// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKPROTOMOREMESSAGESFORCONVERSATION_H
#define NNMKPROTOMOREMESSAGESFORCONVERSATION_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;



@interface NNMKProtoMoreMessagesForConversation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *addedMessages; // ivar: _addedMessages
@property (retain, nonatomic) NSString *conversationId; // ivar: _conversationId
@property (retain, nonatomic) NSData *dateSynced; // ivar: _dateSynced
@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (readonly, nonatomic) BOOL hasConversationId;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (nonatomic) BOOL hasMailboxSyncVersion;
@property (retain, nonatomic) NSString *mailboxId; // ivar: _mailboxId
@property (nonatomic) unsigned int mailboxSyncVersion; // ivar: _mailboxSyncVersion


+(Class)addedMessageType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)addedMessageAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAddedMessage:(id)arg0 ;
-(void)clearAddedMessages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif