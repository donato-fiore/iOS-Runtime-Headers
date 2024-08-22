// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRXPICKERCONTENTVIEW_H
#define PRXPICKERCONTENTVIEW_H

@class NSLayoutConstraint, UIPickerView, UITextField;


#import "PRXCardContentView.h"

@interface PRXPickerContentView : PRXCardContentView {
    NSLayoutConstraint *_pickerTopConstraint;
}


@property (readonly, nonatomic) UIPickerView *pickerView; // ivar: _pickerView
@property (retain, nonatomic) UITextField *textField; // ivar: _textField


-(id)initWithCardStyle:(NSInteger)arg0 ;
-(void)updateConstraints;


@end


#endif