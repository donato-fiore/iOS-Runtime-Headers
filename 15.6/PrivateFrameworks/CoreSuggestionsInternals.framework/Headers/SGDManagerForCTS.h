// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGDMANAGERFORCTS_H
#define SGDMANAGERFORCTS_H

@protocol SGXPCActivityManagerProtocol;

#import <Foundation/Foundation.h>

#import "SGSqlEntityStore.h"
#import "SGServiceContext.h"

@interface SGDManagerForCTS : NSObject {
    SGSqlEntityStore *_harvestStore;
    SGServiceContext *_context;
    SGDSuggestManagerCTSCriteriaState _ctsCriteriaState;
    _opaque_pthread_mutex_t _geocodeLock;
    _opaque_pthread_mutex_t _verificationLock;
    CGFloat _lastFrontfillFinishTime;
    id<SGXPCActivityManagerProtocol> *_xpcActivityManager;
}




+(id)defaultInstance;
+(id)sharedSingletonInstance;
+(void)_logCallInteractions:(id)arg0 ;
-(BOOL)_processMessage:(id)arg0 pipeline:(id)arg1 context:(id)arg2 harvestMetrics:(id)arg3 ;
-(BOOL)_shouldDissectContentWithUniqueIdentifier:(id)arg0 domainIdentifier:(id)arg1 bundleIdentifier:(id)arg2 headers:(id)arg3 accountIdentifier:(id)arg4 ;
-(BOOL)hasAlreadyHarvestedSearchableItem:(id)arg0 ;
-(BOOL)processMailMessage:(id)arg0 headers:(id)arg1 pipeline:(id)arg2 context:(id)arg3 harvestMetrics:(id)arg4 ;
-(BOOL)processSearchableItem:(id)arg0 pipeline:(id)arg1 context:(id)arg2 ;
-(BOOL)processSearchableItem:(id)arg0 pipeline:(id)arg1 context:(id)arg2 harvestMetrics:(id)arg3 ;
-(BOOL)processSearchableItemForTesting:(id)arg0 ;
-(BOOL)processTextMessage:(id)arg0 pipeline:(id)arg1 context:(id)arg2 harvestMetrics:(id)arg3 ;
-(id)initWithHarvestStore:(id)arg0 xpcActivityManager:(id)arg1 ;
-(id)serviceContext;
-(void)_performCollectWeeklyStats:(id)arg0 ;
-(void)_performCustomResponseHarvest:(id)arg0 ;
-(void)_performHarvestedURLMetricUploadAcitivity:(id)arg0 ;
-(void)_performIdentityAnalysisActivity:(id)arg0 ;
-(void)_performMailIntelligenceTasksActivity:(id)arg0 ;
-(void)_performMobileAssetMetadataDownloadActivity:(id)arg0 ;
-(void)_performPhoneQREngagementDataSync:(id)arg0 ;
-(void)_performProcessPendingGeocodesActivity:(id)arg0 ;
-(void)_performProcessPendingVerificationActivity:(id)arg0 overrideVerificationStatus:(id)arg1 ;
-(void)_performSendRTCActivity:(id)arg0 ;
-(void)_performTrimActivity:(id)arg0 ;
-(void)_performVacuumActivity;
-(void)_registerForCTSIdentityAnalysisActivity;
-(void)_registerForCTSSendRTCActivity;
-(void)_registerForCTSTrimActivity;
-(void)_registerForCTSVacuumActivity;
-(void)_registerForCollectWeeklyStats;
-(void)_registerForContactDetailCacheRebuildActivity;
-(void)_registerForCustomResponseHarvest;
-(void)_registerForPhoneQREngagementDataSync;
-(void)_registerHarvestedURLMetricUploadActivity;
-(void)_registerMailIntelligenceTasksActivity;
-(void)_registerMobileAssetMetadataDownloadActivity;
-(void)_registerProcessPendingGeocodesActivity;
-(void)_registerProcessPendingVerificationActivity;
-(void)dealloc;
-(void)performContactDetailCacheRebuildActivity:(id)arg0 ;
-(void)registerForCTS;
-(void)waitForXpcActivityQueue;


@end


#endif