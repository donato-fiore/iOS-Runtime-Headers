// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCORETELEPHONYCLIENTCACHE_H
#define TSCORETELEPHONYCLIENTCACHE_H

@class CoreTelephonyClient;

#import <Foundation/Foundation.h>


@interface TSCoreTelephonyClientCache : NSObject {
    CoreTelephonyClient *_client;
}




+(id)sharedInstance;
-(BOOL)deviceSupportsHydra;
-(BOOL)getTransferCapability:(NSUInteger)arg0 ;
-(id)init;
-(void)bootstrapPlanTransferUsingMessageSession:(id)arg0 completion:(id)arg1 ;
-(void)convertPhysicalSIMToeSIMWithCompletion:(id)arg0 ;
-(void)getSubscriptionInfo:(id)arg0 ;
-(void)hideTransferPlan:(id)arg0 fromDevice:(id)arg1 completion:(id)arg2 ;
-(void)installPendingPlan:(id)arg0 completion:(id)arg1 ;
-(void)installPendingPlanList:(id)arg0 completion:(id)arg1 ;
-(void)isAnyPlanOfTransferCapability:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)pendingInstallItemsWithCompletion:(id)arg0 ;
-(void)setDataFallbackEnabled:(BOOL)arg0 forIccid:(id)arg1 ;
-(void)submitSimSetupUsage:(id)arg0 ;
-(void)transferPlanListWithCompletion:(id)arg0 ;
-(void)transferPlanWithIdentifier:(id)arg0 fromDevice:(id)arg1 completionHandler:(id)arg2 ;
-(void)transferPlansWithIdentifier:(id)arg0 fromDevice:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif