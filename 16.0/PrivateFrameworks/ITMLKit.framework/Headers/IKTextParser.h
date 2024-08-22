// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKTEXTPARSER_H
#define IKTEXTPARSER_H

@class NSAttributedString, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IKTextParser : NSObject <NSCopying>



@property (readonly, retain, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, retain, nonatomic) NSString *string;


+(id)textWithAttributedString:(id)arg0 ;
+(id)textWithDOMElement:(id)arg0 usingParseBlock:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_attributedStringFromDomElement:(id)arg0 usingParseBlock:(id)arg1 ;
// -(id)_attributedStringWithDefaultAttributes:(id)arg0 fontHandler:(id)arg1 style:(unk)arg2  ;
-(id)_attributesWithFont:(id)arg0 style:(id)arg1 ;
-(id)_attributesWithFont:(id)arg0 style:(id)arg1 foregroundColor:(id)arg2 textAlignment:(NSInteger)arg3 ;
-(id)_stringFromDateElement:(id)arg0 unformattedString:(id)arg1 ;
-(id)_stringFromDurationElement:(id)arg0 unformattedString:(id)arg1 ;
-(id)_stringFromNumberElement:(id)arg0 unformattedString:(id)arg1 ;
-(id)attributedStringWithFont:(id)arg0 foregroundColor:(id)arg1 textAlignment:(NSInteger)arg2 style:(id)arg3 ;
-(id)attributedStringWithFont:(id)arg0 style:(id)arg1 ;
// -(id)attributedStringWithFontHandler:(id)arg0 style:(unk)arg1  ;
// -(id)attributedStringWithFontHandler:(id)arg0 style:(unk)arg1 defaultAttributes:(id)arg2  ;
// -(id)attributedStringWithFontHandler:(id)arg0 style:(unk)arg1 foregroundColor:(id)arg2 textAlignment:(id)arg3  ;
// -(id)attributedStringWithFontHandler:(id)arg0 style:(unk)arg1 foregroundColor:(id)arg2 textAlignment:(id)arg3 defaultAttributes:(NSInteger)arg4  ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif