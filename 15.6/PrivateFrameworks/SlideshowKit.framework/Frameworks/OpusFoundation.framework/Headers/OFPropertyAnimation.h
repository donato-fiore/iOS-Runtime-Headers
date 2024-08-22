// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OFPROPERTYANIMATION_H
#define OFPROPERTYANIMATION_H

@class NSString, CAPropertyAnimation, NSTimer;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>

#import "OFPropertyAnimationLayer.h"

@interface OFPropertyAnimation : NSObject <CAAnimationDelegate>

 {
    NSString *_animationKey;
    OFPropertyAnimationLayer *_layer;
    CAPropertyAnimation *_propertyAnimation;
    NSTimer *_timer;
    id *_progressBlock;
    id *_completionBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// +(id)animateWithDuration:(CGFloat)arg0 rootLayer:(id)arg1 animation:(id)arg2 progress:(unk)arg3 completion:(id)arg4  ;
// +(id)interpolateValueForKey:(id)arg0 animation:(id)arg1 progress:(unk)arg2  ;
-(CGFloat)animatedFloat;
-(id)init;
-(struct CGPoint )animatedPoint;
-(void)_cleanup;
-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)handleTimer:(id)arg0 ;
-(void)setDestinationAnimatedFloat:(CGFloat)arg0 ;
-(void)setDestinationAnimatedPoint:(struct CGPoint )arg0 ;


@end


#endif