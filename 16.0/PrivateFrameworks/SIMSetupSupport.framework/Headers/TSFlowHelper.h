// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSFLOWHELPER_H
#define TSFLOWHELPER_H


#import <Foundation/Foundation.h>


@interface TSFlowHelper : NSObject



+(BOOL)handleStartOverAgainstNoPlan:(id)arg0 navigationController:(id)arg1 completion:(id)arg2 ;
+(BOOL)hasTransferablePlanWithSameCarrier:(id)arg0 transferablePlans:(id)arg1 inBuddy:(BOOL)arg2 matchingSODACarrierWebsheetTransferPlanIndex:(id)arg3 ;
+(NSInteger)_slotForPlanItem:(id)arg0 ;
+(id)unregisteredSelectedPlanItems:(id)arg0 ;
+(void)registerIMessageWithPlanItems:(id)arg0 ;


@end


#endif