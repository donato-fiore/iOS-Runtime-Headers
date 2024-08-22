// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11WEATHERMAPS21POPOVERVIEWCONTROLLER_H
#define _TTC11WEATHERMAPS21POPOVERVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC11WeatherMaps21PopoverViewController : UIViewController {
    ? delegate;
    ? location;
    ? isSelectedLocation;
    ? currentWeather;
    ? $__lazy_storage_$_locationLabel;
    ? $__lazy_storage_$_timeLabel;
    ? $__lazy_storage_$_conditionLabel;
    ? $__lazy_storage_$_temperatureRangeLabel;
    ? $__lazy_storage_$_temperatureLabel;
    ? $__lazy_storage_$_viewLocationButton;
    ? $__lazy_storage_$_openLocationButton;
    ? $__lazy_storage_$_separator;
    ? padding;
    ? horizontalSpacing;
    ? verticalSpacing;
    ? minWidth;
    ? maxWidth;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif