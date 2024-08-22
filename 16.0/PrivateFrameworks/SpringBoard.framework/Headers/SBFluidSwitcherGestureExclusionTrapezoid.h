// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERGESTUREEXCLUSIONTRAPEZOID_H
#define SBFLUIDSWITCHERGESTUREEXCLUSIONTRAPEZOID_H

@class NSString;
@protocol SBFluidSwitcherGestureExclusionShape;

#import <Foundation/Foundation.h>


@interface SBFluidSwitcherGestureExclusionTrapezoid : NSObject <SBFluidSwitcherGestureExclusionShape>



@property (nonatomic) CGFloat adjacentBaseXDistanceFromEdge; // ivar: _adjacentBaseXDistanceFromEdge
@property (nonatomic) BOOL allowHorizontalSwipesOutsideTrapezoid; // ivar: _allowHorizontalSwipesOutsideTrapezoid
@property (nonatomic) CGFloat baseHeight; // ivar: _baseHeight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat opposingBaseXDistanceFromEdge; // ivar: _opposingBaseXDistanceFromEdge
@property (readonly) Class superclass;
@property (nonatomic) CGFloat trapezoidHeight; // ivar: _trapezoidHeight


+(id)exclusionTrapezoidWithBaseHeight:(CGFloat)arg0 trapezoidHeight:(CGFloat)arg1 adjacentBaseXDistanceFromEdge:(CGFloat)arg2 opposingBaseXDistanceFromEdge:(CGFloat)arg3 allowHorizontalSwipesOutsideTrapezoid:(BOOL)arg4 ;
-(BOOL)shouldBeginGestureAtStartingPoint:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 bounds:(struct CGRect )arg2 ;
-(id)debugView;


@end


#endif