// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCELLULARPLANMANAGERCACHE_H
#define TSCELLULARPLANMANAGERCACHE_H

@class NSArray;
@protocol TSCellularPlanManagerCacheDelegate;

#import <Foundation/Foundation.h>


@interface TSCellularPlanManagerCache : NSObject

@property (retain) NSArray *cachedPlanItems; // ivar: _cachedPlanItems
@property (retain) NSArray *danglingPlanItems; // ivar: _danglingPlanItems
@property (weak, nonatomic) NSObject<TSCellularPlanManagerCacheDelegate> *delegate; // ivar: delegate
@property (readonly) NSArray *planItems;
@property (nonatomic) NSUInteger supportedFlowTypes; // ivar: _supportedFlowTypes


+(id)sharedInstance;
-(NSInteger)calculateInstallConsentTextTypeFor:(id)arg0 ;
-(id)_getByteRepresentationOf:(id)arg0 ;
-(id)_getValidatedPlanItemFor:(id)arg0 ;
-(id)getDanglingPlanItems;
-(id)getPredefinedLabels;
-(id)getShortLabelsForLabels:(id)arg0 ;
-(id)getSubscriptionContextUUIDforPlan:(id)arg0 ;
-(id)init;
-(id)remapSimLabel:(id)arg0 to:(id)arg1 ;
-(id)setLabelForPlan:(id)arg0 label:(id)arg1 ;
-(void)_initializePlanItems;
-(void)_updateCachedFlowTypes;
-(void)_updateCachedPlanItems;
-(void)_updateLocalCachedPlanItems:(id)arg0 ;
-(void)addNewPlanWithAddress:(id)arg0 matchingId:(id)arg1 confirmationCode:(id)arg2 userConsent:(NSInteger)arg3 completion:(id)arg4 ;
-(void)addNewPlanWithCardData:(id)arg0 confirmationCode:(id)arg1 userConsentResponse:(NSInteger)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)didEnablePlanItems:(id)arg0 ;
-(void)didPurchasePlanForCarrier:(id)arg0 mnc:(id)arg1 gid1:(id)arg2 gid2:(id)arg3 state:(id)arg4 ;
-(void)didPurchasePlanForEid:(id)arg0 iccid:(id)arg1 smdpURL:(id)arg2 state:(id)arg3 ;
-(void)didTransferPlanForEid:(id)arg0 iccid:(id)arg1 srcIccid:(id)arg2 smdpURL:(id)arg3 state:(id)arg4 ;
-(void)planItemsWithCompletion:(id)arg0 ;
-(void)provideUserResponse:(NSInteger)arg0 confirmationCode:(id)arg1 ;
-(void)resumePlanProvisioning:(BOOL)arg0 userConsent:(NSInteger)arg1 ;
-(void)selectPlanForData:(id)arg0 ;
-(void)selectPlanForVoice:(id)arg0 ;
-(void)selectPlansForIMessage:(id)arg0 ;
-(void)sendUserResponse:(NSUInteger)arg0 confirmationCode:(id)arg1 ;
-(void)setUserInPurchaseFlow:(BOOL)arg0 ;
-(void)shouldShowPlanSetupWithCompletion:(id)arg0 ;


@end


#endif