// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSIMPLECSTRING_H
#define NSSIMPLECSTRING_H



#import "NSString.h"

@interface NSSimpleCString : NSString {
    char * bytes;
    int numBytes;
    int _unused;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)canBeConvertedToEncoding:(NSUInteger)arg0 ;
-(BOOL)getBytes:(*void)arg0 maxLength:(NSUInteger)arg1 usedLength:(*NSUInteger)arg2 encoding:(NSUInteger)arg3 options:(NSUInteger)arg4 range:(struct _NSRange )arg5 remainingRange:(struct _NSRange *)arg6 ;
-(BOOL)hasPrefix:(id)arg0 ;
-(BOOL)hasSuffix:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(NSInteger)compare:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(NSUInteger)cStringLength;
-(NSUInteger)fastestEncoding;
-(NSUInteger)hash;
-(NSUInteger)length;
-(NSUInteger)smallestEncoding;
-(char *)_fastCStringContents:(BOOL)arg0 ;
-(id)_newSubstringWithRange:(struct _NSRange )arg0 zone:(struct _NSZone *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCStringNoCopy:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)stringByAppendingString:(id)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif