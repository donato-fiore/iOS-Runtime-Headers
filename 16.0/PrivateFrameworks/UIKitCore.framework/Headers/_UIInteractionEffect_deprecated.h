// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIINTERACTIONEFFECT_DEPRECATED_H
#define _UIINTERACTIONEFFECT_DEPRECATED_H

@class NSString;
@protocol _UIDynamicReferenceSystem;

#import <Foundation/Foundation.h>

#import "UIDynamicAnimator.h"
#import "_UIDynamicTransformer.h"
#import "_UISpringBehavior.h"
#import "UIPushBehavior.h"
#import "UIDynamicItemBehavior.h"

@interface _UIInteractionEffect_deprecated : NSObject <_UIDynamicReferenceSystem>

 {
    UIDynamicAnimator *_animator;
    _UIDynamicTransformer *_transformer;
    _UISpringBehavior *_springBehavior;
    UIPushBehavior *_forceBehavior;
    UIDynamicItemBehavior *_itemProperties;
    CGFloat _damping;
    CGFloat _frequency;
    CGFloat _density;
    CGFloat _resistance;
    CGAffineTransform _preferredContentTransform;
    CGFloat _progress;
}


@property (readonly, nonatomic) CGRect bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat forceFactor; // ivar: _forceFactor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGAffineTransform preferredContentTransform;
@property (readonly, nonatomic) CGFloat progress;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock


-(id)init;
-(void)_prepareAnimatorIfNeeded;
-(void)_stopAnimations;
-(void)_updateAnimatorIfNeeded;
-(void)_updateFromTransformer:(id)arg0 ;


@end


#endif