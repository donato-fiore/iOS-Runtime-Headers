// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTKITTEXTRANGE_H
#define _UITEXTKITTEXTRANGE_H

@protocol NSCopying;


#import "UITextRange.h"
#import "UITextPosition.h"

@interface _UITextKitTextRange : UITextRange <NSCopying>



@property (readonly, nonatomic) NSInteger affinity; // ivar: _affinity
@property (retain, nonatomic) UITextPosition *end; // ivar: _end
@property (retain, nonatomic) UITextPosition *start; // ivar: _start


+(id)rangeWithRange:(struct _NSRange )arg0 ;
+(id)rangeWithStart:(id)arg0 end:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(struct _NSRange )asRange;


@end


#endif