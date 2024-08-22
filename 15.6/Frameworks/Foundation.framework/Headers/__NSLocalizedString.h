// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSLOCALIZEDSTRING_H
#define __NSLOCALIZEDSTRING_H

@class NSDictionary;
@protocol NSSecureCoding;


#import "NSMutableString.h"

@interface __NSLocalizedString : NSMutableString <NSSecureCoding>

 {
    NSMutableString *original;
    NSDictionary *config;
}




+(BOOL)supportsSecureCoding;
-(*unsigned short)_fastCharacterContents;
-(BOOL)_allowsDirectEncoding;
-(BOOL)isEqualToString:(id)arg0 ;
-(Class)classForCoder;
-(NSInteger)compare:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 locale:(id)arg3 ;
-(NSUInteger)fastestEncoding;
-(NSUInteger)length;
-(NSUInteger)replaceOccurrencesOfString:(id)arg0 withString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange )arg3 ;
-(char *)_fastCStringContents:(BOOL)arg0 ;
-(id)baseString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formatConfiguration;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 withFormatConfiguration:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)substringFromIndex:(NSUInteger)arg0 ;
-(id)substringToIndex:(NSUInteger)arg0 ;
-(id)substringWithRange:(struct _NSRange )arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)appendCharacters:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
-(void)appendFormat:(id)arg0 ;
-(void)appendString:(id)arg0 ;
-(void)dealloc;
-(void)deleteCharactersInRange:(struct _NSRange )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)insertString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setString:(id)arg0 ;


@end


#endif