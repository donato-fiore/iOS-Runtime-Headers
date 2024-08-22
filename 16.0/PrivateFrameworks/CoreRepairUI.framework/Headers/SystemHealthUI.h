// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYSTEMHEALTHUI_H
#define SYSTEMHEALTHUI_H

@class PSListController;
@protocol OS_dispatch_queue;


#import "CRUIAnalytics.h"

@interface SystemHealthUI : PSListController {
    int failedComponentsCount;
    NSObject<OS_dispatch_queue> *asyncQueue;
    CRUIAnalytics *analytics;
}




-(BOOL)isVaildCAA:(id)arg0 ;
-(NSInteger)getCpuUptimeInSec;
-(id)failedComponents;
-(id)getCurrentSystemHealthInfoSpecifiers;
-(id)init;
-(id)valueForSpecifierPartIssue:(id)arg0 ;
-(id)valueForSpecifierPartService:(id)arg0 ;
-(id)valueForSpecifierRepaired:(id)arg0 ;
-(id)valueForSpecifierUnknown;
-(int)getBatteryHealthServiceState;
-(void)clearCAARequestHistory;
-(void)getCAAForRepairHistory;
-(void)requestCAA;
-(void)retryCAA;
-(void)scheduleNetworkActivity;


@end


#endif