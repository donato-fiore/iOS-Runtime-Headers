// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMADDITIVEANIMATOR_H
#define CAMADDITIVEANIMATOR_H

@class NSMutableDictionary, CADisplayLink;
@protocol CAMAdditiveAnimatorDelegate;

#import <Foundation/Foundation.h>


@interface CAMAdditiveAnimator : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_animations; // ivar: __animations
@property (retain, nonatomic) CADisplayLink *_displayLink; // ivar: __displayLink
@property (readonly, nonatomic) NSMutableDictionary *_values; // ivar: __values
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (weak, nonatomic) NSObject<CAMAdditiveAnimatorDelegate> *delegate; // ivar: _delegate


-(BOOL)isAnimatingForKey:(id)arg0 ;
-(CGFloat)valueForKey:(id)arg0 ;
-(id)init;
-(void)_handleDisplayLinkFired:(id)arg0 ;
-(void)_updateDisplayLink;
-(void)dealloc;
-(void)setValue:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setValue:(CGFloat)arg0 forKey:(id)arg1 duration:(CGFloat)arg2 timingCurve:(id)arg3 ;


@end


#endif