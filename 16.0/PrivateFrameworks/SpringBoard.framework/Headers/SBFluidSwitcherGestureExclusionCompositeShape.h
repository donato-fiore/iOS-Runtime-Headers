// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERGESTUREEXCLUSIONCOMPOSITESHAPE_H
#define SBFLUIDSWITCHERGESTUREEXCLUSIONCOMPOSITESHAPE_H

@class NSString, NSArray;
@protocol SBFluidSwitcherGestureExclusionShape;

#import <Foundation/Foundation.h>


@interface SBFluidSwitcherGestureExclusionCompositeShape : NSObject <SBFluidSwitcherGestureExclusionShape>



@property (nonatomic) BOOL allowHorizontalSwipesInsideShapes; // ivar: _allowHorizontalSwipesInsideShapes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *rects; // ivar: _rects
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topEdgeY; // ivar: _topEdgeY


+(id)exclusionCompositeShapeWithRects:(id)arg0 allowHorizontalSwipes:(BOOL)arg1 ;
-(BOOL)shouldBeginGestureAtStartingPoint:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 bounds:(struct CGRect )arg2 ;
-(id)debugView;


@end


#endif