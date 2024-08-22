// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSCFSTRING_H
#define __NSCFSTRING_H

@class NSCFType;



@interface __NSCFString : NSCFType



+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(*unsigned short)_fastCharacterContents;
-(BOOL)_isCString;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)getCString:(char *)arg0 maxLength:(NSUInteger)arg1 encoding:(NSUInteger)arg2 ;
-(BOOL)hasPrefix:(id)arg0 ;
-(BOOL)hasSuffix:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(BOOL)isNSString__;
-(Class)classForCoder;
-(NSUInteger)cStringLength;
-(NSUInteger)fastestEncoding;
-(NSUInteger)hash;
-(NSUInteger)length;
-(NSUInteger)replaceOccurrencesOfString:(id)arg0 withString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange )arg3 ;
-(NSUInteger)retainCount;
-(NSUInteger)smallestEncoding;
-(char *)UTF8String;
-(char *)_fastCStringContents:(BOOL)arg0 ;
-(char *)cString;
-(char *)cStringUsingEncoding:(NSUInteger)arg0 ;
-(id)_newSubstringWithRange:(struct _NSRange )arg0 zone:(struct _NSZone *)arg1 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)retain;
-(id)substringWithRange:(struct _NSRange )arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)appendCharacters:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
-(void)appendFormat:(id)arg0 ;
-(void)appendString:(id)arg0 ;
-(void)deleteCharactersInRange:(struct _NSRange )arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)getLineStart:(*NSUInteger)arg0 end:(*NSUInteger)arg1 contentsEnd:(*NSUInteger)arg2 forRange:(struct _NSRange )arg3 ;
-(void)insertString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)release;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setString:(id)arg0 ;


@end


#endif