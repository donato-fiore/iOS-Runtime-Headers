// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCOACHINGSPRINGDOUBLE3_H
#define ARCOACHINGSPRINGDOUBLE3_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ARCoachingSpringDouble3 : NSObject {
    NSArray *_springs;
    CGFloat _response;
    CGFloat _dampingRatio;
}


@property (nonatomic) CGFloat dampingRatio;
@property ? floatValue;
@property (nonatomic) CGFloat response;
@property (readonly, nonatomic) NSArray *springs;
@property ? target;
@property ? value;
@property ? velocity;


-(void)stepWithDeltaTime:(CGFloat)arg0 ;


@end


#endif