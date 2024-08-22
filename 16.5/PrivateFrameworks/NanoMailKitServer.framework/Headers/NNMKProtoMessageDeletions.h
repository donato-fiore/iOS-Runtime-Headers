// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKPROTOMESSAGEDELETIONS_H
#define NNMKPROTOMESSAGEDELETIONS_H

@class PBCodable, NSData, NSString, NSMutableArray;
@protocol NSCopying;



@interface NNMKProtoMessageDeletions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *dateSynced; // ivar: _dateSynced
@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (nonatomic) BOOL hasMailboxSyncVersion;
@property (retain, nonatomic) NSString *mailboxId; // ivar: _mailboxId
@property (nonatomic) unsigned int mailboxSyncVersion; // ivar: _mailboxSyncVersion
@property (retain, nonatomic) NSMutableArray *messageDeletions; // ivar: _messageDeletions


+(Class)messageDeletionType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)messageDeletionAtIndex:(NSUInteger)arg0 ;
-(void)addMessageDeletion:(id)arg0 ;
-(void)clearMessageDeletions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif