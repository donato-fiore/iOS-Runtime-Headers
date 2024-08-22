// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKPROTOBATCHEDFETCHRESULT_H
#define NNMKPROTOBATCHEDFETCHRESULT_H

@class PBCodable, NSData, NSString, NSMutableArray;
@protocol NSCopying;



@interface NNMKProtoBatchedFetchResult : PBCodable <NSCopying>

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
@property (nonatomic) BOOL hasShouldTrimDatabase;
@property (retain, nonatomic) NSString *mailboxId; // ivar: _mailboxId
@property (nonatomic) unsigned int mailboxSyncVersion; // ivar: _mailboxSyncVersion
@property (retain, nonatomic) NSMutableArray *messageAdditions; // ivar: _messageAdditions
@property (retain, nonatomic) NSMutableArray *messageDeletions; // ivar: _messageDeletions
@property (retain, nonatomic) NSMutableArray *messageUpdates; // ivar: _messageUpdates
@property (nonatomic) BOOL shouldTrimDatabase; // ivar: _shouldTrimDatabase


+(Class)messageAdditionType;
+(Class)messageDeletionType;
+(Class)messageUpdateType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)messageAdditionAtIndex:(NSUInteger)arg0 ;
-(id)messageDeletionAtIndex:(NSUInteger)arg0 ;
-(id)messageUpdateAtIndex:(NSUInteger)arg0 ;
-(void)addMessageAddition:(id)arg0 ;
-(void)addMessageDeletion:(id)arg0 ;
-(void)addMessageUpdate:(id)arg0 ;
-(void)clearMessageAdditions;
-(void)clearMessageDeletions;
-(void)clearMessageUpdates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif