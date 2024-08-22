// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKPROTOMESSAGEADDITIONS_H
#define NNMKPROTOMESSAGEADDITIONS_H

@class PBCodable, NSData, NSString, NSMutableArray;
@protocol NSCopying;



@interface NNMKProtoMessageAdditions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *dateForRequestingMoreMessages; // ivar: _dateForRequestingMoreMessages
@property (retain, nonatomic) NSData *dateSynced; // ivar: _dateSynced
@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (readonly, nonatomic) BOOL hasDateForRequestingMoreMessages;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (nonatomic) BOOL hasMailboxSyncVersion;
@property (nonatomic) BOOL hasMessagesAreNew;
@property (retain, nonatomic) NSString *mailboxId; // ivar: _mailboxId
@property (nonatomic) unsigned int mailboxSyncVersion; // ivar: _mailboxSyncVersion
@property (retain, nonatomic) NSMutableArray *messageAdditions; // ivar: _messageAdditions
@property (nonatomic) BOOL messagesAreNew; // ivar: _messagesAreNew


+(Class)messageAdditionType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)messageAdditionAtIndex:(NSUInteger)arg0 ;
-(void)addMessageAddition:(id)arg0 ;
-(void)clearMessageAdditions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif