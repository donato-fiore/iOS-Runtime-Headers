// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPBMAILCONTENTEVENT_H
#define BMPBMAILCONTENTEVENT_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;


#import "BMPBNamedHandle.h"

@interface BMPBMailContentEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSMutableArray *accountHandles; // ivar: _accountHandles
@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSString *accountType; // ivar: _accountType
@property (retain, nonatomic) NSMutableArray *attachments; // ivar: _attachments
@property (retain, nonatomic) NSString *bcc; // ivar: _bcc
@property (retain, nonatomic) NSMutableArray *bccHandles; // ivar: _bccHandles
@property (retain, nonatomic) NSString *cc; // ivar: _cc
@property (retain, nonatomic) NSMutableArray *ccHandles; // ivar: _ccHandles
@property (retain, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (retain, nonatomic) NSString *domainId; // ivar: _domainId
@property (retain, nonatomic) NSString *from; // ivar: _from
@property (retain, nonatomic) BMPBNamedHandle *fromHandle; // ivar: _fromHandle
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (readonly, nonatomic) BOOL hasAccountType;
@property (readonly, nonatomic) BOOL hasBcc;
@property (readonly, nonatomic) BOOL hasCc;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (readonly, nonatomic) BOOL hasDomainId;
@property (readonly, nonatomic) BOOL hasFrom;
@property (readonly, nonatomic) BOOL hasFromHandle;
@property (readonly, nonatomic) BOOL hasHtmlContent;
@property (readonly, nonatomic) BOOL hasHtmlContentData;
@property (nonatomic) BOOL hasIsFullyDownloaded;
@property (readonly, nonatomic) BOOL hasListId;
@property (readonly, nonatomic) BOOL hasMessageIdentifier;
@property (readonly, nonatomic) BOOL hasReplyTo;
@property (readonly, nonatomic) BOOL hasSecurityMethod;
@property (readonly, nonatomic) BOOL hasSubject;
@property (readonly, nonatomic) BOOL hasTextContent;
@property (readonly, nonatomic) BOOL hasTo;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSMutableArray *headers; // ivar: _headers
@property (retain, nonatomic) NSData *htmlContent; // ivar: _htmlContent
@property (retain, nonatomic) NSString *htmlContentData; // ivar: _htmlContentData
@property (nonatomic) BOOL isFullyDownloaded; // ivar: _isFullyDownloaded
@property (retain, nonatomic) BMPBNamedHandle *listId; // ivar: _listId
@property (retain, nonatomic) NSMutableArray *mailboxIdentifiers; // ivar: _mailboxIdentifiers
@property (retain, nonatomic) NSString *messageIdentifier; // ivar: _messageIdentifier
@property (retain, nonatomic) BMPBNamedHandle *replyTo; // ivar: _replyTo
@property (retain, nonatomic) NSString *securityMethod; // ivar: _securityMethod
@property (retain, nonatomic) NSString *subject; // ivar: _subject
@property (retain, nonatomic) NSString *textContent; // ivar: _textContent
@property (retain, nonatomic) NSString *to; // ivar: _to
@property (retain, nonatomic) NSMutableArray *toHandles; // ivar: _toHandles
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)accountHandlesAtIndex:(NSUInteger)arg0 ;
-(id)attachmentsAtIndex:(NSUInteger)arg0 ;
-(id)bccHandlesAtIndex:(NSUInteger)arg0 ;
-(id)ccHandlesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)headersAtIndex:(NSUInteger)arg0 ;
-(id)mailboxIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)toHandlesAtIndex:(NSUInteger)arg0 ;
-(void)addAccountHandles:(id)arg0 ;
-(void)addAttachments:(id)arg0 ;
-(void)addBccHandles:(id)arg0 ;
-(void)addCcHandles:(id)arg0 ;
-(void)addHeaders:(id)arg0 ;
-(void)addMailboxIdentifiers:(id)arg0 ;
-(void)addToHandles:(id)arg0 ;
-(void)clearAttachments;
-(void)clearCcHandles;
-(void)clearHeaders;
-(void)clearMailboxIdentifiers;
-(void)clearToHandles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif