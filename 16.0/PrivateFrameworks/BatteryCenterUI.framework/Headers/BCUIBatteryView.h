// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCUIBATTERYVIEW_H
#define BCUIBATTERYVIEW_H

@class UIStaticBatteryView;



@interface BCUIBatteryView : UIStaticBatteryView {
    BOOL _lowBattery;
}


@property (nonatomic, getter=isLowBattery) BOOL lowBattery;


-(id)init;
-(id)initWithSizeCategory:(NSInteger)arg0 ;


@end


#endif