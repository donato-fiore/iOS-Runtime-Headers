// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBMESSAGESCONTENTEVENT_H
#define BMPBMESSAGESCONTENTEVENT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "BMPBContentAttachment.h"
#import "BMPBNamedHandle.h"

@interface BMPBMessagesContentEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSMutableArray *accountHandles; // ivar: _accountHandles
@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSString *accountType; // ivar: _accountType
@property (retain, nonatomic) BMPBContentAttachment *attachment; // ivar: _attachment
@property (retain, nonatomic) NSString *attachmentURL; // ivar: _attachmentURL
@property (retain, nonatomic) NSString *author; // ivar: _author
@property (retain, nonatomic) NSString *content; // ivar: _content
@property (retain, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (retain, nonatomic) NSString *conversationId; // ivar: _conversationId
@property (retain, nonatomic) NSString *domainId; // ivar: _domainId
@property (retain, nonatomic) BMPBNamedHandle *fromHandle; // ivar: _fromHandle
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (readonly, nonatomic) BOOL hasAccountType;
@property (readonly, nonatomic) BOOL hasAttachment;
@property (readonly, nonatomic) BOOL hasAttachmentURL;
@property (readonly, nonatomic) BOOL hasAuthor;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (readonly, nonatomic) BOOL hasDomainId;
@property (readonly, nonatomic) BOOL hasFromHandle;
@property (readonly, nonatomic) BOOL hasRecipients;
@property (readonly, nonatomic) BOOL hasSuggestedNickname;
@property (readonly, nonatomic) BOOL hasSuggestedPhotoPath;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *recipients; // ivar: _recipients
@property (retain, nonatomic) NSString *suggestedNickname; // ivar: _suggestedNickname
@property (retain, nonatomic) NSString *suggestedPhotoPath; // ivar: _suggestedPhotoPath
@property (retain, nonatomic) NSMutableArray *toHandles; // ivar: _toHandles
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId
@property (retain, nonatomic) NSString *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)accountHandlesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)toHandlesAtIndex:(NSUInteger)arg0 ;
-(void)addAccountHandles:(id)arg0 ;
-(void)addToHandles:(id)arg0 ;
-(void)clearAccountHandles;
-(void)clearToHandles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif