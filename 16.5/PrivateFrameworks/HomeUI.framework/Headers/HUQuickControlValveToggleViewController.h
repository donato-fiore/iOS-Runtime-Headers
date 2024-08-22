// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLVALVETOGGLEVIEWCONTROLLER_H
#define HUQUICKCONTROLVALVETOGGLEVIEWCONTROLLER_H

@class HFControlItem<HFPrimaryStateWriter>;


#import "HUQuickControlSingleControlViewController.h"
#import "HUQuickControlValveToggleView.h"

@interface HUQuickControlValveToggleViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *controlItem;
@property (retain, nonatomic) HUQuickControlValveToggleView *controlView; // ivar: _controlView


-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;


@end


#endif