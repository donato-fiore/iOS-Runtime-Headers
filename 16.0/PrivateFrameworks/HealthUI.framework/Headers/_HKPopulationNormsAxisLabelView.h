// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKPOPULATIONNORMSAXISLABELVIEW_H
#define _HKPOPULATIONNORMSAXISLABELVIEW_H

@class UIView, UILabel, UIFont, UIColor;


#import "HKPopulationNormsAxisLabel.h"

@interface _HKPopulationNormsAxisLabelView : UIView {
    UILabel *_rangeStartLabel;
    UILabel *_rangeSeparatorLabel;
    UILabel *_rangeEndLabel;
}


@property (readonly, nonatomic) HKPopulationNormsAxisLabel *axisLabel; // ivar: _axisLabel
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)initWithLabel:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif