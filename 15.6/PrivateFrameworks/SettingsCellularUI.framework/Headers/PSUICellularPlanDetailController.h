// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUICELLULARPLANDETAILCONTROLLER_H
#define PSUICELLULARPLANDETAILCONTROLLER_H

@class PSListController;


#import "PSUISubscriptionContextMenusGroup.h"

@interface PSUICellularPlanDetailController : PSListController

@property (retain, nonatomic) PSUISubscriptionContextMenusGroup *subscriptionContextMenus; // ivar: _subscriptionContextMenus


-(id)specifiers;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif