// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLESWIPESELECTIONMANAGER_H
#define PXPEOPLESWIPESELECTIONMANAGER_H

@class NSIndexPath, NSString, UIScrollView, NSSet, UIGestureRecognizer;
@protocol PXAutoScrollerDelegate, PXPeopleSwipeSelectionManagerDelegate;

#import <Foundation/Foundation.h>

#import "PXUIAutoScroller.h"

@interface PXPeopleSwipeSelectionManager : NSObject <PXAutoScrollerDelegate>

 {
    ? _needsUpdateFlags;
    ? _delegateFlags;
}


@property (readonly, nonatomic) PXUIAutoScroller *autoScroller; // ivar: _autoScroller
@property (retain, nonatomic) NSIndexPath *currentIndexPath; // ivar: _currentIndexPath
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXPeopleSwipeSelectionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSelecting;
@property (retain, nonatomic) id *pausingChangesToken; // ivar: _pausingChangesToken
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (copy, nonatomic) NSSet *selectedIndexPathsBeforeSwipe; // ivar: _selectedIndexPathsBeforeSwipe
@property (retain, nonatomic) NSIndexPath *startingIndexPath; // ivar: _startingIndexPath
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIGestureRecognizer *swipeGestureRecognizer; // ivar: _swipeGestureRecognizer


-(id)_itemIndexPathAtLocation:(struct CGPoint )arg0 ;
-(id)_itemIndexPathClosestAboveLocation:(struct CGPoint )arg0 ;
-(id)_itemIndexPathClosestLeadingLocation:(struct CGPoint )arg0 ;
-(id)init;
-(id)initWithScrollView:(id)arg0 ;
-(void)_beginSelectionFromIndexPath:(id)arg0 ;
-(void)_endSelection;
-(void)_handleSwipeSelectionGesture:(id)arg0 ;
-(void)_invalidateSelectedIndexPaths;
-(void)_updateSelectedIndexPaths;
-(void)_updateSelectionWithHitIndexPath:(id)arg0 leadingClosestIndexPath:(id)arg1 aboveClosestIndexPath:(id)arg2 ;
-(void)autoScroller:(id)arg0 didAutoscrollWithTimestamp:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif