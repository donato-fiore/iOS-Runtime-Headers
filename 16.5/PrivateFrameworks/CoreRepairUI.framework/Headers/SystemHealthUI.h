// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYSTEMHEALTHUI_H
#define SYSTEMHEALTHUI_H

@class PSListController, NSMutableArray, CRRepairHistory;
@protocol OS_dispatch_queue;


#import "CRUIAnalytics.h"
#import "MRLocalization.h"

@interface SystemHealthUI : PSListController {
    int failedComponentsCount;
    NSObject<OS_dispatch_queue> *asyncQueue;
    CRUIAnalytics *analytics;
    BOOL deviceFDRVersion1;
    BOOL isRepaired;
    BOOL isRCHLDevice;
    NSMutableArray *untrustedComponents;
    CRRepairHistory *localRepairHistory;
    MRLocalization *locale;
}




-(BOOL)isVaildCAA:(id)arg0 ;
-(NSInteger)getCpuUptimeInSec;
-(id)getCurrentSystemHealthInfoSpecifiers;
-(id)init;
-(id)setupGroupSpecifer;
-(id)valueForSpecifierPartData:(id)arg0 ;
-(id)valueForSpecifierPartDate:(id)arg0 ;
-(id)valueForSpecifierPartIssue:(id)arg0 ;
-(id)valueForSpecifierPartProperty:(id)arg0 ;
-(id)valueForSpecifierPartRC:(id)arg0 ;
-(id)valueForSpecifierPartService:(id)arg0 ;
-(id)valueForSpecifierRepaired:(id)arg0 ;
-(id)valueForSpecifierUnknown;
-(int)getBatteryHealthServiceState;
-(void)clearCAARequestHistory;
-(void)extractAudioSpecifiers;
-(void)extractBasebandSpecifiers:(id)arg0 ;
-(void)extractBatterySpecifiers:(id)arg0 caaRepairHistory:(id)arg1 rchlHistory:(id)arg2 ;
-(void)extractBluetoohSpecifiers;
-(void)extractCameraSpecifiers:(id)arg0 componentsInfoSpecifiers:(id)arg1 caaRepairHistory:(id)arg2 srvp:(id)arg3 rchlHistory:(id)arg4 ;
-(void)extractDisplaySpecifiers:(id)arg0 caaRepairHistory:(id)arg1 srvp:(id)arg2 rchlHistory:(id)arg3 ;
-(void)extractFaceIDSpecifiers:(id)arg0 caaRepairHistory:(id)arg1 rchlHistory:(id)arg2 ;
-(void)extractMtubSpecifiers:(id)arg0 caaRepairHistory:(id)arg1 srvp:(id)arg2 rchlHistory:(id)arg3 ;
-(void)extractNFCSpecifiers:(id)arg0 ;
-(void)extractRCameraHWFailureSpecifiers;
-(void)extractUWBSpecifiers:(id)arg0 ;
-(void)extractWifiSpecifiers;
-(void)getCAAForRepairHistory;
-(void)refreshFailedComponents;
-(void)requestCAA;
-(void)retryCAA;
-(void)scheduleNetworkActivity;
-(void)setupCAARetry:(id)arg0 caaRepairHistory:(*id)arg1 ;


@end


#endif