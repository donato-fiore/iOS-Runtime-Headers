// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLICONVIEWCONTROLLER_H
#define HUQUICKCONTROLICONVIEWCONTROLLER_H

@class HFDictionaryValueControlItem;


#import "HUQuickControlSingleControlViewController.h"
#import "HUQuickControlIconView.h"
#import "HUQuickControlIconViewProfile.h"

@interface HUQuickControlIconViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFDictionaryValueControlItem *controlItem;
@property (retain, nonatomic) HUQuickControlIconView *quickControlIconView; // ivar: _quickControlIconView
@property (readonly, nonatomic) HUQuickControlIconViewProfile *viewProfile;


-(id)createInteractionCoordinator;
-(id)createViewProfile;


@end


#endif