// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCONSTANTSTRING_H
#define NSCONSTANTSTRING_H



#import "NSSimpleCString.h"

@interface NSConstantString : NSSimpleCString



-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)canBeConvertedToEncoding:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(NSInteger)compare:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(NSUInteger)cStringLength;
-(NSUInteger)fastestEncoding;
-(NSUInteger)hash;
-(NSUInteger)length;
-(NSUInteger)retainCount;
-(NSUInteger)smallestEncoding;
-(char *)_fastCStringContents:(BOOL)arg0 ;
-(char *)cString;
-(char *)lossyCString;
-(id)autorelease;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCharactersNoCopy:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
-(id)retain;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)release;


@end


#endif