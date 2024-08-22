// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT42ACTIVITYPRESETSCRUBBERVALUESVIEWCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT42ACTIVITYPRESETSCRUBBERVALUESVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC16MagnifierSupport42ActivityPresetScrubberValuesViewController : OBWelcomeController {
    ? heightConstant;
    ? cameraVideoPreviewView;
    ? activity;
    ? delegate;
    ? sessionQueue;
    ? $__lazy_storage_$_scrubberButton;
    ? brightness;
    ? contrast;
    ? globalZoomPercentage;
    ? zoomPercentage;
    ? globalFlashlightPercentage;
    ? flashlightPercentage;
    ? globalSelectedFilters;
    ? globalCurrentSelectedFilter;
    ? currentSelectedFilters;
    ? filter;
    ? currentFilterSubscription;
    ? photoOutput;
    ? cameraCaptureDevice;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif