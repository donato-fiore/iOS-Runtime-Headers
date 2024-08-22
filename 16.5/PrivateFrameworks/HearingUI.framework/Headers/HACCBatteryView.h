// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HACCBATTERYVIEW_H
#define HACCBATTERYVIEW_H

@class UIView, UILabel, _UIBatteryView, NSNumberFormatter;



@interface HACCBatteryView : UIView {
    UILabel *_sideLabel;
    UILabel *_valueLabel;
    _UIBatteryView *_batteryView;
    NSNumberFormatter *_numberFormatter;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setValue:(CGFloat)arg0 forEar:(int)arg1 ;


@end


#endif