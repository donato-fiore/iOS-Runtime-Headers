// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSATSSTRINGSEGMENT_H
#define __NSATSSTRINGSEGMENT_H

@class NSString;



@interface __NSATSStringSegment : NSString {
    *__CFString _originalString;
    NSInteger _originalStringLength;
    ? _range;
    *unsigned short _characters;
    unsigned short _buffer;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(NSUInteger)length;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)release;


@end


#endif