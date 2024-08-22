// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIVIEWINSTANEOUSLYSTABLEANIMATION_H
#define UIVIEWINSTANEOUSLYSTABLEANIMATION_H

@class NSString;
@protocol UIIntervalAnimating, UIVectorOperatable;

#import <Foundation/Foundation.h>


@interface UIViewInstaneouslyStableAnimation : NSObject <UIIntervalAnimating>

 {
    id<UIVectorOperatable> *_velocity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<UIVectorOperatable> *targetValue; // ivar: _targetValue


-(BOOL)isStable;
-(id)initWithTargetValue:(id)arg0 velocity:(id)arg1 ;
-(id)stepWithDelta:(CGFloat)arg0 ;
-(id)value;
-(id)velocity;
-(void)setVelocity:(id)arg0 ;


@end


#endif