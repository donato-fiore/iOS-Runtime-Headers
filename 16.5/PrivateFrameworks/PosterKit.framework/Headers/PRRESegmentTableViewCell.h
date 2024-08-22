// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRRESEGMENTTABLEVIEWCELL_H
#define PRRESEGMENTTABLEVIEWCELL_H

@class UISegmentedControl;


#import "PRRETableViewCell.h"

@interface PRRESegmentTableViewCell : PRRETableViewCell {
    UISegmentedControl *_segment;
}




-(id)_currentValue;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configure;
-(void)_setCurrentValue:(id)arg0 ;


@end


#endif