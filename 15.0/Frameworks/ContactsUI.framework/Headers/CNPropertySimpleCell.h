// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPROPERTYSIMPLECELL_H
#define CNPROPERTYSIMPLECELL_H

@class UILabel;


#import "CNPropertyCell.h"

@interface CNPropertySimpleCell : CNPropertyCell

@property (readonly, nonatomic) UILabel *labelLabel; // ivar: _labelLabel
@property (readonly, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(id)labelView;
-(id)valueView;


@end


#endif