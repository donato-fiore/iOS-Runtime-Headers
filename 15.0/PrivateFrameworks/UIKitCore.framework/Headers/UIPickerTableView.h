// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPICKERTABLEVIEW_H
#define UIPICKERTABLEVIEW_H

@class NSMutableIndexSet, NSMutableArray, NSString;
@protocol UITableViewDelegate;


#import "UITableView.h"
#import "UIColor.h"

@interface UIPickerTableView : UITableView <UITableViewDelegate>

 {
    NSMutableIndexSet *_checkedRows;
    CGFloat _lastClickedOffset;
    UIColor *_textColor;
    CGRect _visibleRect;
    NSMutableArray *_referencingCells;
    ? _pickerTableFlags;
}


@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL generatorActivated; // ivar: _generatorActivated
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lastSelectedRow; // ivar: _lastSelectedRow
@property (getter=_playsFeedback, setter=_setPlaysFeedback:) BOOL playsFeedback; // ivar: _playsFeedback
@property (nonatomic) CGRect selectionBarRect; // ivar: _selectionBarRect
@property (nonatomic, setter=_setSelectionBarRow:) NSInteger selectionBarRow; // ivar: _selectionBarRow
@property (readonly) Class superclass;


+(BOOL)_isInternalTableView;
-(BOOL)_beginTrackingWithEvent:(id)arg0 ;
-(BOOL)_scrollRowAtIndexPathToSelectionBar:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)_shouldWrapCells;
-(BOOL)didSelectDisabled:(BOOL)arg0 ;
-(BOOL)isRowChecked:(NSInteger)arg0 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(BOOL)selectRow:(NSInteger)arg0 animated:(BOOL)arg1 notify:(BOOL)arg2 ;
-(BOOL)selectRow:(NSInteger)arg0 animated:(BOOL)arg1 notify:(BOOL)arg2 updateChecked:(BOOL)arg3 ;
-(CGFloat)_distanceToCenterForY:(CGFloat)arg0 ;
-(CGFloat)_rotationForCellCenterY:(CGFloat)arg0 ;
-(CGFloat)_unitYForViewY:(CGFloat)arg0 ;
-(CGFloat)_viewYForUnitY:(CGFloat)arg0 ;
-(CGFloat)_yForY:(CGFloat)arg0 ;
-(CGFloat)_yRangingFromZeroTo:(CGFloat)arg0 forUnitY:(CGFloat)arg1 ;
-(CGFloat)_zCoordinateForYCoordinate:(CGFloat)arg0 ;
-(CGFloat)_zForUnitY:(CGFloat)arg0 ;
-(NSInteger)_contentInsetAdjustmentBehavior;
-(id)_anyDateLabel;
-(id)_checkedRows;
-(id)_containerView;
-(id)_pickerView;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 visibleRect:(struct CGRect )arg2 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(struct CATransform3D )_transformForCellAtY:(CGFloat)arg0 ;
-(struct CGPoint )contentOffsetForRowAtIndexPath:(id)arg0 ;
-(struct CGRect )_selectionBarRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )_visibleBounds;
-(void)_deactivateFeedbackGeneratorIfNeeded;
-(void)_notifyContentOffsetChange;
-(void)_playClickIfNecessary;
-(void)_rectChangedWithNewSize:(struct CGSize )arg0 oldSize:(struct CGSize )arg1 ;
-(void)_scrollViewAnimationEnded:(id)arg0 finished:(BOOL)arg1 ;
-(void)_scrollViewDidInterruptDecelerating:(id)arg0 ;
-(void)_scrollingFinished;
-(void)_setContentOffset:(struct CGPoint )arg0 notify:(BOOL)arg1 ;
-(void)_updateContentInsets;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif