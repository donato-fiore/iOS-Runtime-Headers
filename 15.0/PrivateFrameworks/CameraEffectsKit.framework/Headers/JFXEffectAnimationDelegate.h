// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXEFFECTANIMATIONDELEGATE_H
#define JFXEFFECTANIMATIONDELEGATE_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface JFXEffectAnimationDelegate : NSObject <CAAnimationDelegate>



@property (nonatomic) BOOL animationDidBegin; // ivar: _animationDidBegin
@property (nonatomic) BOOL animationDidEnd; // ivar: _animationDidEnd
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)animateWithCompletion:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif