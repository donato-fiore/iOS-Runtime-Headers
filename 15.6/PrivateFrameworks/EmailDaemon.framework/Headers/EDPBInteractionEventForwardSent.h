// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPBINTERACTIONEVENTFORWARDSENT_H
#define EDPBINTERACTIONEVENTFORWARDSENT_H

@class PBCodable;
@protocol EDPBDataSetters, EDPBBaseMessageFields, NSCopying;



@interface EDPBInteractionEventForwardSent : PBCodable <EDPBDataSetters, EDPBBaseMessageFields, NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger accountId;
@property (nonatomic) NSInteger accountId; // ivar: _accountId
@property (nonatomic) NSInteger conversationId;
@property (nonatomic) NSInteger conversationId; // ivar: _conversationId
@property (nonatomic) BOOL hasAccountId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) BOOL hasMailboxId;
@property (nonatomic) BOOL hasMailboxType;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) NSInteger mailboxId;
@property (nonatomic) NSInteger mailboxId; // ivar: _mailboxId
@property (nonatomic) int mailboxType;
@property (nonatomic) int mailboxType; // ivar: _mailboxType
@property (nonatomic) NSInteger messageId;
@property (nonatomic) NSInteger messageId; // ivar: _messageId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mailboxTypeAsString:(int)arg0 ;
-(int)StringAsMailboxType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)withHasher:(id)arg0 setMessage:(id)arg1 data:(id)arg2 ;
-(void)writeTo:(id)arg0 ;


@end


#endif