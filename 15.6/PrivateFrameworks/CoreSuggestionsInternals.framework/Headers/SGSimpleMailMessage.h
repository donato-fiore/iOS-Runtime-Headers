// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSIMPLEMAILMESSAGE_H
#define SGSIMPLEMAILMESSAGE_H

@class _PASCachedResult, NSArray, SGSimpleNamedEmailAddress, NSString, NSData, NSIndexSet;


#import "SGMessage.h"
#import "SGHtmlParser.h"

@interface SGSimpleMailMessage : SGMessage {
    _PASCachedResult *_htmlBodyCached;
    _PASCachedResult *_htmlContentDataCached;
    _PASCachedResult *_htmlParserCached;
    _PASCachedResult *_quotedRegionsCached;
    _PASCachedResult *_hasHumanHeadersCached;
    _PASCachedResult *_authorCached;
}


@property (copy, nonatomic) NSArray *bcc; // ivar: _bcc
@property (copy, nonatomic) NSArray *cc; // ivar: _cc
@property (copy, nonatomic) SGSimpleNamedEmailAddress *from; // ivar: _from
@property (readonly, nonatomic) BOOL hasHumanHeaders;
@property (nonatomic) BOOL hasInhumanHeaders; // ivar: _hasInhumanHeaders
@property (copy, nonatomic) NSArray *headers; // ivar: _headers
@property (copy, nonatomic) NSString *htmlBody; // ivar: _htmlBody
@property (copy, nonatomic) NSData *htmlContentData; // ivar: _htmlContentData
@property (readonly, nonatomic) SGHtmlParser *htmlParser;
@property (nonatomic) BOOL isPartiallyDownloaded; // ivar: _isPartiallyDownloaded
@property (copy, nonatomic) NSArray *mailboxIdentifiers; // ivar: _mailboxIdentifiers
@property (copy, nonatomic) SGSimpleNamedEmailAddress *mailingList; // ivar: _mailingList
@property (copy, nonatomic) NSString *messageId; // ivar: _messageId
@property (readonly, nonatomic) NSString *messageIdWithoutBrackets;
@property (readonly, nonatomic) NSIndexSet *quotedRegions;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *replyTo; // ivar: _replyTo
@property (copy, nonatomic) NSArray *to; // ivar: _to


+(BOOL)headerDictionaryContainsInhumanHeaders:(id)arg0 ;
+(BOOL)headersContainInhumanOnes:(id)arg0 keys:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)addressItemsFromEmailString:(id)arg0 ;
+(id)dateFromEmailString:(id)arg0 ;
+(id)decodeEncodedWordsIn:(id)arg0 ;
+(id)decodeQuotedPrintable:(id)arg0 charset:(NSUInteger)arg1 rfc2047UnderscoreAsSpace:(BOOL)arg2 ;
+(id)formatFlowed:(id)arg0 delSp:(BOOL)arg1 ;
+(id)htmlBodyFromRfc822:(id)arg0 headers:(id)arg1 attachmentCallback:(id)arg2 ;
+(id)parseHeaders:(id)arg0 ;
+(id)parseParameterizedHeaderValue:(id)arg0 ;
+(id)parseRfc822:(id)arg0 ;
+(id)parseRfc822:(id)arg0 attachmentCallback:(id)arg1 ;
+(id)parseRfc822Headers:(id)arg0 htmlContent:(id)arg1 ;
+(id)parseRfc822Headers:(id)arg0 htmlContent:(id)arg1 source:(id)arg2 ;
+(id)simpleMailMessageFromHeaders:(id)arg0 ;
+(id)stripTrailingASCIIHSpace:(id)arg0 ;
+(id)subjectByCleaningPrefixesInSubject:(id)arg0 ;
+(id)uudecode:(id)arg0 ;
+(struct _NSRange )rangeOfBodyFromRfc822:(id)arg0 ;
+(struct _NSRange )rangeOfHeadersFromRfc822:(id)arg0 ;
-(BOOL)hasRecipientFromSameDomainAsSender;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSimpleMailMessage:(id)arg0 ;
-(BOOL)isInhumanContentNoncached;
-(NSInteger)contentLength;
-(NSUInteger)hash;
-(id)allRecipients;
-(id)asDictionary;
-(id)author;
-(id)body;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createNewSearchableItem;
-(id)createNewSearchableItemWithSource:(id)arg0 uniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 ;
-(id)description;
-(id)initForBuilding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMailContentEvent:(id)arg0 contentProtection:(id)arg1 ;
-(id)initWithMessageDictionary:(id)arg0 ;
-(id)initWithSearchableItem:(id)arg0 ;
-(id)removeBrackets:(id)arg0 ;
-(id)senderDomain;
-(id)spotlightBundleIdentifier;
-(id)spotlightUniqueIdentifier;
-(id)textContent;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif