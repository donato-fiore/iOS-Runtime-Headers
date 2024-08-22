// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKASSETREPAIROPERATIONUTILITIES_H
#define CKASSETREPAIROPERATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKAssetRepairOperationUtilities : NSObject



+(BOOL)errorIsRetriableInNearFuture:(id)arg0 ;
+(BOOL)errorShouldTriggerNetworkReachabilityEvent:(id)arg0 ;
+(BOOL)repairErrorShouldBeMarkedAsBroken:(id)arg0 ;
+(id)createRepairContainerFromContainer:(id)arg0 ;
+(id)createRepairContainerFromContainer:(id)arg0 withOverrides:(id)arg1 ;
+(id)createRepairOperationGroupWithName:(id)arg0 ;
+(id)repairRecordFromRecord:(id)arg0 field:(id)arg1 listIndex:(NSInteger)arg2 repairZoneID:(id)arg3 ;
+(id)uploadRequestMetadataFromRepairRecord:(id)arg0 ;
+(void)clearRepairZoneForDatabase:(id)arg0 withRepairContainerOverrides:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif