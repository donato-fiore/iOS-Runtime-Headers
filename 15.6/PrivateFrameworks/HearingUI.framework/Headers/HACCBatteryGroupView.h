// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HACCBATTERYGROUPVIEW_H
#define HACCBATTERYGROUPVIEW_H

@class UIView;


#import "HACCBatteryView.h"

@interface HACCBatteryGroupView : UIView

@property (retain, nonatomic) HACCBatteryView *bottomBatteryView; // ivar: _bottomBatteryView
@property (retain, nonatomic) HACCBatteryView *topBatteryView; // ivar: _topBatteryView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;
-(void)updateValueForDevice:(id)arg0 ;
-(void)updateValueForLeft:(CGFloat)arg0 right:(CGFloat)arg1 andAvailableEars:(int)arg2 ;


@end


#endif