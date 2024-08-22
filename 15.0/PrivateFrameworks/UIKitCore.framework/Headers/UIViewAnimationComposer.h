// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIVIEWANIMATIONCOMPOSER_H
#define UIVIEWANIMATIONCOMPOSER_H

@class NSString;
@protocol UIViewAnimationComposing, UIVectorOperatable;

#import <Foundation/Foundation.h>


@interface UIViewAnimationComposer : NSObject <UIViewAnimationComposing>

 {
    CGFloat _previousInteractiveUpdateTimestamp;
    id *_previousInteractiveUpdateValue;
    id<UIVectorOperatable> *_previousTarget;
    BOOL _interactive;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<UIVectorOperatable> *targetVelocity; // ivar: _targetVelocity


-(BOOL)isActive;
-(id)composeAnimation:(id)arg0 withNewAnimationDescription:(id)arg1 interactive:(BOOL)arg2 currentValue:(id)arg3 targetValue:(id)arg4 ;
-(id)createAnimationFromDescription:(id)arg0 currentValue:(id)arg1 velocity:(id)arg2 targetValue:(id)arg3 ;
-(id)init;
-(id)projectValue:(id)arg0 decelerationFactor:(CGFloat)arg1 ;


@end


#endif