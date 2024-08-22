// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSSCROLLMANAGER_H
#define _UIFOCUSSCROLLMANAGER_H

@class NSHashTable;

#import <Foundation/Foundation.h>

#import "UIScreen.h"
#import "_UIFocusDisplayLinkScrollAnimator.h"

@interface _UIFocusScrollManager : NSObject

@property (readonly, weak, nonatomic) UIScreen *screen; // ivar: _screen
@property (readonly, nonatomic) _UIFocusDisplayLinkScrollAnimator *scrollAnimator; // ivar: _scrollAnimator
@property (readonly, nonatomic) NSHashTable *stackVisitedScrollingContainers; // ivar: _stackVisitedScrollingContainers


-(BOOL)isScrollingScrollableContainer:(id)arg0 ;
-(id)initWithScreen:(id)arg0 ;
-(struct CGPoint )_contentOffsetConsideredCurrentForScrollableContainer:(id)arg0 ;
-(struct CGPoint )_contentOffsetForNonPagingContainer:(id)arg0 toShowFocusItemWithInfo:(id)arg1 itemFrame:(struct CGRect )arg2 heading:(NSUInteger)arg3 targetOffset:(struct CGPoint )arg4 targetBounds:(struct CGRect )arg5 ;
-(struct CGPoint )_contentOffsetForPagingContainer:(id)arg0 itemFrame:(struct CGRect )arg1 targetOffset:(struct CGPoint )arg2 ;
-(struct CGPoint )_contentOffsetForScrollableContainer:(id)arg0 toShowFocusItemWithInfo:(id)arg1 heading:(NSUInteger)arg2 ;
-(struct CGPoint )_contentOffsetForScrollableContainer:(id)arg0 toShowFocusItemWithInfo:(id)arg1 itemFrame:(struct CGRect )arg2 heading:(NSUInteger)arg3 targetOffset:(struct CGPoint )arg4 targetBounds:(struct CGRect )arg5 ;
-(struct CGPoint )_differentialScrollingContentOffsetForContainer:(id)arg0 toShowFocusItemWithInfo:(id)arg1 itemFrame:(struct CGRect )arg2 heading:(NSUInteger)arg3 targetOffset:(struct CGPoint )arg4 targetBounds:(struct CGRect )arg5 ;
-(struct CGPoint )contentOffsetForScrollableContainer:(id)arg0 toShowFocusItem:(id)arg1 targetOffset:(struct CGPoint )arg2 targetBounds:(struct CGRect )arg3 ;
-(struct CGPoint )contentOffsetForScrollableContainer:(id)arg0 toShowRect:(struct CGRect )arg1 targetOffset:(struct CGPoint )arg2 targetBounds:(struct CGRect )arg3 ;
-(struct CGPoint )currentVelocityForScrollableContainer:(id)arg0 ;
-(struct CGPoint )targetContentOffsetForScrollableContainer:(id)arg0 ;
-(void)_ensureFocusItemIsOnscreen:(id)arg0 inEnvironmentScrollableContainer:(id)arg1 heading:(NSUInteger)arg2 ;
-(void)_scrollToFocusItemWithInfo:(id)arg0 offset:(struct CGPoint )arg1 inEnvironmentScrollableContainer:(id)arg2 heading:(NSUInteger)arg3 ;
-(void)adjustTargetContentOffsetForScrollableContainer:(id)arg0 byDelta:(struct CGPoint )arg1 ;
-(void)animateOffsetOfEnvironmentScrollableContainer:(id)arg0 toShowFocusItem:(id)arg1 ;
-(void)animateOffsetOfScrollableContainersInParentEnvironmentContainer:(id)arg0 toShowFocusItem:(id)arg1 ;
-(void)cancelScrollingForScrollableContainer:(id)arg0 ;
-(void)performScrollingIfNeededForFocusUpdateInContext:(id)arg0 ;


@end


#endif