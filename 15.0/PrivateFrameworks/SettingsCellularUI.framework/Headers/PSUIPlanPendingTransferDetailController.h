// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUIPLANPENDINGTRANSFERDETAILCONTROLLER_H
#define PSUIPLANPENDINGTRANSFERDETAILCONTROLLER_H

@class PSListController;


#import "PSUIPlanPendingTransferMenusGroup.h"

@interface PSUIPlanPendingTransferDetailController : PSListController

@property (retain, nonatomic) PSUIPlanPendingTransferMenusGroup *planPendingTransferMenus; // ivar: _planPendingTransferMenus


-(id)init;
-(id)specifiers;
-(void)cellularPlanChanged;


@end


#endif