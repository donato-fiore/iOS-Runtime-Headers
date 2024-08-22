// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREWARDSSUMMARYBARVIEWWRAPPER_H
#define PKREWARDSSUMMARYBARVIEWWRAPPER_H

@class UIView;


#import "PKSegmentedBarView.h"
#import "PKRewardsSummaryChartBarConfiguration.h"

@interface PKRewardsSummaryBarViewWrapper : UIView {
    PKSegmentedBarView *_barView;
    PKRewardsSummaryChartBarConfiguration *_configuration;
}




-(id)initWithBarView:(id)arg0 configuration:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif