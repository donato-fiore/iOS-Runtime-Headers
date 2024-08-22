// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKPROTOMESSAGESFILTEREDOUTWARNING_H
#define NNMKPROTOMESSAGESFILTEREDOUTWARNING_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NNMKProtoMessagesFilteredOutWarning : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (nonatomic) BOOL hasFullSyncVersion;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId; // ivar: _mailboxId
@property (retain, nonatomic) NSMutableArray *removedMessageIds; // ivar: _removedMessageIds


+(Class)removedMessageIdType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)removedMessageIdAtIndex:(NSUInteger)arg0 ;
-(void)addRemovedMessageId:(id)arg0 ;
-(void)clearRemovedMessageIds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif