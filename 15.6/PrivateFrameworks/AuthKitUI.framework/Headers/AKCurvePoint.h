// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKCURVEPOINT_H
#define AKCURVEPOINT_H


#import <Foundation/Foundation.h>


@interface AKCurvePoint : NSObject

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