// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKPROTOINITIALMESSAGESSYNC_H
#define NNMKPROTOINITIALMESSAGESSYNC_H

@class PBCodable, NSData, NSMutableArray, NSString;
@protocol NSCopying;


#import "NNMKProtoMailbox.h"

@interface NNMKProtoInitialMessagesSync : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *dateForRequestingMoreMessages; // ivar: _dateForRequestingMoreMessages
@property (retain, nonatomic) NSData *dateSynced; // ivar: _dateSynced
@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (readonly, nonatomic) BOOL hasDateForRequestingMoreMessages;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (readonly, nonatomic) BOOL hasMailbox;
@property (nonatomic) BOOL hasMailboxSyncVersion;
@property (nonatomic) BOOL hasOrganizedByThread;
@property (readonly, nonatomic) BOOL hasSyncedMailboxAccountId;
@property (readonly, nonatomic) BOOL hasSyncedMailboxCustomName;
@property (nonatomic) BOOL hasSyncedMailboxType;
@property (readonly, nonatomic) BOOL hasSyncedMailboxURL;
@property (retain, nonatomic) NSMutableArray *initialMessages; // ivar: _initialMessages
@property (retain, nonatomic) NNMKProtoMailbox *mailbox; // ivar: _mailbox
@property (nonatomic) unsigned int mailboxSyncVersion; // ivar: _mailboxSyncVersion
@property (nonatomic) BOOL organizedByThread; // ivar: _organizedByThread
@property (retain, nonatomic) NSString *syncedMailboxAccountId; // ivar: _syncedMailboxAccountId
@property (retain, nonatomic) NSString *syncedMailboxCustomName; // ivar: _syncedMailboxCustomName
@property (nonatomic) unsigned int syncedMailboxType; // ivar: _syncedMailboxType
@property (retain, nonatomic) NSString *syncedMailboxURL; // ivar: _syncedMailboxURL


+(Class)initialMessageType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initialMessageAtIndex:(NSUInteger)arg0 ;
-(void)addInitialMessage:(id)arg0 ;
-(void)clearInitialMessages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif