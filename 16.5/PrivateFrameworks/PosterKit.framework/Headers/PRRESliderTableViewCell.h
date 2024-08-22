// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRRESLIDERTABLEVIEWCELL_H
#define PRRESLIDERTABLEVIEWCELL_H

@class UISlider;


#import "PRRETableViewCell.h"

@interface PRRESliderTableViewCell : PRRETableViewCell {
    UISlider *_slider;
}




-(id)_currentValue;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configure;
-(void)_setCurrentValue:(id)arg0 ;


@end


#endif