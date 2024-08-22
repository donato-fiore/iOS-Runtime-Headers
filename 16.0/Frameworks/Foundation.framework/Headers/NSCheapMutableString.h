// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCHEAPMUTABLESTRING_H
#define NSCHEAPMUTABLESTRING_H



#import "NSMutableString.h"

@interface NSCheapMutableString : NSMutableString {
    ? contents;
    ? flags;
    NSUInteger numCharacters;
    *void _reserved;
}




-(BOOL)getBytes:(*void)arg0 maxLength:(NSUInteger)arg1 usedLength:(*NSUInteger)arg2 encoding:(NSUInteger)arg3 options:(NSUInteger)arg4 range:(struct _NSRange )arg5 remainingRange:(struct _NSRange *)arg6 ;
-(NSUInteger)cStringLength;
-(NSUInteger)fastestEncoding;
-(NSUInteger)length;
-(char *)cString;
-(char *)lossyCString;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)setContentsNoCopy:(*void)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 isUnicode:(BOOL)arg3 ;


@end


#endif