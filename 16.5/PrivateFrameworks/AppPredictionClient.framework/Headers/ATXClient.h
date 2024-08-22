// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCLIENT_H
#define ATXCLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXCacheReader.h"

@interface ATXClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _consumerType;
    ATXCacheReader *_cacheReader;
}


@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)clientForConsumerType:(NSUInteger)arg0 ;
+(id)clientForConsumerType:(NSUInteger)arg0 cacheBasePath:(id)arg1 ;
+(id)clientForConsumerType:(NSUInteger)arg0 cachePath:(char *)arg1 ;
-(BOOL)forceCacheUpdateForConsumerSubType:(unsigned char)arg0 intent:(id)arg1 candidateBundleIdentifiers:(id)arg2 candidateIntentTypeIdentifiers:(id)arg3 ;
-(BOOL)shouldPredictAppBundleId:(id)arg0 ;
-(BOOL)shouldPredictBundleIdForShortcuts:(id)arg0 action:(id)arg1 ;
-(BOOL)shouldPredictBundleIdForShortcuts:(id)arg0 action:(id)arg1 forPrimaryShortcuts:(BOOL)arg2 ;
-(id)_asyncProxy;
-(id)_getConnection;
-(id)_minuteZeroResponse;
-(id)_predicateForDenyList:(id)arg0 ;
-(id)_simulatorResponse;
-(id)_syncProxy;
-(id)appPredictionsForConsumerSubType:(unsigned char)arg0 blackList:(id)arg1 limit:(int)arg2 runningDiagnostics:(BOOL)arg3 ;
-(id)appPredictionsForConsumerSubType:(unsigned char)arg0 limit:(int)arg1 ;
-(id)approvedSiriKitIntents;
-(id)atxResponseFromBlendingAppPredictionCacheForConsumerSubType:(unsigned char)arg0 filterPredicate:(id)arg1 limit:(int)arg2 ;
-(id)getAppPredictorAssetMappingDescription;
-(id)init;
-(id)initWithConsumerType:(NSUInteger)arg0 cacheBasePath:(id)arg1 ;
-(void)dealloc;
-(void)logUserFeedback:(id)arg0 consumerSubType:(unsigned char)arg1 engagementType:(NSUInteger)arg2 bundleIdentifier:(id)arg3 bundleIdsShown:(id)arg4 explicitlyRejectedIds:(id)arg5 ;
-(void)sortAppsByLaunches:(id)arg0 reply:(id)arg1 ;


@end


#endif