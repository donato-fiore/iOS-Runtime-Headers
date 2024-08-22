// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSBATTERYGROUPVIEW_H
#define HPSBATTERYGROUPVIEW_H

@class UIView, UIImageView, NSString;



@interface HPSBatteryGroupView : UIView {
    unsigned char batteryPercentNumber;
    UIImageView *batteryGlyphView;
    NSString *batteryLevelDescription;
}




-(id)initWithFrame:(struct CGRect )arg0 batteryPercent:(unsigned char)arg1 glyph:(id)arg2 batteryLevelDescription:(id)arg3 ;
-(void)createBatteryGroupView;


@end


#endif