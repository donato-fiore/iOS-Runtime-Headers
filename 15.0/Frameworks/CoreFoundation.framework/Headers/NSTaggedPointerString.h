// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSTAGGEDPOINTERSTRING_H
#define NSTAGGEDPOINTERSTRING_H


#import <Foundation/Foundation.h>


@interface NSTaggedPointerString : NSObject



+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(void)_setAsTaggedStringClass;
-(*unsigned short)_fastCharacterContents;
-(BOOL)_getCString:(char *)arg0 maxLength:(NSUInteger)arg1 encoding:(unsigned int)arg2 ;
-(BOOL)_isCString;
-(BOOL)getBytes:(*void)arg0 maxLength:(NSUInteger)arg1 usedLength:(*NSUInteger)arg2 encoding:(NSUInteger)arg3 options:(NSUInteger)arg4 range:(struct _NSRange )arg5 remainingRange:(struct _NSRange *)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(BOOL)isNSString__;
-(NSInteger)compare:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 locale:(id)arg3 ;
-(NSUInteger)fastestEncoding;
-(NSUInteger)hash;
-(NSUInteger)length;
-(NSUInteger)retainCount;
-(NSUInteger)smallestEncoding;
-(char *)UTF8String;
-(char *)_fastCStringContents:(BOOL)arg0 ;
-(char *)cStringUsingEncoding:(NSUInteger)arg0 ;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)lowercaseStringWithLocale:(id)arg0 ;
-(id)retain;
-(id)substringWithRange:(struct _NSRange )arg0 ;
-(id)uppercaseStringWithLocale:(id)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)release;


@end


#endif