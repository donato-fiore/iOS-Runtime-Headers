// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKSWIPETOEDITSTATEMACHINE_H
#define GKSWIPETOEDITSTATEMACHINE_H

@class GKStateMachine, UICollectionView, NSString, _UIDynamicAnimation, UIPanGestureRecognizer, NSIndexPath;
@protocol UIGestureRecognizerDelegate, GKSegmentedSectionDataSourceEventHandler;


#import "GKCancelSwipeToEditGestureRecognizer.h"
#import "GKCollectionViewCell.h"
#import "GKCollectionViewDataSource.h"

@interface GKSwipeToEditStateMachine : GKStateMachine <UIGestureRecognizerDelegate, GKSegmentedSectionDataSourceEventHandler>

 {
    int _debounce;
}


@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GKCancelSwipeToEditGestureRecognizer *editModeCancelRecognizer; // ivar: _editModeCancelRecognizer
@property (retain, nonatomic) GKCollectionViewCell *editingCell; // ivar: _editingCell
@property (retain, nonatomic) GKCollectionViewDataSource *gkDataSource; // ivar: _gkDataSource
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIDynamicAnimation *openAnimation; // ivar: _openAnimation
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (nonatomic) CGFloat startTrackingX; // ivar: _startTrackingX
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSIndexPath *trackedIndexPath;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)xPositionForTranslation:(struct CGPoint )arg0 ;
-(id)initWithCollectionView:(id)arg0 ;
-(void)didEnterAnimatingOpenState;
-(void)didEnterAnimatingShutState;
-(void)didEnterEditingState;
-(void)didEnterNothingState;
-(void)didExitAnimatingOpenState;
-(void)didExitEditingState;
-(void)didExitNothingState;
-(void)handleCancelTap:(id)arg0 ;
-(void)handlePan:(id)arg0 ;
-(void)segmentedSectionDataSource:(id)arg0 inSection:(NSUInteger)arg1 didSelectDataSourceWithIndex:(NSInteger)arg2 ;
-(void)setDelegate:(id)arg0 ;
-(void)shutActionPaneForEditingCellAnimated:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif