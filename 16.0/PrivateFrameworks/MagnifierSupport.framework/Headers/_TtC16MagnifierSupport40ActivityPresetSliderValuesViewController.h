// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16MAGNIFIERSUPPORT40ACTIVITYPRESETSLIDERVALUESVIEWCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT40ACTIVITYPRESETSLIDERVALUESVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC16MagnifierSupport40ActivityPresetSliderValuesViewController : OBWelcomeController {
    ? heightConstant;
    ? delegate;
    ? cameraVideoPreviewView;
    ? control;
    ? activity;
    ? sessionQueue;
    ? $__lazy_storage_$_sliderButton;
    ? brightness;
    ? contrast;
    ? globalZoomPercentage;
    ? zoomPercentage;
    ? globalFlashlightPercentage;
    ? flashlightPercentage;
    ? photoOutput;
    ? cameraCaptureDevice;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)loadView;
-(void)updateSlider;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif