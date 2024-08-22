// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLORPICKERVIEWCONTROLLER_H
#define _UICOLORPICKERVIEWCONTROLLER_H

@protocol _UIColorPickerViewControllerDelegate;


#import "UIColorPickerViewController.h"
#import "_UIColorPickerViewControllerConfiguration.h"

@interface _UIColorPickerViewController : UIColorPickerViewController

@property (readonly, copy, nonatomic) _UIColorPickerViewControllerConfiguration *configuration;
@property (weak, nonatomic) NSObject<_UIColorPickerViewControllerDelegate> *delegate;


-(void)_colorPickerDidFinish;
-(void)_pickerDidSelectColor:(id)arg0 ;


@end


#endif