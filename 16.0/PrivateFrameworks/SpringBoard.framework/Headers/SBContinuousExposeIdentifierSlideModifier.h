// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCONTINUOUSEXPOSEIDENTIFIERSLIDEMODIFIER_H
#define SBCONTINUOUSEXPOSEIDENTIFIERSLIDEMODIFIER_H

@class NSString, NSOrderedSet;


#import "SBSwitcherModifier.h"

@interface SBContinuousExposeIdentifierSlideModifier : SBSwitcherModifier {
    BOOL _isWaitingToPrepareLayout;
    BOOL _isWaitingToBeginAnimation;
    BOOL _overrideWithPreviousIdentifiers;
}


@property (readonly, copy, nonatomic) NSString *continuousExposeIdentifier; // ivar: _continuousExposeIdentifier
@property (readonly, nonatomic) NSUInteger direction; // ivar: _direction
@property (readonly, copy, nonatomic) NSOrderedSet *previousContinuousExposeIdentifiers; // ivar: _previousContinuousExposeIdentifiers


-(id)_beginAnimation;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleContinuousExposeIdentifiersChangedEvent:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithContinuousExposeIdentifier:(id)arg0 previousContinuousExposeIdentifiers:(id)arg1 direction:(NSUInteger)arg2 ;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;


@end


#endif