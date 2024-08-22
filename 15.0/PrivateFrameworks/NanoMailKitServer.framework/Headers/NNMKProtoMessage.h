// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKPROTOMESSAGE_H
#define NNMKPROTOMESSAGE_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;



@interface NNMKProtoMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accountId; // ivar: _accountId
@property (retain, nonatomic) NSMutableArray *bccs; // ivar: _bccs
@property (retain, nonatomic) NSMutableArray *ccs; // ivar: _ccs
@property (retain, nonatomic) NSString *conversationId; // ivar: _conversationId
@property (retain, nonatomic) NSData *dateReceived; // ivar: _dateReceived
@property (retain, nonatomic) NSData *dateSent; // ivar: _dateSent
@property (retain, nonatomic) NSString *from; // ivar: _from
@property (readonly, nonatomic) BOOL hasAccountId;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (readonly, nonatomic) BOOL hasDateReceived;
@property (readonly, nonatomic) BOOL hasDateSent;
@property (readonly, nonatomic) BOOL hasFrom;
@property (nonatomic) BOOL hasIsSpecialMailboxSpecific;
@property (nonatomic) BOOL hasIsThreadSpecific;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (readonly, nonatomic) BOOL hasMessageId;
@property (readonly, nonatomic) BOOL hasMessageIdHeader;
@property (readonly, nonatomic) BOOL hasNotificationMessageId;
@property (readonly, nonatomic) BOOL hasPublisherBulletinId;
@property (readonly, nonatomic) BOOL hasRemoteId;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasStatusVersion;
@property (readonly, nonatomic) BOOL hasSubject;
@property (nonatomic) unsigned int isSpecialMailboxSpecific; // ivar: _isSpecialMailboxSpecific
@property (nonatomic) BOOL isThreadSpecific; // ivar: _isThreadSpecific
@property (retain, nonatomic) NSString *mailboxId; // ivar: _mailboxId
@property (retain, nonatomic) NSString *messageId; // ivar: _messageId
@property (retain, nonatomic) NSString *messageIdHeader; // ivar: _messageIdHeader
@property (retain, nonatomic) NSString *notificationMessageId; // ivar: _notificationMessageId
@property (retain, nonatomic) NSString *publisherBulletinId; // ivar: _publisherBulletinId
@property (retain, nonatomic) NSString *remoteId; // ivar: _remoteId
@property (nonatomic) unsigned int status; // ivar: _status
@property (nonatomic) unsigned int statusVersion; // ivar: _statusVersion
@property (retain, nonatomic) NSString *subject; // ivar: _subject
@property (retain, nonatomic) NSMutableArray *tos; // ivar: _tos


+(Class)bccType;
+(Class)ccType;
+(Class)toType;
+(id)protoMessageFromMessage:(id)arg0 organizedByThread:(BOOL)arg1 sanitizeMessageId:(BOOL)arg2 supportsStandaloneMode:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bccAtIndex:(NSUInteger)arg0 ;
-(id)ccAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)toAtIndex:(NSUInteger)arg0 ;
-(void)addBcc:(id)arg0 ;
-(void)addCc:(id)arg0 ;
-(void)addTo:(id)arg0 ;
-(void)clearCcs;
-(void)clearTos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif