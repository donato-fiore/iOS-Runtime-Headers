// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFORCEPRESSGESTURESTATETRACKINGSWITCHERMODIFIER_H
#define SBFORCEPRESSGESTURESTATETRACKINGSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBForcePressGestureStateTrackingSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
}


@property (readonly, nonatomic) CGPoint averageVelocity; // ivar: _averageVelocity
@property (readonly, nonatomic) BOOL didBeginPanning; // ivar: _didBeginPanning
@property (readonly, nonatomic) BOOL didPop; // ivar: _didPop
@property (readonly, nonatomic) CGFloat forceProgress; // ivar: _forceProgress
@property (readonly, nonatomic) CGFloat panProgress; // ivar: _panProgress
@property (readonly, nonatomic) CGFloat panTranslationThreshold; // ivar: _panTranslationThreshold
@property (readonly, nonatomic) CGPoint velocity; // ivar: _velocity


-(BOOL)_canCommitToSwitcherWithPanPercent:(CGFloat)arg0 forceComplete:(BOOL)arg1 ;
-(CGFloat)_currentProgressForGestureEvent:(id)arg0 ;
-(CGFloat)_projectedTranslationWithVelocity:(struct CGPoint )arg0 initialTranslation:(CGFloat)arg1 ;
-(NSInteger)_currentFinalDestination;
-(id)_responseForActivatingFinalDestination:(NSInteger)arg0 ;
-(id)_updateForGestureDidBeginWithGestureEvent:(id)arg0 ;
-(id)_updateForGestureDidChangeWithGestureEvent:(id)arg0 ;
-(id)_updateForGestureDidEndWithGestureEvent:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)initWithSelectedAppLayout:(id)arg0 ;
-(void)_updateForcePressTrackingWithGestureEvent:(id)arg0 ;


@end


#endif