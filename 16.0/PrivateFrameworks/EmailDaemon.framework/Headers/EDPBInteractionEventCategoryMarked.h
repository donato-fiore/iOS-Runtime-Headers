// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDPBINTERACTIONEVENTCATEGORYMARKED_H
#define EDPBINTERACTIONEVENTCATEGORYMARKED_H

@class PBCodable;
@protocol EDPBDataSetters, EDPBBaseMessageFields, NSCopying;



@interface EDPBInteractionEventCategoryMarked : PBCodable <EDPBDataSetters, EDPBBaseMessageFields, NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger accountId;
@property (nonatomic) NSInteger accountId; // ivar: _accountId
@property (nonatomic) int categoryType; // ivar: _categoryType
@property (nonatomic) NSInteger conversationId;
@property (nonatomic) NSInteger conversationId; // ivar: _conversationId
@property (nonatomic) BOOL hasAccountId;
@property (nonatomic) BOOL hasCategoryType;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) BOOL hasMailboxId;
@property (nonatomic) BOOL hasMailboxType;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) BOOL hasPositive;
@property (nonatomic) BOOL hasRemoveAllUserOverrides;
@property (nonatomic) NSInteger mailboxId;
@property (nonatomic) NSInteger mailboxId; // ivar: _mailboxId
@property (nonatomic) int mailboxType;
@property (nonatomic) int mailboxType; // ivar: _mailboxType
@property (nonatomic) NSInteger messageId;
@property (nonatomic) NSInteger messageId; // ivar: _messageId
@property (nonatomic) BOOL positive; // ivar: _positive
@property (nonatomic) BOOL removeAllUserOverrides; // ivar: _removeAllUserOverrides


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categoryTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mailboxTypeAsString:(int)arg0 ;
-(int)StringAsCategoryType:(id)arg0 ;
-(int)StringAsMailboxType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)withHasher:(id)arg0 setMessage:(id)arg1 data:(id)arg2 ;
-(void)writeTo:(id)arg0 ;


@end


#endif