// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLPRIMARYSTATEVIEWCONTROLLER_H
#define HUQUICKCONTROLPRIMARYSTATEVIEWCONTROLLER_H

@class HFControlItem<HFPrimaryStateWriter>;


#import "HUQuickControlSingleControlViewController.h"

@interface HUQuickControlPrimaryStateViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *controlItem;


-(BOOL)_isCharacteristicTypeRotationDirection;
-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif