// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSCHARGINGVIEWCONTROLLER_H
#define CSCHARGINGVIEWCONTROLLER_H

@class BCBatteryDeviceController, NSMutableSet, NSString;
@protocol BCBatteryDeviceObserving;


#import "CSCoverSheetViewControllerBase.h"
#import "CSBatteryChargingView.h"
#import "CSBatteryChargingInfo.h"

@interface CSChargingViewController : CSCoverSheetViewControllerBase <BCBatteryDeviceObserving>

 {
    BCBatteryDeviceController *_batteryController;
    CSBatteryChargingView *_chargingView;
    CSBatteryChargingInfo *_chargingInfo;
    NSMutableSet *_displayedBatteryDevices;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(id)arg0 ;
-(CGFloat)durationBeforeDismissal;
-(NSInteger)presentationPriority;
-(NSInteger)presentationStyle;
-(NSInteger)presentationType;
-(id)init;
-(id)initWithChargingInfo:(id)arg0 ;
-(void)_createNewChargingViewForDoubleBattery:(id)arg0 ;
-(void)_updateChargingViewIfNecessary;
-(void)_updateChargingViewLegibility;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)connectedDevicesDidChange:(id)arg0 ;
-(void)performDismissalAnimationWithCompletionHandler:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif