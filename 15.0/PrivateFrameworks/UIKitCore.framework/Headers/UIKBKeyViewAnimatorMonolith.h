// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBKEYVIEWANIMATORMONOLITH_H
#define UIKBKEYVIEWANIMATORMONOLITH_H

@class NSMutableDictionary, NSString;
@protocol _UIFloatingContentViewDelegate;


#import "UIKBKeyViewAnimator.h"

@interface UIKBKeyViewAnimatorMonolith : UIKBKeyViewAnimator <_UIFloatingContentViewDelegate>

 {
    NSMutableDictionary *_selectedKeyTimestamps;
    NSMutableDictionary *_transitionCompletions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldAssertCurrentKeyState:(id)arg0 ;
-(BOOL)shouldPurgeKeyViews;
-(BOOL)shouldTransitionKeyView:(id)arg0 fromState:(int)arg1 toState:(int)arg2 ;
-(Class)keyViewClassForKey:(id)arg0 renderTraits:(id)arg1 screenTraits:(id)arg2 ;
-(NSInteger)_transitionFromState:(int)arg0 toState:(int)arg1 ;
-(NSUInteger)controlStateForKeyState:(int)arg0 ;
-(id)init;
// -(void)addTransitionCompletion:(id)arg0 forKeyName:(unk)arg1  ;
-(void)animateFloatingKeyView:(id)arg0 toControlState:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)floatingContentView:(id)arg0 didFinishTransitioningToState:(NSUInteger)arg1 ;
-(void)floatingContentView:(id)arg0 isTransitioningFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)reset;
-(void)transitionFloatingKeyView:(id)arg0 toState:(int)arg1 completion:(id)arg2 ;
-(void)transitionKeyView:(id)arg0 fromState:(int)arg1 toState:(int)arg2 completion:(id)arg3 ;
-(void)transitionOutKeyView:(id)arg0 fromState:(int)arg1 toState:(int)arg2 completion:(id)arg3 ;


@end


#endif