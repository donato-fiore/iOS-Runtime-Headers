// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEIDENTIFIERSLIDEMODIFIER_H
#define SBCONTINUOUSEXPOSEIDENTIFIERSLIDEMODIFIER_H

@class NSString, NSArray;


#import "SBSwitcherModifier.h"

@interface SBContinuousExposeIdentifierSlideModifier : SBSwitcherModifier {
    BOOL _isWaitingToPrepareLayout;
    BOOL _isWaitingToBeginAnimation;
    NSString *_uniqueAnimationIdentifier;
}


@property (readonly, copy, nonatomic) NSString *continuousExposeIdentifier; // ivar: _continuousExposeIdentifier
@property (readonly, nonatomic) NSUInteger direction; // ivar: _direction
@property (readonly, copy, nonatomic) NSArray *previousContinuousExposeIdentifiersInStrip; // ivar: _previousContinuousExposeIdentifiersInStrip
@property (readonly, copy, nonatomic) NSArray *previousContinuousExposeIdentifiersInSwitcher; // ivar: _previousContinuousExposeIdentifiersInSwitcher


-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)_beginAnimation;
-(id)_waitingToAnimateReason;
-(id)_waitingToPrepareLayoutReason;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleContinuousExposeIdentifiersChangedEvent:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithContinuousExposeIdentifier:(id)arg0 previousContinuousExposeIdentifiersInSwitcher:(id)arg1 previousContinuousExposeIdentifiersInStrip:(id)arg2 direction:(NSUInteger)arg3 ;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(void)_performBlockWithIdentifiersInSwitcher:(id)arg0 identifiersInStrip:(id)arg1 block:(id)arg2 ;


@end


#endif