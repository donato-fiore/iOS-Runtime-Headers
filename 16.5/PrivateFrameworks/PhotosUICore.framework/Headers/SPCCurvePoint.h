// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPCCURVEPOINT_H
#define SPCCURVEPOINT_H


#import <Foundation/Foundation.h>


@interface SPCCurvePoint : NSObject

@property CGPoint CGPoint;
@property CGPoint leftTangentPoint; // ivar: _leftTangentPoint
@property CGPoint rightTangentPoint; // ivar: _rightTangentPoint
@property CGFloat roundness; // ivar: _roundness
@property CGFloat smoothness; // ivar: _smoothness
@property CGFloat x; // ivar: _x
@property CGFloat y; // ivar: _y


+(id)pointWithCGPoint:(struct CGPoint )arg0 ;
+(id)pointWithX:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(id)initWithX:(CGFloat)arg0 y:(CGFloat)arg1 ;


@end


#endif