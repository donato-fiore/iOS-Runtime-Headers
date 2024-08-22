// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTKITTEXTRANGE_H
#define _UITEXTKITTEXTRANGE_H

@class NSTextRange;
@protocol NSCopying;


#import "UITextRange.h"
#import "_UITextKitTextPosition.h"

@interface _UITextKitTextRange : UITextRange <NSCopying>



@property (retain, nonatomic) _UITextKitTextPosition *end; // ivar: _end
@property (retain, nonatomic) _UITextKitTextPosition *start; // ivar: _start
@property (retain, nonatomic) NSTextRange *textKit2Range; // ivar: _textKit2Range


+(id)rangeWithRange:(struct _NSRange )arg0 ;
+(id)rangeWithRange:(struct _NSRange )arg0 affinity:(NSInteger)arg1 ;
+(id)rangeWithStart:(id)arg0 end:(id)arg1 ;
+(id)rangeWithTextContentManager:(id)arg0 textRange:(id)arg1 affinity:(NSInteger)arg2 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(struct _NSRange )asRange;


@end


#endif