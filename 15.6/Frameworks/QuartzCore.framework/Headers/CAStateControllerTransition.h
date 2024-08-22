// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CASTATECONTROLLERTRANSITION_H
#define CASTATECONTROLLERTRANSITION_H

@class NSString, NSMutableArray;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>

#import "CAStateController.h"
#import "CALayer.h"
#import "CAStateTransition.h"

@interface CAStateControllerTransition : NSObject <CAAnimationDelegate>

 {
    CAStateController *_controller;
    NSString *_masterKey;
    NSMutableArray *_animations;
}


@property (readonly, nonatomic) CGFloat beginTime; // ivar: _beginTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (readonly, nonatomic) float speed; // ivar: _speed
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAStateTransition *transition; // ivar: _transition


-(id)init;
-(void)addAnimation:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeAnimationFromLayer:(id)arg0 forKey:(id)arg1 ;


@end


#endif