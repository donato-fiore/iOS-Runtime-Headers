// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSIMPLETILEREQUESTER_H
#define GEOSIMPLETILEREQUESTER_H

@class NSMutableArray, geo_isolater, NSString;
@protocol GEOSimpleTileRequesterSubclass, GEOSimpleTileRequesterOperationDelegate, OS_voucher, OS_os_activity, OS_dispatch_queue;


#import "GEOTileRequester.h"
#import "GEODataSession.h"
#import "GEOTileKeyMap.h"
#import "GEOTileRequestBalancer.h"

@interface GEOSimpleTileRequester : GEOTileRequester <GEOSimpleTileRequesterSubclass, GEOSimpleTileRequesterOperationDelegate>

 {
    NSMutableArray *_running;
    NSMutableArray *_errors;
    GEODataSession *_dataSession;
    unsigned int _qos;
    GEOOnce_s _didStart;
    GEOOnce_s _didCallDelegate;
    BOOL _cancelled;
    BOOL _hasRemainingTileKeys;
    GEOTileKeyMap *_signpostIDs;
    GEOTileKeyMap *_tileLoaderCreateTimes;
    unsigned int _highestRunningOperationPriority;
    geo_isolater *_highestRunningOperationPriorityIsolation;
    GEOTileKeyMap *_priorities;
    BOOL _includeReasonHeader;
    BOOL _allowTLSSessionTicketUse;
    NSObject<OS_voucher> *_voucher;
}


@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (readonly, nonatomic) GEOTileRequestBalancer *balancer; // ivar: _balancer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int highestRunningOperationPriority;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;


-(BOOL)_shouldReportAnalyticsForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)downloadsDataToDisk;
-(BOOL)needsLocalizationForKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)shouldAllowEmptyDataForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)shouldDownloadToDiskForTileKey:(struct _GEOTileKey *)arg0 estimatedDataSize:(NSUInteger)arg1 ;
-(BOOL)shouldParticipateInBalancerScheduling;
-(BOOL)shouldReportAnalyticsOnErrorForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)shouldReportAnalyticsOnErrorWithRetryForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)shouldReportAnalyticsOnSuccessForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)shouldReportErrorNetworkEventForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)shouldReportErrorNetworkEventWithRertryForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)shouldReportSuccessNetworkEventForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)tileDataIsCacheableForTileKey:(struct _GEOTileKey *)arg0 ;
-(NSUInteger)estimatedNumberOfOperationsForTileKey:(struct _GEOTileKey )arg0 ;
-(id)additionalAnalyticsStatesForKey:(struct _GEOTileKey *)arg0 ;
-(id)additionalNetworkEventAnalyticsStatesForKey:(struct _GEOTileKey *)arg0 ;
-(id)initWithTileRequest:(id)arg0 delegateQueue:(id)arg1 delegate:(id)arg2 ;
-(id)initWithTileRequest:(id)arg0 delegateQueue:(id)arg1 delegate:(id)arg2 dataSession:(id)arg3 ;
-(id)localizationURLForTileKey:(struct _GEOTileKey *)arg0 ;
-(id)mergeBaseTile:(id)arg0 withLocalizationTile:(id)arg1 ;
-(id)mergeBaseTileEtag:(id)arg0 withLocalizationTileEtag:(id)arg1 ;
-(id)newXPCDataRequestForTileKey:(struct _GEOTileKey *)arg0 ;
-(id)urlForTileKey:(struct _GEOTileKey *)arg0 ;
-(id)verifyDataIntegrity:(id)arg0 checksumMethod:(int)arg1 ;
-(int)checksumMethodForIncomingTileDataWithKey:(struct _GEOTileKey *)arg0 ;
-(struct ? )kindForTileKey:(struct _GEOTileKey *)arg0 ;
// -(unk)tileSetForKey:(id)arg0  ;
-(unsigned int)tileEditionForKey:(struct _GEOTileKey *)arg0 ;
-(void)_cleanup;
-(void)_operationFailed:(id)arg0 error:(id)arg1 ;
-(void)_operationFinished:(id)arg0 ;
-(void)_updateRunningCountAndCheckIfDone;
-(void)cancel;
-(void)cancelKey:(struct _GEOTileKey *)arg0 ;
-(void)createAndStartOperationsForTileKeys:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)didStartOperationsForAllTileKeys;
-(void)failedLoadingTileForKey:(struct _GEOTileKey )arg0 baseOperation:(id)arg1 error:(id)arg2 ;
-(void)finishedLoadingTileForKey:(struct _GEOTileKey )arg0 baseOperation:(id)arg1 ;
-(void)operationFailed:(id)arg0 error:(id)arg1 ;
-(void)operationFinished:(id)arg0 ;
-(void)reprioritizeKey:(struct _GEOTileKey *)arg0 newPriority:(unsigned int)arg1 ;
-(void)start;


@end


#endif