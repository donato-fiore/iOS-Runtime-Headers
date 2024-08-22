// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKELECTROCARDIOGRAMCHARTTABLEVIEWCELL_H
#define HKELECTROCARDIOGRAMCHARTTABLEVIEWCELL_H

@class UITableViewCell, UIScrollView;


#import "HKElectrocardiogramAxisView.h"
#import "HKElectrocardiogramChartView.h"
#import "HKElectrocardiogramInfoView.h"

@interface HKElectrocardiogramChartTableViewCell : UITableViewCell

@property (retain, nonatomic) HKElectrocardiogramAxisView *axisView; // ivar: _axisView
@property (retain, nonatomic) HKElectrocardiogramChartView *chartView; // ivar: _chartView
@property (readonly, nonatomic) CGSize gridSize;
@property (retain, nonatomic) HKElectrocardiogramInfoView *infoView; // ivar: _infoView
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView


-(id)initWithGridSize:(struct CGSize )arg0 reuseIdentifier:(id)arg1 ;
-(void)_setUpScrollViewContent;
-(void)_setUpUI;
-(void)_updateMargins;
-(void)layoutMarginsDidChange;


@end


#endif