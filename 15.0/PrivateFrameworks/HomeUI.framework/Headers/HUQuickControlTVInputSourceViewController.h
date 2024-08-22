// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLTVINPUTSOURCEVIEWCONTROLLER_H
#define HUQUICKCONTROLTVINPUTSOURCEVIEWCONTROLLER_H

@class HFTVInputControlItem;


#import "HUQuickControlSingleControlViewController.h"

@interface HUQuickControlTVInputSourceViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFTVInputControlItem *controlItem;


-(BOOL)_shouldWriteInputValue:(id)arg0 ;
-(id)_filterInputValues:(id)arg0 ;
-(id)_toPickerViewItems:(id)arg0 ;
-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;


@end


#endif