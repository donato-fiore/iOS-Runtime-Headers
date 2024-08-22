// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASPROXYCONCATENATEDSTRING_H
#define _PASPROXYCONCATENATEDSTRING_H

@class NSString, NSArray;
@protocol NSCopying;



@interface _PASProxyConcatenatedString : NSString <NSCopying>

 {
    NSArray *_components;
    *NSUInteger _startIndices;
    NSUInteger _length;
}




-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)substringWithRange:(struct _NSRange )arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif