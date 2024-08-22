// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTLAYOUTRANGE_H
#define _UITEXTLAYOUTRANGE_H

@class NSTextRange;
@protocol NSCopying;


#import "UITextRange.h"
#import "_UITextLayoutPosition.h"

@interface _UITextLayoutRange : UITextRange <NSCopying>



@property (readonly, nonatomic) _UITextLayoutPosition *end; // ivar: _end
@property (readonly, nonatomic) NSTextRange *range; // ivar: _range
@property (readonly, nonatomic) _UITextLayoutPosition *start; // ivar: _start


+(id)textRangeWithRange:(id)arg0 ;
+(id)textRangeWithRange:(id)arg0 affinity:(NSInteger)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTextLayoutRange:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif