// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMIMECHARSET_H
#define MFMIMECHARSET_H

@class NSString;
@protocol NSSecureCoding, ECMIMECharset;

#import <Foundation/Foundation.h>


@interface MFMimeCharset : NSObject <NSSecureCoding, ECMIMECharset>

 {
    unsigned int _encoding;
    NSString *_primaryLanguage;
    NSString *_charsetName;
    BOOL _coversLargeUnicodeSubset;
    BOOL _useBase64InHeaders;
    BOOL _canBeUsedForOutgoingMessages;
}


@property (readonly, nonatomic) BOOL canBeUsedForOutgoingMessages;
@property (readonly, nonatomic) unsigned int cfStringEncoding;
@property (readonly, copy, nonatomic) NSString *charsetName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) NSUInteger encoding;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useBase64InHeaders;


+(BOOL)supportsSecureCoding;
+(id)allMimeCharsets;
+(id)allMimeCharsets:(BOOL)arg0 ;
+(id)charsetForEncoding:(unsigned int)arg0 ;
+(id)preferredMimeCharset;
-(BOOL)coversLargeUnicodeSubset;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncoding:(unsigned int)arg0 ;
-(id)primaryLanguage;
-(void)_setPrimaryLanguage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif