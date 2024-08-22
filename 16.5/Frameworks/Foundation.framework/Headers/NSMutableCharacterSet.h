// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSMUTABLECHARACTERSET_H
#define NSMUTABLECHARACTERSET_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;


#import "NSCharacterSet.h"

@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)alphanumericCharacterSet;
+(id)capitalizedLetterCharacterSet;
+(id)characterSetWithBitmapRepresentation:(id)arg0 ;
+(id)characterSetWithCharactersInString:(id)arg0 ;
+(id)characterSetWithContentsOfFile:(id)arg0 ;
+(id)characterSetWithRange:(struct _NSRange )arg0 ;
+(id)controlCharacterSet;
+(id)decimalDigitCharacterSet;
+(id)decomposableCharacterSet;
+(id)illegalCharacterSet;
+(id)letterCharacterSet;
+(id)lowercaseLetterCharacterSet;
+(id)newlineCharacterSet;
+(id)nonBaseCharacterSet;
+(id)punctuationCharacterSet;
+(id)symbolCharacterSet;
+(id)uppercaseLetterCharacterSet;
+(id)whitespaceAndNewlineCharacterSet;
+(id)whitespaceCharacterSet;
-(BOOL)isMutable;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)addCharactersInRange:(struct _NSRange )arg0 ;
-(void)addCharactersInString:(id)arg0 ;
-(void)formIntersectionWithCharacterSet:(id)arg0 ;
-(void)formUnionWithCharacterSet:(id)arg0 ;
-(void)invert;
-(void)removeCharactersInRange:(struct _NSRange )arg0 ;
-(void)removeCharactersInString:(id)arg0 ;


@end


#endif