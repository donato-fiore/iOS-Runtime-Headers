// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNIQUEANIMATIONKEY_H
#define UNIQUEANIMATIONKEY_H

@class NSString;



@interface UniqueAnimationKey : NSString {
    NSUInteger _key;
}




-(BOOL)getBytes:(*void)arg0 maxLength:(NSUInteger)arg1 usedLength:(*NSUInteger)arg2 encoding:(NSUInteger)arg3 options:(NSUInteger)arg4 range:(struct _NSRange )arg5 remainingRange:(struct _NSRange *)arg6 ;
-(NSUInteger)length;
-(id)initWithKey:(NSUInteger)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;


@end


#endif