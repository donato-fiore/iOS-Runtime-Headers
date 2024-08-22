// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARANIMATION_H
#define _UISTATUSBARANIMATION_H

@class NSMutableArray, NSSet, NSString;
@protocol NSCopying, _UIStatusBarPrioritized;

#import <Foundation/Foundation.h>

#import "_UIStatusBarIdentifier.h"
#import "_UIStatusBarAnimation.h"

@interface _UIStatusBarAnimation : NSObject <NSCopying, _UIStatusBarPrioritized>



@property (copy, nonatomic) id *animationBlock; // ivar: _animationBlock
@property (retain, nonatomic) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (copy, nonatomic) NSSet *delayedDisplayItemPlacements; // ivar: _delayedDisplayItemPlacements
@property (copy, nonatomic) NSSet *delayedItemIdentifiers; // ivar: _delayedItemIdentifiers
@property (nonatomic) BOOL delaysAnimatingItems; // ivar: _delaysAnimatingItems
@property (nonatomic) BOOL delaysDependentItems; // ivar: _delaysDependentItems
@property (copy, nonatomic) _UIStatusBarIdentifier *displayItemIdentifier; // ivar: _displayItemIdentifier
@property (readonly, nonatomic) NSSet *effectiveDelayedItemIdentifiers;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSString *exclusivityGroupIdentifier; // ivar: _exclusivityGroupIdentifier
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (weak, nonatomic) _UIStatusBarAnimation *parentAnimation; // ivar: _parentAnimation
@property (copy, nonatomic) id *prepareBlock; // ivar: _prepareBlock
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (retain, nonatomic) NSMutableArray *subAnimations; // ivar: _subAnimations
@property (nonatomic) NSInteger type; // ivar: _type


+(id)animationWithBlock:(id)arg0 ;
+(void)_addAnimations:(id)arg0 toDispatchGroup:(id)arg1 ;
+(void)_addAnimations:(id)arg0 toPreparingAnimations:(id)arg1 exclusiveAnimations:(id)arg2 visitedDisplayItemIdentifiers:(id)arg3 ;
+(void)initialize;
+(void)prepareAnimations:(id)arg0 forStatusBar:(id)arg1 ;
-(id)_dependentItemIdentifiersEnabledOnly:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)_prepareForStatusBar:(id)arg0 preparingAnimations:(id)arg1 exclusiveAnimations:(id)arg2 ;
-(void)addCompletionHandler:(id)arg0 ;
-(void)addSubAnimation:(id)arg0 forDisplayItemWithIdentifier:(id)arg1 ;
-(void)addTotalCompletionHandler:(id)arg0 ;
-(void)cancel;
-(void)performForStatusBar:(id)arg0 ;


@end


#endif