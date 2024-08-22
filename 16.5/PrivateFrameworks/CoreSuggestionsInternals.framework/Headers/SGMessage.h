// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMESSAGE_H
#define SGMESSAGE_H

@class _PASCachedResult, NSArray, NSString, CSPerson, NSDate;
@protocol NSSecureCoding, NSCopying, SGSpotlightIdentifiers;

#import <Foundation/Foundation.h>

#import "SGHarvestQueueMetrics.h"

@interface SGMessage : NSObject <NSSecureCoding, NSCopying, SGSpotlightIdentifiers>

 {
    _PASCachedResult *_isInhumanSenderCached;
    _PASCachedResult *_isInhumanContentCached;
    _PASCachedResult *_taggedCharacterRangesCached;
    _PASCachedResult *_messageSubjectDetectedDataCached;
    _PASCachedResult *_dataDetectorMatchesWithSignatureForContentCached;
    _PASCachedResult *_textContentLanguageIdentifierCached;
}


@property (copy, nonatomic) NSArray *accountHandles; // ivar: _accountHandles
@property (copy, nonatomic) NSString *accountType; // ivar: _accountType
@property (readonly, nonatomic) NSArray *attachments; // ivar: _attachments
@property (readonly, nonatomic) CSPerson *author;
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSInteger contentLength;
@property (copy, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _NSRange detectedDataSignatureRange;
@property (copy, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (retain, nonatomic) SGHarvestQueueMetrics *harvestMetrics; // ivar: _harvestMetrics
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInhumanContent;
@property (readonly, nonatomic) BOOL isInhumanSender;
@property (nonatomic) BOOL isSent; // ivar: _isSent
@property (nonatomic) BOOL isStoredEncrypted; // ivar: _isStoredEncrypted
@property (copy, nonatomic) NSString *mailConversationIdentifier; // ivar: _mailConversationIdentifier
@property (readonly, nonatomic) NSArray *messageSubjectDetectedData;
@property (readonly, nonatomic) NSArray *plainTextDetectedData;
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (copy, nonatomic) NSString *subject; // ivar: _subject
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *taggedCharacterRanges;
@property (copy, nonatomic) NSString *textContent; // ivar: _textContent
@property (readonly, nonatomic) NSString *textContentLanguageIdentifier;
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)fromDictionary:(id)arg0 ;
+(id)messageWithSearchableItem:(id)arg0 ;
+(id)preferredLanguages;
-(BOOL)isEqualToMessage:(id)arg0 ;
-(id)asDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataDetectorMatchesWithSignature;
-(id)init;
-(id)initForBuilding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMailContentEvent:(id)arg0 contentProtection:(id)arg1 ;
-(id)initWithMessageDictionary:(id)arg0 ;
-(id)initWithMessagesContentEvent:(id)arg0 contentProtection:(id)arg1 ;
-(id)initWithSearchableItem:(id)arg0 ;
-(id)spotlightBundleIdentifier;
-(id)spotlightDomainIdentifier;
-(id)spotlightReference;
-(id)spotlightUniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif