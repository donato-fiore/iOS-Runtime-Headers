// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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


+(id)avocadoViewControllerForWidgetFamily:(NSInteger)arg0 ;
+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(CGFloat)_columnWidthForBounds:(struct CGRect )arg0 andMaxNumViews:(CGFloat)arg1 ;
-(id)_newBatteryDeviceView;
-(id)_synthesizedDebugIdentifier;
-(void)_configureBatteryDeviceView:(id)arg0 withBatteryDevice:(id)arg1 transitionCoordinator:(id)arg2 ;
-(void)_validateBatteryDeviceViewsIfNecessary;
-(void)invalidateBatteryDeviceState;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif