// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOREQUESTCOUNTERREMOTEPROXY_H
#define GEOREQUESTCOUNTERREMOTEPROXY_H

@class NSString;
@protocol GEORequestCounterProtocol;

#import <Foundation/Foundation.h>


@interface GEORequestCounterRemoteProxy : NSObject <GEORequestCounterProtocol>



@property (nonatomic) BOOL countersEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)requestCounterTicketForType:(struct ? )arg0 appId:(id)arg1 ;
-(void)_incrementForApp:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 requestType:(struct ? )arg3 result:(unsigned char)arg4 xmitBytes:(NSInteger)arg5 recvBytes:(NSInteger)arg6 usedInterfaces:(NSUInteger)arg7 ;
-(void)clearCounters;
// -(void)fetchAnalyticsHandlingDataFrom:(id)arg0 completion:(id)arg1 completionQueue:(unk)arg2  ;
// -(void)fetchRoutePreloadSessionsFrom:(id)arg0 completion:(id)arg1 completionQueue:(unk)arg2  ;
-(void)finishedProactiveTileDownloadForIdentifier:(id)arg0 policy:(unsigned char)arg1 tilesConsidered:(unsigned int)arg2 tileDownloadAttempts:(unsigned int)arg3 successes:(unsigned int)arg4 failures:(unsigned int)arg5 bytesDownloaded:(NSUInteger)arg6 ;
-(void)readProactiveTileDownloadsSince:(id)arg0 handler:(id)arg1 ;
-(void)readRequestLogsDuring:(id)arg0 handler:(id)arg1 ;
-(void)readRequestsPerAppDuring:(id)arg0 handler:(id)arg1 ;
-(void)recordAnalyticsDBExpireCount:(NSInteger)arg0 logMsgType:(NSInteger)arg1 at:(id)arg2 ;
-(void)recordAnalyticsPersistCount:(NSInteger)arg0 logMsgType:(NSInteger)arg1 at:(id)arg2 ;
-(void)recordAnalyticsUploadFailureCount:(NSInteger)arg0 logMsgType:(NSInteger)arg1 at:(id)arg2 ;
-(void)recordAnalyticsUploadSuccessCount:(NSInteger)arg0 bytes:(NSInteger)arg1 logMsgType:(NSInteger)arg2 usedCellular:(BOOL)arg3 at:(id)arg4 ;
-(void)recordRoutePreloadSessionAt:(id)arg0 transportType:(NSInteger)arg1 tilesPreloaded:(NSUInteger)arg2 tilesUsed:(NSUInteger)arg3 tilesMissed:(NSUInteger)arg4 ;
-(void)recordTrafficProbeCollectionAt:(id)arg0 tripId:(id)arg1 locationCount:(int)arg2 result:(unsigned char)arg3 ;
-(void)startedProactiveTileDownloadForIdentifier:(id)arg0 policy:(unsigned char)arg1 ;


@end


#endif