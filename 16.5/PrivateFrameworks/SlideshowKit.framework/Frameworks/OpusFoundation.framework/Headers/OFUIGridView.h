// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OFUIGRIDVIEW_H
#define OFUIGRIDVIEW_H

@class NSMutableArray, UIPinchGestureRecognizer, NSString;
@protocol OFUIWindowDraggingDestination, OFUIWindowDraggingSource, OFUIWindowDraggingAutoscroll, UIGestureRecognizerDelegate, OFUIGridViewDataSource, OFUIWindowDraggingSource><OFUIGridViewDragging, OFUIGridViewDelegate;


#import "OFUIScrollView.h"
#import "OFUIGridViewCell.h"
#import "OFUIGridViewController.h"

@interface OFUIGridView : OFUIScrollView <OFUIWindowDraggingDestination, OFUIWindowDraggingSource, OFUIWindowDraggingAutoscroll, UIGestureRecognizerDelegate>

 {
    NSUInteger _numberOfCellsPerRow;
    CGFloat _cellSpacePadding;
    NSUInteger _visibleIndexBegin;
    NSUInteger _visibleIndexEnd;
    NSMutableArray *_displayedCells;
    NSMutableArray *_recycledCells;
    BOOL _dirtyLayout;
    UIPinchGestureRecognizer *_liveResizingPinchGestureRecognizer;
    CGSize _cellSizeBeforeLiveResizing;
    CGPoint _fastPanningLastTranslation;
    OFUIGridViewCell *_lastCellUpdatedForMerge;
}


@property (nonatomic) BOOL allowAutoscroll; // ivar: _allowAutoscroll
@property (nonatomic) BOOL allowContinuousSelection; // ivar: _allowContinuousSelection
@property (nonatomic) BOOL allowFastPanning; // ivar: _allowFastPanning
@property (nonatomic) BOOL allowLiveResizing; // ivar: _allowLiveResizing
@property (nonatomic) BOOL allowSelectAll; // ivar: _allowSelectAll
@property (nonatomic) UIEdgeInsets borderInset; // ivar: _borderInset
@property (nonatomic) BOOL canUpdateCells; // ivar: _canUpdateCells
@property (nonatomic) CGSize cellSize; // ivar: _cellSize
@property (nonatomic) NSObject<OFUIGridViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger draggingDestinationCount; // ivar: _draggingDestinationCount
@property (nonatomic) NSInteger draggingDestinationIndex; // ivar: _draggingDestinationIndex
@property (nonatomic) NSObject<OFUIWindowDraggingSource><OFUIGridViewDragging> *draggingSource; // ivar: _draggingSource
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (nonatomic) OFUIGridViewController *gridViewController; // ivar: _gridViewController
@property (nonatomic) NSObject<OFUIGridViewDelegate> *gridViewDelegate; // ivar: _gridViewDelegate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDraggingIn; // ivar: _isDraggingIn
@property (nonatomic) BOOL isFastPanning; // ivar: _isFastPanning
@property (nonatomic) BOOL isLiveResizing; // ivar: _isLiveResizing
@property (nonatomic) CGSize maxCellSize; // ivar: _maxCellSize
@property (nonatomic) CGSize minCellSize; // ivar: _minCellSize
@property (nonatomic) CGFloat minimumCellSpacePadding; // ivar: _minimumCellSpacePadding
@property (nonatomic) NSUInteger numberOfCachedPages; // ivar: _numberOfCachedPages
@property (readonly, nonatomic) NSUInteger numberOfCells; // ivar: _numberOfCells
@property (nonatomic) NSUInteger orientation; // ivar: _orientation
@property (nonatomic) CGFloat percentageScrolledToRestore; // ivar: _percentageScrolledToRestore
@property (readonly) Class superclass;


-(BOOL)canAutoscroll;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isCellVisible:(id)arg0 ;
-(BOOL)isFrameEntirelyVisible:(struct CGRect )arg0 ;
-(BOOL)isFrameVisible:(struct CGRect )arg0 ;
-(BOOL)performDragOperation:(id)arg0 ;
-(BOOL)prepareForDragOperation:(id)arg0 ;
-(NSInteger)_indexAtPosition:(struct CGPoint )arg0 ;
-(NSUInteger)draggingDestinationEntered:(id)arg0 ;
-(NSUInteger)draggingDestinationUpdated:(id)arg0 ;
-(float)_autoscrollDistanceForProximityToEdge:(float)arg0 ;
-(float)autoscrollDistance:(struct CGRect )arg0 ;
-(id)cellAtIndex:(NSUInteger)arg0 ;
-(id)dequeueReusableCellWithIdentifier:(id)arg0 ;
-(id)displayedCellWithItem:(id)arg0 ;
-(id)displayedCells;
-(id)indexesForDisplayedCells;
-(id)indexesForVisibleCells;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)visibleCells;
-(struct CGPoint )_cellPositionAtIndex:(NSInteger)arg0 ;
-(struct CGPoint )draggingSource:(id)arg0 badgeCenterForItem:(id)arg1 ;
-(struct CGRect )draggingDestination:(id)arg0 originalFrameForItem:(id)arg1 ;
-(struct CGRect )draggingSource:(id)arg0 originalFrameForItem:(id)arg1 ;
-(struct CGSize )_bestContentSize;
-(struct CGSize )_cellSizeAtIndex:(NSInteger)arg0 ;
-(struct _NSRange )_displayedCellsRange;
-(void)_layoutSubviews;
-(void)_updateCells;
-(void)_updateContentSize;
-(void)autoscroll:(float)arg0 ;
-(void)cleanupDisplayedCells;
-(void)commonInit;
-(void)concludeDragOperation:(id)arg0 ;
-(void)dealloc;
-(void)deleteCellsAtIndexes:(id)arg0 animated:(BOOL)arg1 ;
-(void)draggingDestinationEnded:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)draggingDestinationExited:(id)arg0 ;
-(void)draggingSource:(id)arg0 cleanupItem:(id)arg1 ;
-(void)draggingSource:(id)arg0 prepareItem:(id)arg1 ;
-(void)forceLayout;
-(void)handleLiveResizingPinchGesture:(id)arg0 ;
-(void)handlePan:(id)arg0 ;
-(void)insertCellsAtIndexes:(id)arg0 animated:(BOOL)arg1 ;
-(void)moveCellsAtIndexes:(id)arg0 toIndexes:(id)arg1 animated:(BOOL)arg2 ;
-(void)prepareForUnloading;
-(void)reloadData;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateLayout:(BOOL)arg0 ;


@end


#endif