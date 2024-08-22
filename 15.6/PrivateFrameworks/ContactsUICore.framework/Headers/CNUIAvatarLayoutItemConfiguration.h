// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIAVATARLAYOUTITEMCONFIGURATION_H
#define CNUIAVATARLAYOUTITEMCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface CNUIAvatarLayoutItemConfiguration : NSObject

@property (nonatomic) CGFloat baseSize; // ivar: _baseSize
@property (nonatomic) CGFloat size; // ivar: _size
@property (nonatomic) CGFloat x; // ivar: _x
@property (nonatomic) CGFloat y; // ivar: _y


-(id)initWithSize:(CGFloat)arg0 x:(CGFloat)arg1 y:(CGFloat)arg2 baseSize:(CGFloat)arg3 ;
-(struct CGRect )itemFrameInContainingBounds:(struct CGRect )arg0 isRTL:(BOOL)arg1 ;
-(void)updateLayer:(id)arg0 inBounds:(struct CGRect )arg1 atIndex:(NSInteger)arg2 isRTL:(BOOL)arg3 ;


@end


#endif