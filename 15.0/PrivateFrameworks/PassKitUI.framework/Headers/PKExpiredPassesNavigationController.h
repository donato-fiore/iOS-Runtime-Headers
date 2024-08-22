// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKEXPIREDPASSESNAVIGATIONCONTROLLER_H
#define PKEXPIREDPASSESNAVIGATIONCONTROLLER_H



#import "PKNavigationController.h"
#import "PKExpiredPassesViewController.h"

@interface PKExpiredPassesNavigationController : PKNavigationController

@property (readonly, nonatomic) PKExpiredPassesViewController *expiredPassesViewController; // ivar: _expiredPassesViewController


-(id)init;
-(id)initWithExistingGroupsController:(id)arg0 ;
-(id)initWithExistingGroupsController:(id)arg0 delegate:(id)arg1 ;
-(void)_done;
-(void)_edit;


@end


#endif