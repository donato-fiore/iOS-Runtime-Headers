// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKCURVEPOINT_H
#define AKCURVEPOINT_H


#import <Foundation/Foundation.h>


@interface AKCurvePoint : NSObject

@property (nonatomic) CGPoint CGPoint;
@property (nonatomic) CGPoint leftTangentPoint; // ivar: _leftTangentPoint
@property (nonatomic) CGPoint rightTangentPoint; // ivar: _rightTangentPoint
@property (nonatomic) CGFloat roundness; // ivar: _roundness
@property (nonatomic) CGFloat smoothness; // ivar: _smoothness
@property (nonatomic) CGFloat x; // ivar: _x
@property (nonatomic) CGFloat y; // ivar: _y


+(id)pointWithCGPoint:(struct CGPoint )arg0 ;
+(id)pointWithX:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(id)initWithX:(CGFloat)arg0 y:(CGFloat)arg1 ;


@end


#endif