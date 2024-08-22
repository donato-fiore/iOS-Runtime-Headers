// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINTERACTIVECHARTANNOTATIONVIEW_H
#define HKINTERACTIVECHARTANNOTATIONVIEW_H

@class UIView, NSTimer, UIButton, NSLayoutConstraint;
@protocol HKInteractiveChartAnnotationViewDataSource, HKInteractiveChartAnnotationViewDelegate;


#import "_HKBodyMarginsLayout.h"
#import "_HKAnnotationColumnLayout.h"
#import "_HKDateContentLayout.h"

@interface HKInteractiveChartAnnotationView : UIView

@property (retain, nonatomic) _HKBodyMarginsLayout *bodyMarginsLayout; // ivar: _bodyMarginsLayout
@property (retain, nonatomic) _HKAnnotationColumnLayout *columnLayout; // ivar: _columnLayout
@property (nonatomic) NSInteger context; // ivar: _context
@property (weak, nonatomic) NSObject<HKInteractiveChartAnnotationViewDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) _HKDateContentLayout *dateContentLayout; // ivar: _dateContentLayout
@property (weak, nonatomic) NSTimer *deferredNoDataTimer; // ivar: _deferredNoDataTimer
@property (weak, nonatomic) NSObject<HKInteractiveChartAnnotationViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *infoButton; // ivar: _infoButton
@property (retain, nonatomic) NSLayoutConstraint *leadingMarginConstraint; // ivar: _leadingMarginConstraint
@property (nonatomic) BOOL showsInfoButton; // ivar: _showsInfoButton
@property (retain, nonatomic) NSLayoutConstraint *trailingMarginConstraint; // ivar: _trailingMarginConstraint


-(CGFloat)_leadingMargin;
-(id)_buildInfoButton;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buildStandardAnnotationViews;
-(void)_cancelDeferredDataReload;
-(void)_configureLayout;
-(void)_invalidateLayout;
-(void)_removeViewsForRebuild;
-(void)handleCurrentTimeGesture:(id)arg0 ;
-(void)infoButtonPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)scheduleDeferredDataReload;
-(void)showNoDataStatus;


@end


#endif