// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICHARTCOLUMNSVIEW_H
#define SKUICHARTCOLUMNSVIEW_H

@class UIView, NSArray, NSString, UIVisualEffectView;
@protocol SKUIFlexibleSegmentedControlDelegate;


#import "SKUIFlexibleSegmentedControl.h"

@interface SKUIChartColumnsView : UIView <SKUIFlexibleSegmentedControlDelegate>

 {
    NSInteger _animatingToNumberOfVisibleColumns;
    UIView *_borderView0;
    UIView *_borderView1;
    NSInteger _columnChangeAnimationCount;
    NSArray *_columnViews;
    UIView *_headerBackgroundView;
    UIView *_headerBackgroundBottomBorder;
    NSArray *_headerViews;
    SKUIFlexibleSegmentedControl *_segmentedControl;
}


@property (copy, nonatomic) NSArray *chartViewControllers; // ivar: _allViewControllers
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger numberOfVisibleColumns; // ivar: _numberOfVisibleColumns
@property (readonly) Class superclass;


-(id)_headerViewWithViewControllers:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_headerViewAction:(id)arg0 ;
-(void)_reloadColumnViews;
-(void)beginColumnChangeAnimationToNumberOfVisibleColumns:(NSInteger)arg0 ;
-(void)dealloc;
-(void)endColumnChangeAnimation;
-(void)layoutSubviews;
-(void)segmentedControl:(id)arg0 didSelectSegmentIndex:(NSInteger)arg1 ;


@end


#endif