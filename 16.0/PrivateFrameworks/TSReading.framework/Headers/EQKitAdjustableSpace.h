// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITADJUSTABLESPACE_H
#define EQKITADJUSTABLESPACE_H


#import <Foundation/Foundation.h>


@interface EQKitAdjustableSpace : NSObject

@property (readonly, nonatomic) CGFloat ascent; // ivar: mAscent
@property (readonly, nonatomic) CGFloat descent; // ivar: mDescent
@property (readonly, nonatomic) CGFloat width; // ivar: mWidth


+(struct __CTRunDelegate *)newRunDelegateWithAscent:(CGFloat)arg0 descent:(CGFloat)arg1 width:(CGFloat)arg2 ;
+(void)appendSpaceToAttributedString:(id)arg0 ascent:(CGFloat)arg1 descent:(CGFloat)arg2 width:(CGFloat)arg3 ;
-(id)initWithAscent:(CGFloat)arg0 descent:(CGFloat)arg1 width:(CGFloat)arg2 ;


@end


#endif