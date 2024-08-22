// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOREQUESTCOUNTERPERSISTENCE_H
#define GEOREQUESTCOUNTERPERSISTENCE_H


#import <Foundation/Foundation.h>

#import "GEOSQLiteDB.h"

@interface GEORequestCounterPersistence : NSObject {
    GEOSQLiteDB *_db;
    CGFloat _maxAge;
}


@property (nonatomic) BOOL enabled; // ivar: _enabled


+(id)sharedInstance;
-(id)init;
-(id)initWithDBFilePath:(id)arg0 maxCountAge:(CGFloat)arg1 ;
-(void)_purgeOlderThan:(id)arg0 ;
-(void)_recordAnalylticsCount:(NSInteger)arg0 logMsgType:(NSInteger)arg1 at:(id)arg2 withFxn:(*unk)arg3 ;
-(void)_tearDown;
-(void)addPlaceCacheResultForApp:(id)arg0 timestamp:(id)arg1 requestTypeRaw:(int)arg2 result:(unsigned char)arg3 ;
-(void)countsDuring:(id)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)externalRequestsCount:(id)arg0 ;
// -(void)fetchAnalyticsHandlingDataFrom:(id)arg0 completion:(id)arg1 completionQueue:(unk)arg2  ;
// -(void)fetchRoutePreloadSessionsFrom:(id)arg0 completion:(id)arg1 completionQueue:(unk)arg2  ;
-(void)finishedProactiveTileDownloadForIdentifier:(id)arg0 policy:(unsigned char)arg1 tilesConsidered:(unsigned int)arg2 tileDownloadAttempts:(unsigned int)arg3 successes:(unsigned int)arg4 failures:(unsigned int)arg5 bytesDownloaded:(NSUInteger)arg6 ;
// -(void)getPlaceCacheResultsInTimeRange:(id)arg0 rawCounts:(id)arg1 complete:(unk)arg2  ;
-(void)incrementExternalForApp:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 xmitBytes:(NSInteger)arg3 recvBytes:(NSInteger)arg4 usedInterfaces:(NSUInteger)arg5 requestType:(id)arg6 requestSubtype:(id)arg7 source:(id)arg8 ;
-(void)incrementForApp:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 requestType:(int)arg3 result:(unsigned char)arg4 xmitBytes:(NSInteger)arg5 recvBytes:(NSInteger)arg6 usedInterfaces:(NSUInteger)arg7 withCompletion:(id)arg8 ;
-(void)logsDuring:(id)arg0 withCompletion:(id)arg1 ;
-(void)purgeAllCounts;
-(void)readProactiveTileDownloadsSince:(id)arg0 handler:(id)arg1 ;
-(void)recordAnalyticsDBExpireCount:(NSInteger)arg0 logMsgType:(NSInteger)arg1 at:(id)arg2 ;
-(void)recordAnalyticsPersistCount:(NSInteger)arg0 logMsgType:(NSInteger)arg1 at:(id)arg2 ;
-(void)recordAnalyticsUploadFailureCount:(NSInteger)arg0 logMsgType:(NSInteger)arg1 at:(id)arg2 ;
-(void)recordAnalyticsUploadSuccessCount:(NSInteger)arg0 bytes:(NSInteger)arg1 logMsgType:(NSInteger)arg2 usedCellular:(BOOL)arg3 at:(id)arg4 ;
-(void)recordRoutePreloadSessionAt:(id)arg0 transportType:(NSInteger)arg1 tilesPreloaded:(NSUInteger)arg2 tilesUsed:(NSUInteger)arg3 tilesMissed:(NSUInteger)arg4 ;
-(void)startedProactiveTileDownloadForIdentifier:(id)arg0 policy:(unsigned char)arg1 ;


@end


#endif