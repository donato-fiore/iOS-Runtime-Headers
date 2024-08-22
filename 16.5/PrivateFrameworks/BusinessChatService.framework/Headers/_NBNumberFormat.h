// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NBNUMBERFORMAT_H
#define _NBNUMBERFORMAT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _NBNumberFormat : NSObject

@property (retain, nonatomic) NSString *domesticCarrierCodeFormattingRule; // ivar: _domesticCarrierCodeFormattingRule
@property (retain, nonatomic) NSString *format; // ivar: _format
@property (retain, nonatomic) NSArray *leadingDigitsPatterns; // ivar: _leadingDigitsPatterns
@property (retain, nonatomic) NSString *nationalPrefixFormattingRule; // ivar: _nationalPrefixFormattingRule
@property (nonatomic) BOOL nationalPrefixOptionalWhenFormatting; // ivar: _nationalPrefixOptionalWhenFormatting
@property (retain, nonatomic) NSString *pattern; // ivar: _pattern


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithEntry:(id)arg0 ;
-(id)initWithPattern:(id)arg0 withFormat:(id)arg1 withLeadingDigitsPatterns:(id)arg2 withNationalPrefixFormattingRule:(id)arg3 whenFormatting:(BOOL)arg4 withDomesticCarrierCodeFormattingRule:(id)arg5 ;


@end


#endif