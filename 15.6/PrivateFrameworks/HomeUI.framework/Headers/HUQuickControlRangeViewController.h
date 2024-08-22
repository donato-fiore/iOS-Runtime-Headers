// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLRANGEVIEWCONTROLLER_H
#define HUQUICKCONTROLRANGEVIEWCONTROLLER_H

@class HFRangeControlItem;


#import "HUQuickControlSingleControlViewController.h"
#import "HUQuickControlSliderViewProfile.h"

@interface HUQuickControlRangeViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFRangeControlItem *controlItem;
@property (readonly, nonatomic) HUQuickControlSliderViewProfile *viewProfile;


-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;


@end


#endif