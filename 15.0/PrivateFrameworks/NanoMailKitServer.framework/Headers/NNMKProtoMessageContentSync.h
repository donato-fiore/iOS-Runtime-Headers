// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKPROTOMESSAGECONTENTSYNC_H
#define NNMKPROTOMESSAGECONTENTSYNC_H

@class PBCodable, NSMutableArray, NSData, NSString;
@protocol NSCopying;


#import "NNMKProtoMessage.h"

@interface NNMKProtoMessageContentSync : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *attachments; // ivar: _attachments
@property (retain, nonatomic) NSData *dateSynced; // ivar: _dateSynced
@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (readonly, nonatomic) BOOL hasHtmlContentData;
@property (nonatomic) BOOL hasMainAlternativeValid;
@property (readonly, nonatomic) BOOL hasMessageId;
@property (readonly, nonatomic) BOOL hasNotificationMessage;
@property (nonatomic) BOOL hasPartiallyLoaded;
@property (readonly, nonatomic) BOOL hasPreview;
@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) NSData *htmlContentData; // ivar: _htmlContentData
@property (nonatomic) BOOL mainAlternativeValid; // ivar: _mainAlternativeValid
@property (retain, nonatomic) NSString *messageId; // ivar: _messageId
@property (retain, nonatomic) NNMKProtoMessage *notificationMessage; // ivar: _notificationMessage
@property (nonatomic) BOOL partiallyLoaded; // ivar: _partiallyLoaded
@property (retain, nonatomic) NSData *preview; // ivar: _preview
@property (retain, nonatomic) NSData *text; // ivar: _text


+(Class)attachmentType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attachmentAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAttachment:(id)arg0 ;
-(void)clearAttachments;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif