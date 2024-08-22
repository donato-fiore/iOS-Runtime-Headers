// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTUISLIDERROWTABLEVIEWCELL_H
#define PTUISLIDERROWTABLEVIEWCELL_H

@class UISlider, UILabel;
@protocol PTUINumericKeypadDelegate;


#import "PTUIRowTableViewCell.h"

@interface PTUISliderRowTableViewCell : PTUIRowTableViewCell <PTUINumericKeypadDelegate>

 {
    UISlider *_slider;
    UILabel *_label;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_valueChanged:(id)arg0 ;
-(void)labelTapped;
-(void)numericKeypadDidUpdateValue:(id)arg0 ;
-(void)numericKeypadWillDismiss:(id)arg0 ;
-(void)updateCellCharacteristics;
-(void)updateDisplayedValue;
-(void)updateLabel;


@end


#endif