// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMEDIATIMELABEL_H
#define ICMEDIATIMELABEL_H

@class UILabel;


#import "ICMediaTimeFormatter.h"
#import "ICMediaTime.h"

@interface ICMediaTimeLabel : UILabel

@property (retain, nonatomic) ICMediaTimeFormatter *formatter; // ivar: _formatter
@property (copy, nonatomic) ICMediaTime *mediaTimeValue; // ivar: _mediaTimeValue


-(id)accessibilityValue;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInit;


@end


#endif