// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKPROTOATTACHMENTSYNC_H
#define NNMKPROTOATTACHMENTSYNC_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface NNMKProtoAttachmentSync : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *attachmentData; // ivar: _attachmentData
@property (retain, nonatomic) NSString *contentId; // ivar: _contentId
@property (retain, nonatomic) NSData *dateSynced; // ivar: _dateSynced
@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (readonly, nonatomic) BOOL hasAttachmentData;
@property (readonly, nonatomic) BOOL hasContentId;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (readonly, nonatomic) BOOL hasMessageId;
@property (retain, nonatomic) NSString *mailboxId; // ivar: _mailboxId
@property (retain, nonatomic) NSString *messageId; // ivar: _messageId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif