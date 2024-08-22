// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUGRIDSTATUSNUMBEREDBADGEVIEW_H
#define HUGRIDSTATUSNUMBEREDBADGEVIEW_H

@class UILabel;


#import "HUGridStatusBadgeView.h"

@interface HUGridStatusNumberedBadgeView : HUGridStatusBadgeView

@property (nonatomic) NSInteger value; // ivar: _value
@property (readonly, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif