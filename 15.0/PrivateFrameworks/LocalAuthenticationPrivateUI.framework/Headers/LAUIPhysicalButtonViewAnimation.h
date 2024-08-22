// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LAUIPHYSICALBUTTONVIEWANIMATION_H
#define LAUIPHYSICALBUTTONVIEWANIMATION_H

@class CALayer, NSString;

#import <Foundation/Foundation.h>

#import "LAUIPhysicalButtonView.h"

@interface LAUIPhysicalButtonViewAnimation : NSObject {
    LAUIPhysicalButtonView *_physicalButtonView;
    CALayer *_layer;
    NSString *_animationKey;
}




-(BOOL)isRunning;
-(CGFloat)duration;
-(id)initWith:(id)arg0 layer:(id)arg1 ;
-(void)addAdditiveAnimation:(id)arg0 to:(id)arg1 keyPath:(id)arg2 ;
-(void)begin;
-(void)beginWithDelay:(CGFloat)arg0 ;
-(void)end;
-(void)endImmediately;
-(void)update;


@end


#endif