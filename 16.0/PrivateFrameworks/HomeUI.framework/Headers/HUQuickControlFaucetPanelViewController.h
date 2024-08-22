// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLFAUCETPANELVIEWCONTROLLER_H
#define HUQUICKCONTROLFAUCETPANELVIEWCONTROLLER_H

@class HFChildServiceControlItem, HFControlItem<HFPrimaryStateWriter>, HFTemperatureThresholdControlItem;


#import "HUQuickControlViewController.h"
#import "HUQuickControlCollectionViewController.h"

@interface HUQuickControlFaucetPanelViewController : HUQuickControlViewController

@property (readonly, nonatomic) HFChildServiceControlItem *childValvesControlItem;
@property (readonly, nonatomic) HUQuickControlCollectionViewController *collectionViewController; // ivar: _collectionViewController
@property (readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *primaryStateControlItem;
@property (readonly, nonatomic) HFTemperatureThresholdControlItem *temperatureControlItem;


+(id)_childValvesPredicate;
+(id)_primaryStatePredicate;
+(id)_temperaturePredicate;
+(id)controlItemPredicate;
-(BOOL)_canShowWhileLocked;
-(id)_controlItemMatchingPredicate:(id)arg0 ;
-(id)childQuickControlContentViewControllers;
-(id)initWithControlItems:(id)arg0 home:(id)arg1 itemUpdater:(id)arg2 controlOrientation:(NSUInteger)arg3 preferredControl:(NSUInteger)arg4 ;
-(id)overrideStatusText;
-(void)viewDidLoad;


@end


#endif