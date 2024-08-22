// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCHARACTERSET_H
#define NSCHARACTERSET_H

@class NSData;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSCharacterSet.h"

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy) NSData *bitmapRepresentation;
@property (readonly, copy) NSCharacterSet *invertedSet;


+(BOOL)supportsSecureCoding;
+(id)URLFragmentAllowedCharacterSet;
+(id)URLHostAllowedCharacterSet;
+(id)URLPasswordAllowedCharacterSet;
+(id)URLPathAllowedCharacterSet;
+(id)URLQueryAllowedCharacterSet;
+(id)URLUserAllowedCharacterSet;
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
+(void)initialize;
-(BOOL)characterIsMember:(unsigned short)arg0 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMutable;
-(BOOL)isSupersetOfSet:(id)arg0 ;
-(BOOL)longCharacterIsMember:(unsigned int)arg0 ;
-(NSUInteger)_cfTypeID;
-(NSUInteger)count;
-(NSUInteger)hash;
-(id)_retainedBitmapRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)replacementObjectForPortCoder:(id)arg0 ;
-(struct __CFCharacterSet *)_expandedCFCharacterSet;
-(void)encodeWithCoder:(id)arg0 ;
-(void)makeImmutable;


@end


#endif