// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSREGIONMAP_H
#define _UIFOCUSREGIONMAP_H


#import <Foundation/Foundation.h>

#import "UIFocusSystem.h"
#import "_UIFocusRegionMapSnapshot.h"
#import "UIView.h"

@interface _UIFocusRegionMap : NSObject

@property (retain, nonatomic) UIFocusSystem *focusSystem; // ivar: _focusSystem
@property (retain, nonatomic) _UIFocusRegionMapSnapshot *lastSnapshot; // ivar: _lastSnapshot
@property (nonatomic) CGRect minimumSearchArea; // ivar: _minimumSearchArea
@property (weak, nonatomic) UIView *rootView; // ivar: _rootView


-(BOOL)_containsFocusableRegionForView:(id)arg0 ;
-(id)_closestFocusableRegionInArray:(id)arg0 toPoint:(struct CGPoint )arg1 usingHeading:(NSUInteger)arg2 withFocusedView:(id)arg3 consideringFavoredRegion:(BOOL)arg4 includingFocusedView:(BOOL)arg5 ;
-(id)_contextWithSourceView:(id)arg0 focusedContainerGuide:(id)arg1 movement:(id)arg2 ;
-(id)_contextWithSourceView:(id)arg0 focusedRegion:(id)arg1 movement:(id)arg2 ;
-(id)_nearestCandidateForFocusMovement:(id)arg0 fromFocusedView:(id)arg1 withFocusedRect:(struct CGRect )arg2 includingFocusedView:(BOOL)arg3 ;
-(id)debugQuickLookObject;
-(id)initWithRootView:(id)arg0 focusSystem:(id)arg1 ;
-(id)linearlyOrderedCandidatesForFocusMovement:(id)arg0 fromView:(id)arg1 indexForFocusedView:(*NSUInteger)arg2 ;
-(id)linearlyOrderedFocusRegionMapEntriesForFocusMovement:(id)arg0 fromView:(id)arg1 ;
-(id)nearestCandidateFromRect:(struct CGRect )arg0 ;
-(struct CGPoint )_focusCandidateSearchOriginForFocusedFrame:(struct CGRect )arg0 heading:(NSUInteger)arg1 minimumSearchArea:(struct CGRect )arg2 ;
-(struct CGRect )_focusCandidateSearchRectForFocusedFrame:(struct CGRect )arg0 heading:(NSUInteger)arg1 minimumSearchArea:(struct CGRect )arg2 ;
-(struct CGRect )_rectThatJustBarelyIntersectsRect:(struct CGRect )arg0 startingRect:(struct CGRect )arg1 ;
-(struct CGRect )_viewSearchRectForFocusedFrame:(struct CGRect )arg0 focusCandidateSearchRect:(struct CGRect )arg1 includesFocusedFrame:(BOOL)arg2 ;
-(struct CGRect )_viewSearchRectForSnapshotRect:(struct CGRect )arg0 ;


@end


#endif