// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIANIMATION_H
#define UIANIMATION_H


#import <Foundation/Foundation.h>


@interface UIAnimation : NSObject {
    id *_target;
    SEL _action;
    id *_delegate;
    id *_completion;
    ? _animationFlags;
    CGFloat _startTime;
    CGFloat _duration;
    int _state;
}




-(BOOL)usesNSTimer;
-(SEL)action;
-(float)fractionForTime:(CGFloat)arg0 ;
-(float)progressForFraction:(float)arg0 ;
-(id)completion:(SEL)arg0 ;
-(id)delegate;
-(id)initWithTarget:(id)arg0 ;
-(id)target;
-(int)state;
-(int)type;
-(void)markStart:(CGFloat)arg0 ;
-(void)markStop;
-(void)setAction:(SEL)arg0 ;
-(void)setAnimationCurve:(int)arg0 ;
-(void)setCompletion:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setDuration:(CGFloat)arg0 ;
-(void)setProgress:(float)arg0 ;
-(void)setUsesNSTimer:(BOOL)arg0 ;
-(void)stopAnimation;


@end


#endif