// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8PAPERKIT26VALUEEDITINGVIEWCONTROLLER_H
#define _TTC8PAPERKIT26VALUEEDITINGVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC8PaperKit26ValueEditingViewController : UIViewController {
    ? delegate;
    ? minValue;
    ? maxValue;
    ? currentValue;
    ? unit;
    ? contentSize;
    ? contentViewMargin;
    ? verticalInterItemSpacing;
    ? stepperSizeHeight;
    ? $__lazy_storage_$_stepper;
    ? $__lazy_storage_$_slider;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didChangeSliderValue;
-(void)didChangeStepperValue;
-(void)didFinishChangingSliderValue;
-(void)didStartChangingSliderValue;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif