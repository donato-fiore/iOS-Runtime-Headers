// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISIMPLEPRESSGESTURERECOGNIZER_H
#define _UISIMPLEPRESSGESTURERECOGNIZER_H

@class NSValue, NSArray, NSDictionary;


#import "UIGestureRecognizer.h"
#import "UIDelayedAction.h"

@interface _UISimplePressGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) NSValue *activeTrigger; // ivar: _activeTrigger
@property (retain, nonatomic) UIDelayedAction *delayedAction; // ivar: _delayedAction
@property (retain, nonatomic) NSArray *triggers; // ivar: _triggers
@property (retain, nonatomic) NSDictionary *triggersByPressType; // ivar: _triggersByPressType


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_begin;
-(void)_endOrFail;
-(void)dealloc;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;


@end


#endif