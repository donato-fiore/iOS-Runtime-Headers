// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLMULTISTATEVIEWCONTROLLER_H
#define HUQUICKCONTROLMULTISTATEVIEWCONTROLLER_H

@class HFMultiStateControlItem;


#import "HUQuickControlSingleControlViewController.h"

@interface HUQuickControlMultiStateViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFMultiStateControlItem *controlItem;


-(BOOL)_isCharacteristicTypeRotationDirection;
-(BOOL)_shouldUseWheelPickerView;
-(BOOL)_useOverrideStatusText;
-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(id)overrideStatusText;
-(void)modelValueDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif