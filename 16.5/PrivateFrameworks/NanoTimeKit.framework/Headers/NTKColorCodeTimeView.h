// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCOLORCODETIMEVIEW_H
#define NTKCOLORCODETIMEVIEW_H

@class UIView, NSArray, NSCalendar, NSDate;



@interface NTKColorCodeTimeView : UIView {
    NSArray *_colorViews;
    NSArray *_digitToColor;
    NSCalendar *_cal;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date


-(id)init;
-(void)layoutSubviews;


@end


#endif