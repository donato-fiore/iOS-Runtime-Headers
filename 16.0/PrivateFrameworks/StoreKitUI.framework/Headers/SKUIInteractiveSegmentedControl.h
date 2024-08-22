// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIINTERACTIVESEGMENTEDCONTROL_H
#define SKUIINTERACTIVESEGMENTEDCONTROL_H

@class UIControl, NSMutableArray, NSArray;



@interface SKUIInteractiveSegmentedControl : UIControl {
    NSMutableArray *_dividerViews;
}


@property (copy, nonatomic) id *dividerCreationBlock; // ivar: _dividerCreationBlock
@property (nonatomic) CGFloat dividerWidth; // ivar: _dividerWidth
@property (copy, nonatomic) NSArray *segments; // ivar: _segments
@property (nonatomic) CGFloat selectionProgress; // ivar: _selectionProgress


-(CGFloat)relativeSelectionProgressForSelectionProgress:(CGFloat)arg0 segmentIndex:(NSInteger)arg1 ;
-(CGFloat)selectionProgressForRelativeSectionProgress:(CGFloat)arg0 segmentIndex:(NSInteger)arg1 ;
-(CGFloat)selectionProgressForSelectedSegmentAtIndex:(NSInteger)arg0 ;
-(NSInteger)selectedSegmentIndexForSelectionProgress:(CGFloat)arg0 ;
-(id)_createDividerViewWithFrame:(struct CGRect )arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applySelectionProgressToSegments;
-(void)_notifyClientsOfSelectionProgressChange;
-(void)_registerForObservationOfSegment:(id)arg0 ;
-(void)_segmentControlTouchUpInsideAction:(id)arg0 ;
-(void)_unregisterForObservationOfSegment:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif