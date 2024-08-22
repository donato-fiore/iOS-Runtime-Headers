// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSCLSTR_H
#define _NSCLSTR_H



#import "NSString.h"

@interface _NSClStr : NSString {
    NSUInteger length;
    *unsigned short characters;
}




-(*unsigned short)_fastCharacterContents;
-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCharacters:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithUTF8String:(char *)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif