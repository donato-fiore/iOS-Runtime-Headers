// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPLACEHOLDERSTRING_H
#define NSPLACEHOLDERSTRING_H



#import "NSString.h"

@interface NSPlaceholderString : NSString



-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)length;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)init;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 encoding:(NSUInteger)arg2 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 encoding:(NSUInteger)arg2 deallocator:(id)arg3 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 encoding:(NSUInteger)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithCString:(char *)arg0 ;
-(id)initWithCString:(char *)arg0 encoding:(NSUInteger)arg1 ;
-(id)initWithCString:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)initWithCStringNoCopy:(char *)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;
-(id)initWithCharacters:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
-(id)initWithCharactersNoCopy:(*unsigned short)arg0 length:(NSUInteger)arg1 deallocator:(id)arg2 ;
-(id)initWithCharactersNoCopy:(*unsigned short)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;
-(id)initWithData:(id)arg0 encoding:(NSUInteger)arg1 ;
-(id)initWithFormat:(id)arg0 locale:(id)arg1 arguments:(char *)arg2 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithValidatedFormat:(id)arg0 validFormatSpecifiers:(id)arg1 locale:(id)arg2 arguments:(char *)arg3 error:(*id)arg4 ;
-(id)retain;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)release;


@end


#endif