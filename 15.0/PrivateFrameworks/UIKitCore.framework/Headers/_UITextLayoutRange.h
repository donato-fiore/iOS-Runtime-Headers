// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTLAYOUTRANGE_H
#define _UITEXTLAYOUTRANGE_H

@class NSTextRange;
@protocol NSCopying;


#import "UITextRange.h"
#import "UITextPosition.h"

@interface _UITextLayoutRange : UITextRange <NSCopying>

 {
    UITextPosition *_start;
    UITextPosition *_end;
}


@property (readonly, nonatomic) NSTextRange *range; // ivar: _range


+(id)textRangeWithRange:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTextLayoutRange:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)end;
-(id)start;


@end


#endif