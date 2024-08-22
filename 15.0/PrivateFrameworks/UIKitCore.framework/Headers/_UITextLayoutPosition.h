// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTLAYOUTPOSITION_H
#define _UITEXTLAYOUTPOSITION_H

@protocol NSCopying, NSTextLocation;


#import "UITextPosition.h"

@interface _UITextLayoutPosition : UITextPosition <NSCopying>



@property (readonly, nonatomic) NSInteger affinity; // ivar: _affinity
@property (readonly, nonatomic) NSObject<NSTextLocation> *location; // ivar: _location


+(id)textPositionWithLocation:(id)arg0 ;
+(id)textPositionWithLocation:(id)arg0 affinity:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTextLayoutPosition:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif