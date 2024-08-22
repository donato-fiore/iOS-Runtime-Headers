// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11EMOJIPOSTER31GRADIENTCONFIGURATIONCONTROLLER_H
#define _TTC11EMOJIPOSTER31GRADIENTCONFIGURATIONCONTROLLER_H

@class UIViewController;
@protocol UIColorPickerViewControllerDelegate;



@interface _TtC11EmojiPoster31GradientConfigurationController : UIViewController <UIColorPickerViewControllerDelegate>

 {
    ? type;
    ? gradientProperties;
    ? editingLinearGradientProperties;
    ? editingRadialGradientProperties;
    ? delegate;
    ? verticalStackView;
    ? styleSegmentedControl;
    ? colorSlider;
    ? attributeSlider;
    ? $__lazy_storage_$_colorPicker;
    ? colorUpdater;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)attributeSliderValueChangedWithSlider:(id)arg0 ;
-(void)colorPickerViewController:(id)arg0 didSelectColor:(id)arg1 continuously:(BOOL)arg2 ;
-(void)colorPickerViewControllerDidFinish:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif