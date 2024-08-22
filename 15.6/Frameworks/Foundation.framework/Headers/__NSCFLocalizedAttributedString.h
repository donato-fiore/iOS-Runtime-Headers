// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSCFLOCALIZEDATTRIBUTEDSTRING_H
#define __NSCFLOCALIZEDATTRIBUTEDSTRING_H

@class NSDictionary;
@protocol NSSecureCoding;


#import "NSString.h"
#import "NSAttributedString.h"

@interface __NSCFLocalizedAttributedString : NSString <NSSecureCoding>

 {
    NSAttributedString *_original;
    NSDictionary *_formatConfiguration;
}




+(id)stringEncapsulatingBaseAttributedString:(id)arg0 ;
+(struct __CFString *)copyStringWithMarkdown:(struct __CFString *)arg0 formatConfiguration:(struct __CFDictionary *)arg1 tableURL:(struct __CFURL *)arg2 ;
+(struct __CFString *)createStringRequiringInflectionWithFormat:(struct __CFString *)arg0 formatOptions:(struct __CFDictionary *)arg1 arguments:(char *)arg2 ;
-(*unsigned short)_fastCharacterContents;
-(BOOL)isEqualToString:(id)arg0 ;
-(Class)classForCoder;
-(NSInteger)compare:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 locale:(id)arg3 ;
-(NSUInteger)fastestEncoding;
-(NSUInteger)length;
-(char *)_fastCStringContents:(BOOL)arg0 ;
-(id)__baseAttributedString;
-(id)_initWithAttributedString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formatConfiguration;
-(id)initWithAttributedStringMarkdown:(id)arg0 formatConfiguration:(id)arg1 tableURL:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)substringFromIndex:(NSUInteger)arg0 ;
-(id)substringToIndex:(NSUInteger)arg0 ;
-(id)substringWithRange:(struct _NSRange )arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif