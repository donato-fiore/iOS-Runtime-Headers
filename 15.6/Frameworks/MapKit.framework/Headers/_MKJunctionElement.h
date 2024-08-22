// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKJUNCTIONELEMENT_H
#define _MKJUNCTIONELEMENT_H


#import <Foundation/Foundation.h>


@interface _MKJunctionElement : NSObject

@property (nonatomic) CGFloat angle; // ivar: _angle
@property (nonatomic) CGPoint leftBasePoint; // ivar: _leftBasePoint
@property (nonatomic) CGPoint rightBasePoint; // ivar: _rightBasePoint


-(struct CGPoint )leftEdgePointAtDistanceFromBase:(CGFloat)arg0 ;
-(struct CGPoint )rightEdgePointAtDistanceFromBase:(CGFloat)arg0 ;


@end


#endif