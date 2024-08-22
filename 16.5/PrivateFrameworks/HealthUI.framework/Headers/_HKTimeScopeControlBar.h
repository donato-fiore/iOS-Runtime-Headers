// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKTIMESCOPECONTROLBAR_H
#define _HKTIMESCOPECONTROLBAR_H

@class UISegmentedControl;


#import "HKTimeScopeControl.h"

@interface _HKTimeScopeControlBar : HKTimeScopeControl {
    UISegmentedControl *_segments;
}




-(NSInteger)selectedTimeScope;
-(id)initWithFrame:(struct CGRect )arg0 timeScopes:(id)arg1 shortTextStyle:(BOOL)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_segmentValueChanged:(id)arg0 ;
-(void)layoutSubviews;
-(void)setSelectedTimeScope:(NSInteger)arg0 ;


@end


#endif