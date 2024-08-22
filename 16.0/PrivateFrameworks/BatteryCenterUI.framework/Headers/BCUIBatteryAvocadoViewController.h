// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCUIBATTERYAVOCADOVIEWCONTROLLER_H
#define BCUIBATTERYAVOCADOVIEWCONTROLLER_H

@class UIViewController, BCBatteryDeviceController, NSString;
@protocol BCBatteryDeviceObserving, OS_dispatch_queue;


#import "BCUIAvocadoViewController.h"

@interface BCUIBatteryAvocadoViewController : UIViewController <BCBatteryDeviceObserving>

 {
    BCBatteryDeviceController *_batteryDeviceController;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic, getter=_avocadoViewController, setter=_setAvocadoViewController:) BCUIAvocadoViewController *avocadoViewController; // ivar: _avocadoViewController
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor
@property (readonly) Class superclass;
@property (nonatomic) NSInteger widgetFamily; // ivar: _widgetFamily


+(id)imageForIconInfo:(struct BCUIIconImageInfo )arg0 ;
+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(id)_synthesizedDebugIdentifier;
-(void)_configureAvocadoViewControllerIfNecessary;
-(void)connectedDevicesDidChange:(id)arg0 ;
-(void)setWidgetFamliy:(NSInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif