// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCOACHINGQUATERNIONSPRING_H
#define ARCOACHINGQUATERNIONSPRING_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ARCoachingQuaternionSpring : NSObject {
    NSArray *_springs;
    CGFloat _response;
    CGFloat _dampingRatio;
}


@property (nonatomic) CGFloat dampingRatio;
@property (nonatomic) CGFloat response;
@property (readonly, nonatomic) NSArray *springs;
@property (nonatomic) ? target;
@property (nonatomic) ? value;
@property (nonatomic) ? velocity;


-(id)init;
-(void)stepWithDeltaTime:(CGFloat)arg0 ;


@end


#endif