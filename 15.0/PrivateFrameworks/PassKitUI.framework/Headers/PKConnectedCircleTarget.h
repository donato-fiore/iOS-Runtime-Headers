// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCONNECTEDCIRCLETARGET_H
#define PKCONNECTEDCIRCLETARGET_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface PKConnectedCircleTarget : NSObject

@property (nonatomic) BOOL hideTargetCircle; // ivar: _hideTargetCircle
@property (readonly, nonatomic) UIColor *innerColor; // ivar: _innerColor
@property (readonly, nonatomic) CGFloat innerRadius; // ivar: _innerRadius
@property (readonly, nonatomic) UIColor *middleColor; // ivar: _middleColor
@property (readonly, nonatomic) CGFloat middleRadius; // ivar: _middleRadius
@property (readonly, nonatomic) UIColor *outerColor; // ivar: _outerColor
@property (readonly, nonatomic) CGFloat outerRadius; // ivar: _outerRadius
@property (nonatomic, getter=hasShadow) BOOL shadow; // ivar: _shadow


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithOuterRadius:(CGFloat)arg0 outerColor:(id)arg1 middleRadius:(CGFloat)arg2 middleColor:(id)arg3 innerRadius:(CGFloat)arg4 innerColor:(id)arg5 ;


@end


#endif