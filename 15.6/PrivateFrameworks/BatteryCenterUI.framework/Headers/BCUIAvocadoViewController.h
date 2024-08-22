// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCUIAVOCADOVIEWCONTROLLER_H
#define BCUIAVOCADOVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSArray, NSString;



@interface BCUIAvocadoViewController : UIViewController {
    BOOL _batteryDeviceViewsValid;
    NSMutableArray *_batteryDeviceViews;
}


@property (readonly, copy, nonatomic, getter=_batteryDeviceViews) NSMutableArray *batteryDeviceViews;
@property (copy, nonatomic) NSArray *batteryDevices; // ivar: _batteryDevices
@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (readonly, nonatomic, getter=_includeEmptyDevices) BOOL includeEmptyDevices;
@property (readonly, nonatomic, getter=_maximumNumberOfBatteryDeviceViews) NSUInteger maximumNumberOfBatteryDeviceViews;
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor


+(id)avocadoViewControllerForSize:(NSInteger)arg0 ;
+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(id)_newBatteryDeviceView;
-(id)_synthesizedDebugIdentifier;
-(void)_configureBatteryDeviceView:(id)arg0 withBatteryDevice:(id)arg1 transitionCoordinator:(id)arg2 ;
-(void)_validateBatteryDeviceViewsIfNecessary;
-(void)invalidateBatteryDeviceState;
-(void)viewWillLayoutSubviews;


@end


#endif