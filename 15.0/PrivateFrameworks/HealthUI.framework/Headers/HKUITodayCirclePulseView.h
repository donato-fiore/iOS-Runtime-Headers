// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKUITODAYCIRCLEPULSEVIEW_H
#define HKUITODAYCIRCLEPULSEVIEW_H

@class UIView, CALayer;


#import "HKUITodayCirclePulseBackground.h"

@interface HKUITodayCirclePulseView : UIView {
    UIView *_backgroundContainer;
    HKUITodayCirclePulseBackground *_background;
    CALayer *_dayLabel;
}


@property (nonatomic) CGFloat circleDiameter; // ivar: _circleDiameter


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutSubviews;
-(void)pulse:(id)arg0 ;
-(void)setDayLabelContent:(id)arg0 ;


@end


#endif