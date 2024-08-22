// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCYCLECONTINUOUSEXPOSEGROUPAPPLAYOUTSSWITCHERMODIFIER_H
#define SBCYCLECONTINUOUSEXPOSEGROUPAPPLAYOUTSSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBCycleContinuousExposeGroupAppLayoutsSwitcherModifier : SBSwitcherModifier {
    BOOL _isDelayingCompletionForHover;
    NSUInteger _initialGenerationCount;
    SBAppLayout *_appLayoutToOrderFront;
}


@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) SBAppLayout *behindAppLayout; // ivar: _behindAppLayout
@property (readonly, nonatomic) NSUInteger generationCount; // ivar: _generationCount


-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(id)_completeIfNeeded;
-(id)_completeIfNeededIgnoringHover:(BOOL)arg0 ;
-(id)_timeoutReason;
-(id)appLayoutsForContinuousExposeIdentifier:(id)arg0 ;
-(id)handleContinuousExposeIdentifiersChangedEvent:(id)arg0 ;
-(id)handleHighlightEvent:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 behindAppLayout:(id)arg1 generationCount:(NSUInteger)arg2 ;
-(id)visibleAppLayouts;


@end


#endif