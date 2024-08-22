// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICIRCLEREPELLOR_H
#define SKUICIRCLEREPELLOR_H

@class PKPhysicsBody;

#import <Foundation/Foundation.h>


@interface SKUICircleRepellor : NSObject

@property (nonatomic) CGFloat bufferSize; // ivar: _bufferSize
@property (nonatomic) CGPoint center; // ivar: _center
@property (retain, nonatomic) PKPhysicsBody *physicsBody; // ivar: _physicsBody
@property (nonatomic) CGFloat radius; // ivar: _radius


-(id)description;


@end


#endif