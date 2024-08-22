// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFANALYTICS_H
#define SFANALYTICS_H

@class NSMutableDictionary, NSString, NSMutableSet;
@protocol SFAnalyticsProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFAnalyticsSQLiteStore.h"
#import "SFAnalyticsCollection.h"

@interface SFAnalytics : NSObject <SFAnalyticsProtocol>

 {
    SFAnalyticsSQLiteStore *_database;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_samplers;
    NSMutableDictionary *_multisamplers;
    BOOL _disableLogging;
}


@property (retain) SFAnalyticsCollection *collection; // ivar: _collection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableSet *metricsHooks; // ivar: _metricsHooks
@property (readonly) Class superclass;


+(NSInteger)fuzzyDaysSinceDate:(id)arg0 ;
+(NSInteger)fuzzyInteger:(NSInteger)arg0 ;
+(id)databasePath;
+(id)defaultAnalyticsDatabasePath:(id)arg0 ;
+(id)defaultProtectedAnalyticsDatabasePath:(id)arg0 ;
+(id)defaultProtectedAnalyticsDatabasePath:(id)arg0 uuid:(id)arg1 ;
+(id)encodeSFACollection:(id)arg0 error:(*id)arg1 ;
+(id)fuzzyNumber:(id)arg0 ;
+(id)hwModelID;
+(id)logger;
+(void)addOSVersionToEvent:(id)arg0 ;
+(void)removeLegacyDefaultAnalyticsDatabasePath:(id)arg0 usingDispatchToken:(*NSInteger)arg1 ;
-(id)AddMultiSamplerForName:(id)arg0 withTimeInterval:(CGFloat)arg1 block:(id)arg2 ;
-(id)addMetricSamplerForName:(id)arg0 withTimeInterval:(CGFloat)arg1 block:(id)arg2 ;
-(id)coreAnalyticsKeyFilter:(id)arg0 ;
-(id)dailyMetrics;
-(id)dataPropertyForKey:(id)arg0 ;
-(id)database;
-(id)datePropertyForKey:(id)arg0 ;
-(id)eventDictForEventName:(id)arg0 withAttributes:(id)arg1 eventClass:(NSInteger)arg2 timestampBucket:(CGFloat)arg3 ;
-(id)existingMetricSamplerForName:(id)arg0 ;
-(id)existingMultiSamplerForName:(id)arg0 ;
-(id)init;
-(id)logSystemMetricsForActivityNamed:(id)arg0 withAction:(id)arg1 ;
-(id)metricsAccountID;
-(id)numberPropertyForKey:(id)arg0 ;
-(id)startLogSystemMetricsForActivityNamed:(id)arg0 ;
-(void)addMetricsHook:(id)arg0 ;
-(void)dailyCoreAnalyticsMetrics:(id)arg0 ;
-(void)drainLogQueue;
-(void)incrementIntegerPropertyForKey:(id)arg0 ;
-(void)loadCollectionConfiguration;
-(void)logEventNamed:(id)arg0 class:(NSInteger)arg1 attributes:(id)arg2 ;
-(void)logEventNamed:(id)arg0 class:(NSInteger)arg1 attributes:(id)arg2 timestampBucket:(unsigned int)arg3 ;
-(void)logHardFailureForEventNamed:(id)arg0 withAttributes:(id)arg1 ;
-(void)logHardFailureForEventNamed:(id)arg0 withAttributes:(id)arg1 timestampBucket:(unsigned int)arg2 ;
-(void)logMetric:(id)arg0 withName:(id)arg1 ;
-(void)logMetric:(id)arg0 withName:(id)arg1 oncePerReport:(BOOL)arg2 ;
-(void)logResultForEvent:(id)arg0 hardFailure:(BOOL)arg1 result:(id)arg2 ;
-(void)logResultForEvent:(id)arg0 hardFailure:(BOOL)arg1 result:(id)arg2 timestampBucket:(unsigned int)arg3 ;
-(void)logResultForEvent:(id)arg0 hardFailure:(BOOL)arg1 result:(id)arg2 withAttributes:(id)arg3 ;
-(void)logResultForEvent:(id)arg0 hardFailure:(BOOL)arg1 result:(id)arg2 withAttributes:(id)arg3 timestampBucket:(unsigned int)arg4 ;
-(void)logSoftFailureForEventNamed:(id)arg0 withAttributes:(id)arg1 ;
-(void)logSoftFailureForEventNamed:(id)arg0 withAttributes:(id)arg1 timestampBucket:(unsigned int)arg2 ;
-(void)logSuccessForEventNamed:(id)arg0 ;
-(void)logSuccessForEventNamed:(id)arg0 timestampBucket:(unsigned int)arg1 ;
-(void)noteEventNamed:(id)arg0 ;
-(void)noteEventNamed:(id)arg0 timestampBucket:(unsigned int)arg1 ;
-(void)removeMetricSamplerForName:(id)arg0 ;
-(void)removeMetricsHook:(id)arg0 ;
-(void)removeMultiSamplerForName:(id)arg0 ;
-(void)removeState;
-(void)setDataProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setDateProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setMetricsAccountID:(id)arg0 ;
-(void)setNumberProperty:(id)arg0 forKey:(id)arg1 ;
-(void)updateCollectionConfigurationWithData:(id)arg0 ;


@end


#endif