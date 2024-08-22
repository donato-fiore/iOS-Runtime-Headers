// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASBIGENDIANUTF16STRING_H
#define _PASBIGENDIANUTF16STRING_H

@class NSString;
@protocol NSCopying;



@interface _PASBigEndianUTF16String : NSString <NSCopying>

 {
    NSUInteger _length;
    *void _swapped;
    id *_backingObject;
}




-(NSUInteger)length;
-(id)init;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif