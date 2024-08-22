// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15ACTIVITYRINGSUI15SPRINGANIMATION_H
#define _TTC15ACTIVITYRINGSUI15SPRINGANIMATION_H


#import <Foundation/Foundation.h>


@interface _TtC15ActivityRingsUI15SpringAnimation : NSObject {
    ? delay;
    ? remainingDelay;
    ? animationState;
}


@property (nonatomic, readonly) CGFloat target;
@property (nonatomic, readonly) CGFloat value;


-(BOOL)advanceWithDeltaTime:(CGFloat)arg0 ;
-(id)init;
-(id)initWithInitialValue:(CGFloat)arg0 delay:(CGFloat)arg1 ;
-(void)completeWithSnap;
-(void)configureWithTension:(CGFloat)arg0 friction:(CGFloat)arg1 target:(CGFloat)arg2 ;
-(void)updateTarget:(CGFloat)arg0 ;


@end


#endif