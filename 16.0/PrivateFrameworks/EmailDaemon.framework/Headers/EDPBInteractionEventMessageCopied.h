// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDPBINTERACTIONEVENTMESSAGECOPIED_H
#define EDPBINTERACTIONEVENTMESSAGECOPIED_H

@class PBCodable;
@protocol EDPBDataSetters, NSCopying;



@interface EDPBInteractionEventMessageCopied : PBCodable <EDPBDataSetters, NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger accountId; // ivar: _accountId
@property (nonatomic) NSInteger conversationId; // ivar: _conversationId
@property (nonatomic) NSInteger fromMailboxId; // ivar: _fromMailboxId
@property (nonatomic) int fromMailboxType; // ivar: _fromMailboxType
@property (nonatomic) BOOL hasAccountId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) BOOL hasFromMailboxId;
@property (nonatomic) BOOL hasFromMailboxType;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) BOOL hasToMailboxId;
@property (nonatomic) BOOL hasToMailboxType;
@property (nonatomic) NSInteger messageId; // ivar: _messageId
@property (nonatomic) NSInteger toMailboxId; // ivar: _toMailboxId
@property (nonatomic) int toMailboxType; // ivar: _toMailboxType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fromMailboxTypeAsString:(int)arg0 ;
-(id)toMailboxTypeAsString:(int)arg0 ;
-(int)StringAsFromMailboxType:(id)arg0 ;
-(int)StringAsToMailboxType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)withHasher:(id)arg0 setMessage:(id)arg1 mailbox:(id)arg2 ;
-(void)writeTo:(id)arg0 ;


@end


#endif