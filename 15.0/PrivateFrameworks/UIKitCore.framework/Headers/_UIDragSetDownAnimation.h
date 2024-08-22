// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDRAGSETDOWNANIMATION_H
#define _UIDRAGSETDOWNANIMATION_H

@class NSArray, CADisplayLink, NSString;
@protocol _UIDragSetDownItemAnimationDelegate;

#import <Foundation/Foundation.h>

#import "_UIDragSetDownAnimationWindow.h"
#import "UIViewPropertyAnimator.h"
#import "UIWindow.h"

@interface _UIDragSetDownAnimation : NSObject <_UIDragSetDownItemAnimationDelegate>

 {
    NSArray *_itemAnimations;
    id *_completion;
    BOOL _hasBegun;
    _UIDragSetDownAnimationWindow *_window;
    CADisplayLink *_displayLink;
    UIViewPropertyAnimator *_remainingItemsPropertyAnimator;
}


@property (retain, nonatomic) UIWindow *coordinateContainerWindow; // ivar: _coordinateContainerWindow
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIWindow *window;


+(BOOL)canAnimateItems:(id)arg0 forSource:(BOOL)arg1 policyDriven:(BOOL)arg2 ;
+(id)defaultDropAnimationForPlatterView:(SEL)arg0 ;
+(id)defaultMultiItemAnimationForPlatterView:(SEL)arg0 ;
+(id)defaultSetDownPropertyAnimator;
+(id)defaultSingleItemAnimationForPlatterView:(SEL)arg0 ;
-(id)initWithVisibleDroppedItems:(id)arg0 items:(id)arg1 forSource:(BOOL)arg2 policyDriven:(BOOL)arg3 completion:(id)arg4 ;
-(void)_allItemAnimationsCompleted;
-(void)begin;
-(void)itemAnimationCompleted:(id)arg0 ;
-(void)itemAnimationReachedTarget:(id)arg0 ;
-(void)updateInFlightAnimationTick:(id)arg0 ;
-(void)updateTargetedDragPreview:(id)arg0 forDragItem:(id)arg1 ;
-(void)updateVisibleDroppedItems:(id)arg0 ;


@end


#endif