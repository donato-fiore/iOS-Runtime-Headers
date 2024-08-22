// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLINCREMENTALSTATEVIEWCONTROLLER_H
#define HUQUICKCONTROLINCREMENTALSTATEVIEWCONTROLLER_H

@class HFIncrementalStateControlItem;


#import "HUQuickControlSingleControlViewController.h"

@interface HUQuickControlIncrementalStateViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFIncrementalStateControlItem *controlItem;


-(id)_createControlView;
-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif