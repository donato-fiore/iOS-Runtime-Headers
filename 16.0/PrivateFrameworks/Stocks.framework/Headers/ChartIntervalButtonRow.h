// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHARTINTERVALBUTTONROW_H
#define CHARTINTERVALBUTTONROW_H

@class UIView, NSArray;
@protocol ChartIntervalButtonRowDelegate;


#import "ChartIntervalButton.h"

@interface ChartIntervalButtonRow : UIView

@property (weak, nonatomic) NSObject<ChartIntervalButtonRowDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *intervalButtons; // ivar: _intervalButtons
@property (nonatomic) NSInteger maxChartInterval; // ivar: _maxChartInterval
@property (weak, nonatomic) ChartIntervalButton *selectedButton; // ivar: _selectedButton


-(NSInteger)intervalForTouchLocation:(struct CGPoint )arg0 ;
-(id)initWithMaxChartInterval:(NSInteger)arg0 chartIntervalButtonRowDelegate:(id)arg1 ;
-(void)intervalButtonsTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)selectChartIntervalButtonForInterval:(NSInteger)arg0 ;
-(void)sizeToBoldLabels;
-(void)updateMaxChartInterval:(NSInteger)arg0 ;


@end


#endif