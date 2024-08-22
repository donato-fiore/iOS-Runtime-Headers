// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMESSAGEHEADERS_H
#define MFMESSAGEHEADERS_H

@class NSData, NSString, NSArray;
@protocol ECMessageHeaders, NSCopying;

#import <Foundation/Foundation.h>


@interface MFMessageHeaders : NSObject <ECMessageHeaders, NSCopying>

 {
    unsigned int _preferredEncoding;
}


@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *encodedHeaders;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *listUnsubscribeCommands;
@property (readonly, nonatomic) NSString *listUnsubscribePostContent;
@property (nonatomic) unsigned int preferredEncoding;
@property (readonly) Class superclass;


+(BOOL)isStructuredHeaderKey:(id)arg0 ;
+(BOOL)shouldDecodeHeaderForKey:(id)arg0 ;
+(id)addressListFromEncodedString:(id)arg0 ;
+(id)basicHeaders;
+(id)copyAddressListFromEncodedData:(id)arg0 encoding:(unsigned int)arg1 ;
+(id)encodedDataForAddressList:(id)arg0 splittingAtLength:(NSUInteger)arg1 firstLineBuffer:(NSUInteger)arg2 ;
+(id)uniqueHeaderKeyStringForString:(id)arg0 ;
-(BOOL)hasHeaderForKey:(id)arg0 ;
-(id)_capitalizedKeyForKey:(id)arg0 ;
-(id)_commaSeparatedValuesForKey:(id)arg0 includeAngleBracket:(BOOL)arg1 ;
-(id)_copyAddressListForKey:(id)arg0 ;
-(id)_copyHeaderValueForKey:(id)arg0 ;
-(id)_copyHeaderValueForKey:(id)arg0 offset:(*NSUInteger)arg1 decoded:(BOOL)arg2 ;
-(id)_decodeHeaderKeysFromData:(id)arg0 ;
-(id)_headerValueForKey:(id)arg0 offset:(*NSUInteger)arg1 ;
-(id)allHeaderKeys;
-(id)copyAddressListForBcc;
-(id)copyAddressListForCc;
-(id)copyAddressListForReplyTo;
-(id)copyAddressListForResentFrom;
-(id)copyAddressListForSender;
-(id)copyAddressListForTo;
-(id)copyDecodedStringFromHeaderData:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(id)copyFirstHeaderForKey:(id)arg0 ;
-(id)copyFirstNonDecodedHeaderForKey:(id)arg0 ;
-(id)copyFirstStringValueForKey:(id)arg0 ;
-(id)copyHeadersForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)firstAddressForKey:(id)arg0 ;
-(id)firstHeaderForKey:(id)arg0 ;
-(id)firstSenderAddress;
-(id)headerData;
-(id)headersDictionary;
-(id)headersForKey:(id)arg0 ;
-(id)headersRequiringSMTPUTF8Support;
-(id)init;
-(id)initWithASCIIHeaderString:(id)arg0 ;
-(id)initWithHeaderData:(id)arg0 encoding:(unsigned int)arg1 ;
-(id)mutableCopy;
-(id)references;
-(unsigned int)_contentTypeEncoding;
-(void)_setCapitalizedKey:(id)arg0 forKey:(id)arg1 ;
-(void)appendHeaderData:(id)arg0 andRecipients:(id)arg1 ;
-(void)enumerateKeysAndBytesUsingBlock:(id)arg0 ;


@end


#endif