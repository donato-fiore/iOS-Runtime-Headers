// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITRACKINGLAYOUTGUIDE_H
#define UITRACKINGLAYOUTGUIDE_H

@class NSMutableDictionary, NSDictionary;


#import "UILayoutGuide.h"

@interface UITrackingLayoutGuide : UILayoutGuide

@property (nonatomic) BOOL animatesChanges; // ivar: _animatesChanges
@property (nonatomic) BOOL animatingConstraintsChange; // ivar: _animatingConstraintsChange
@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (nonatomic) NSUInteger animationOptions; // ivar: _animationOptions
@property (retain, nonatomic) NSMutableDictionary *awayFromConstraintsByEdge; // ivar: _awayFromConstraintsByEdge
@property (nonatomic) BOOL constrainedToWindowGuide;
@property (nonatomic) BOOL constrainedToWindowGuide; // ivar: _constrainedToWindowGuide
@property (readonly, nonatomic) NSDictionary *edgeConstraints;
@property (retain, nonatomic) NSMutableDictionary *nearEdgeConstraintsByEdge; // ivar: _nearEdgeConstraintsByEdge
@property (nonatomic) NSUInteger overlappingEdges; // ivar: _overlappingEdges
@property (nonatomic) NSInteger owningViewInterfaceLayoutDirection; // ivar: _owningViewInterfaceLayoutDirection
@property (nonatomic) NSUInteger pausedEdges; // ivar: _pausedEdges
@property (nonatomic) UIEdgeInsets triggerInsetsForLandscape; // ivar: _triggerInsetsForLandscape
@property (nonatomic) UIEdgeInsets triggerInsetsForPortrait; // ivar: _triggerInsetsForPortrait
@property (nonatomic) UIEdgeInsets triggerProportions; // ivar: _triggerProportions


-(BOOL)_isRTL;
-(BOOL)changeOffsetConstants:(struct UIOffset )arg0 ;
-(BOOL)changeSizingConstants:(struct CGSize )arg0 ;
-(id)_keysFromEdges:(NSUInteger)arg0 ;
-(id)_keysInvolvingEdges:(NSUInteger)arg0 ;
-(id)constraintsActiveWhenAwayFromEdge:(NSUInteger)arg0 ;
-(id)constraintsActiveWhenNearEdge:(NSUInteger)arg0 ;
-(id)init;
-(void)_createThresholdsFromProportions;
-(void)_layoutOwningViewAnimated:(BOOL)arg0 ;
-(void)_setOwningView:(id)arg0 ;
-(void)_thresholdCheck;
-(void)_thresholdCheckForGuide:(struct CGRect )arg0 inContext:(struct CGRect )arg1 ;
-(void)_updateForOverlappingEdges:(NSUInteger)arg0 ;
-(void)enableAnimations:(BOOL)arg0 ;
-(void)pauseUpdatingConstraintsForEdges:(NSUInteger)arg0 ;
-(void)removeAllTrackedConstraints;
-(void)setConstraints:(id)arg0 activeWhenAwayFromEdge:(NSUInteger)arg1 ;
-(void)setConstraints:(id)arg0 activeWhenNearEdge:(NSUInteger)arg1 ;
-(void)setEdgeThresholds:(struct UIEdgeInsets )arg0 forOrientation:(NSInteger)arg1 ;
-(void)setProportionalEdgeThresholds:(struct UIEdgeInsets )arg0 ;
-(void)startUpdatingConstraintsForEdges:(NSUInteger)arg0 ;
-(void)stopTrackingConstraintsForEdge:(NSUInteger)arg0 ;
-(void)trackConstraintsFromViewBasedGuide:(id)arg0 ;
-(void)updateAnimationDuration:(CGFloat)arg0 options:(NSUInteger)arg1 ;
-(void)updateConstraintsForActiveEdges;


@end


#endif