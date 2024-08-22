// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITOFFSETVBOX_H
#define EQKITOFFSETVBOX_H



#import "EQKitVBox.h"

@interface EQKitOffsetVBox : EQKitVBox

@property (readonly, nonatomic) CGFloat offset; // ivar: mOffset


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithChildBoxes:(id)arg0 ;
-(id)initWithChildBoxes:(id)arg0 pivotIndex:(NSUInteger)arg1 ;
-(id)initWithChildBoxes:(id)arg0 pivotIndex:(NSUInteger)arg1 offset:(CGFloat)arg2 ;
-(void)p_cacheDimensionsForHeight:(*CGFloat)arg0 depth:(*CGFloat)arg1 width:(*CGFloat)arg2 ;


@end


#endif