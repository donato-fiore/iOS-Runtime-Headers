// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPLACEHOLDERMUTABLESTRING_H
#define NSPLACEHOLDERMUTABLESTRING_H



#import "NSMutableString.h"

@interface NSPlaceholderMutableString : NSMutableString



-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)length;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)init;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 encoding:(NSUInteger)arg2 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 encoding:(NSUInteger)arg2 deallocator:(id)arg3 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 encoding:(NSUInteger)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithCString:(char *)arg0 encoding:(NSUInteger)arg1 ;
-(id)initWithCStringNoCopy:(char *)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCharactersNoCopy:(*unsigned short)arg0 length:(NSUInteger)arg1 deallocator:(id)arg2 ;
-(id)initWithCharactersNoCopy:(*unsigned short)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;
-(id)initWithFormat:(id)arg0 locale:(id)arg1 arguments:(char *)arg2 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithUTF8String:(char *)arg0 ;
-(id)retain;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)release;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;


@end


#endif