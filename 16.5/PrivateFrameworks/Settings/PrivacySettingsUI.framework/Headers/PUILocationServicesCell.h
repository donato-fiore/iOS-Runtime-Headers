// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUILOCATIONSERVICESCELL_H
#define PUILOCATIONSERVICESCELL_H

@class PSSwitchTableCell;


#import "PUILocationUsageMixin.h"

@interface PUILocationServicesCell : PSSwitchTableCell

@property (readonly, nonatomic) PUILocationUsageMixin *location; // ivar: _location


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)layoutSubviews;


@end


#endif