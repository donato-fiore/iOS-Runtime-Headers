// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDDCLIENTCONNECTION_H
#define CDDCLIENTCONNECTION_H

@class CDDebug;

#import <Foundation/Foundation.h>

#import "CDDXPCConnection.h"

@interface CDDClientConnection : NSObject

@property (readonly) NSUInteger clientId; // ivar: _clientId
@property (readonly) CDDXPCConnection *connection; // ivar: _connection
@property (readonly) CDDebug *debug; // ivar: _debug


-(BOOL)appsLaunchedSince:(id)arg0 butNotPrewarmedSince:(id)arg1 error:(*id)arg2 replyHandler:(id)arg3 ;
-(BOOL)attributeId:(NSUInteger)arg0 admissionCheckOfValue:(id)arg1 admissionCheckType:(int)arg2 attributeType:(int)arg3 options:(id)arg4 cost:(NSInteger)arg5 onDate:(id)arg6 risingEdge:(BOOL)arg7 fallingEdge:(BOOL)arg8 error:(*id)arg9 replyHandler:(id)arg10 ;
-(BOOL)attributeId:(NSUInteger)arg0 admissionCheckOfValue:(id)arg1 admissionCheckType:(int)arg2 attributeType:(int)arg3 options:(id)arg4 error:(*id)arg5 replyHandler:(id)arg6 ;
-(BOOL)attributeId:(NSUInteger)arg0 associateToBudgetId:(NSUInteger)arg1 error:(*id)arg2 replyHandler:(id)arg3 ;
-(BOOL)attributeId:(NSUInteger)arg0 attributeName:(id)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 cost:(NSInteger)arg6 onDate:(id)arg7 risingEdge:(BOOL)arg8 fallingEdge:(BOOL)arg9 error:(*id)arg10 replyHandler:(id)arg11 ;
-(BOOL)attributeId:(NSUInteger)arg0 attributeName:(id)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 error:(*id)arg6 replyHandler:(id)arg7 ;
-(BOOL)attributeId:(NSUInteger)arg0 attributeName:(id)arg1 associateToBudgetId:(NSUInteger)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)attributeId:(NSUInteger)arg0 attributeName:(id)arg1 historyOfValue:(id)arg2 forWindow:(id)arg3 filter:(NSInteger)arg4 maximumElements:(NSUInteger)arg5 error:(*id)arg6 replyHandler:(id)arg7 ;
-(BOOL)attributeId:(NSUInteger)arg0 attributeName:(id)arg1 meteredWithValue:(id)arg2 costDictionary:(id)arg3 onDate:(id)arg4 risingEdge:(BOOL)arg5 fallingEdge:(BOOL)arg6 type:(int)arg7 meterToken:(NSUInteger)arg8 error:(*id)arg9 replyHandler:(id)arg10 ;
-(BOOL)attributeId:(NSUInteger)arg0 attributeName:(id)arg1 occurredWithValue:(id)arg2 cost:(NSInteger)arg3 onDate:(id)arg4 risingEdge:(BOOL)arg5 fallingEdge:(BOOL)arg6 type:(int)arg7 error:(*id)arg8 replyHandler:(id)arg9 ;
-(BOOL)attributeId:(NSUInteger)arg0 attributeName:(id)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 deviceIdentifier:(id)arg4 error:(*id)arg5 replyHandler:(id)arg6 ;
-(BOOL)attributeId:(NSUInteger)arg0 attributeName:(id)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 error:(*id)arg4 replyHandler:(id)arg5 ;
-(BOOL)attributeId:(NSUInteger)arg0 attributeName:(id)arg1 setCategory:(NSUInteger)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)attributeId:(NSUInteger)arg0 attributeName:(id)arg1 statistic:(int)arg2 forHistoryWindow:(id)arg3 error:(*id)arg4 replyHandler:(id)arg5 ;
-(BOOL)attributeId:(NSUInteger)arg0 backgroundLaunch:(id)arg1 risingEdge:(BOOL)arg2 fallingEdge:(BOOL)arg3 type:(int)arg4 error:(*id)arg5 replyHandler:(id)arg6 ;
-(BOOL)attributeId:(NSUInteger)arg0 historyOfValue:(id)arg1 forWindow:(id)arg2 filter:(NSInteger)arg3 maximumElements:(NSUInteger)arg4 error:(*id)arg5 replyHandler:(id)arg6 ;
-(BOOL)attributeId:(NSUInteger)arg0 meteredWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 risingEdge:(BOOL)arg4 fallingEdge:(BOOL)arg5 type:(int)arg6 meterToken:(NSUInteger)arg7 error:(*id)arg8 replyHandler:(id)arg9 ;
-(BOOL)attributeId:(NSUInteger)arg0 occurredWithValue:(id)arg1 cost:(NSInteger)arg2 onDate:(id)arg3 risingEdge:(BOOL)arg4 fallingEdge:(BOOL)arg5 type:(int)arg6 error:(*id)arg7 replyHandler:(id)arg8 ;
-(BOOL)attributeId:(NSUInteger)arg0 repeatedStatistic:(int)arg1 forHistoryWindow:(id)arg2 deviceIdentifier:(id)arg3 error:(*id)arg4 replyHandler:(id)arg5 ;
-(BOOL)attributeId:(NSUInteger)arg0 repeatedStatistic:(int)arg1 forHistoryWindow:(id)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)attributeId:(NSUInteger)arg0 setCategory:(NSUInteger)arg1 error:(*id)arg2 replyHandler:(id)arg3 ;
-(BOOL)attributeId:(NSUInteger)arg0 statistic:(int)arg1 forHistoryWindow:(id)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)attributeNamesWithError:(*id)arg0 replyHandler:(id)arg1 ;
-(BOOL)broadcastSystemDataWithError:(*id)arg0 replyHandler:(id)arg1 ;
-(BOOL)budgetsForAttributeId:(NSUInteger)arg0 attributeName:(id)arg1 error:(*id)arg2 replyHandler:(id)arg3 ;
-(BOOL)budgetsForAttributeId:(NSUInteger)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)bundleIdChange:(*id)arg0 replyHandler:(id)arg1 ;
-(BOOL)bundleIdEntriesOlderThanDate:(id)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)compareAndSwapPool:(NSUInteger)arg0 compareValue:(NSInteger)arg1 swapValue:(NSInteger)arg2 type:(NSUInteger)arg3 error:(*id)arg4 replyHandler:(id)arg5 ;
-(BOOL)decrementPool:(NSUInteger)arg0 decrementValue:(NSInteger)arg1 type:(NSUInteger)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)deleteAllDatabaseEntriesOlderThanDate:(id)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)deleteAttributeId:(NSUInteger)arg0 attributeName:(id)arg1 error:(*id)arg2 replyHandler:(id)arg3 ;
-(BOOL)deleteAttributeId:(NSUInteger)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)deleteBundleId:(id)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)deleteDataWithError:(*id)arg0 replyHandler:(id)arg1 ;
-(BOOL)deletePool:(NSUInteger)arg0 type:(NSUInteger)arg1 error:(*id)arg2 replyHandler:(id)arg3 ;
-(BOOL)deregisterTrendableApp:(id)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)forecastAttributeId:(NSUInteger)arg0 attributeName:(id)arg1 value:(id)arg2 format:(NSInteger)arg3 historyWindow:(id)arg4 deviceIdentifier:(id)arg5 temporalLeeway:(CGFloat)arg6 limitCount:(NSUInteger)arg7 error:(*id)arg8 replyHandler:(id)arg9 ;
-(BOOL)forecastAttributeId:(NSUInteger)arg0 attributeName:(id)arg1 value:(id)arg2 format:(NSInteger)arg3 historyWindow:(id)arg4 limitCount:(NSUInteger)arg5 error:(*id)arg6 replyHandler:(id)arg7 ;
-(BOOL)forecastAttributeId:(NSUInteger)arg0 value:(id)arg1 format:(NSInteger)arg2 historyWindow:(id)arg3 deviceIdentifier:(id)arg4 temporalLeeway:(CGFloat)arg5 limitCount:(NSUInteger)arg6 error:(*id)arg7 replyHandler:(id)arg8 ;
-(BOOL)forecastAttributeId:(NSUInteger)arg0 value:(id)arg1 format:(NSInteger)arg2 historyWindow:(id)arg3 limitCount:(NSUInteger)arg4 error:(*id)arg5 replyHandler:(id)arg6 ;
-(BOOL)getDeviceFromDescription:(id)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)getDevicesWithError:(*id)arg0 replyHandler:(id)arg1 ;
-(BOOL)getLocalAppBundleId:(*id)arg0 replyHandler:(id)arg1 ;
-(BOOL)idForAttribute:(id)arg0 clientId:(NSInteger)arg1 error:(*id)arg2 replyHandler:(id)arg3 ;
-(BOOL)idForAttribute:(id)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)idForPool:(id)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)incrementPool:(NSUInteger)arg0 incrementValue:(NSInteger)arg1 type:(NSUInteger)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)message:(id)arg0 withReplyHandler:(id)arg1 ;
-(BOOL)poolNamesWithError:(*id)arg0 replyHandler:(id)arg1 ;
-(BOOL)readLiveAppsWithError:(*id)arg0 replyHandler:(id)arg1 ;
-(BOOL)readPool:(NSUInteger)arg0 type:(NSUInteger)arg1 error:(*id)arg2 replyHandler:(id)arg3 ;
-(BOOL)readRemoteRequestResult:(NSUInteger)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)readSystemDataFromDevice:(unsigned int)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)readTrendingAppsWithError:(*id)arg0 replyHandler:(id)arg1 ;
-(BOOL)registerAttribute:(id)arg0 withType:(int)arg1 dataProtectionClass:(id)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)registerChildPool:(id)arg0 parentIntegerId:(NSUInteger)arg1 poolType:(NSInteger)arg2 budgetOptions:(NSUInteger)arg3 maxFraction:(CGFloat)arg4 error:(*id)arg5 replyHandler:(id)arg6 ;
-(BOOL)registerChildPool:(id)arg0 parentIntegerId:(NSUInteger)arg1 poolType:(NSInteger)arg2 maxFraction:(CGFloat)arg3 error:(*id)arg4 replyHandler:(id)arg5 ;
-(BOOL)registerPool:(id)arg0 withInitialValue:(NSInteger)arg1 poolType:(NSInteger)arg2 budgetOptions:(NSUInteger)arg3 error:(*id)arg4 replyHandler:(id)arg5 ;
-(BOOL)registerPool:(id)arg0 withInitialValue:(NSInteger)arg1 poolType:(NSInteger)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)registerTrendableApp:(id)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)remoteFocalAppWithId:(NSUInteger)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)requestAdmissionLogFromDevice:(unsigned int)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)requestForecastFromDevice:(unsigned int)arg0 attributeId:(NSUInteger)arg1 attributeName:(id)arg2 value:(id)arg3 historyWindow:(id)arg4 format:(NSInteger)arg5 error:(*id)arg6 replyHandler:(id)arg7 ;
-(BOOL)requestForecastFromDevice:(unsigned int)arg0 attributeId:(NSUInteger)arg1 value:(id)arg2 historyWindow:(id)arg3 format:(NSInteger)arg4 error:(*id)arg5 replyHandler:(id)arg6 ;
-(BOOL)requestStatisticFromDevice:(unsigned int)arg0 attributeId:(NSUInteger)arg1 attributeName:(id)arg2 statistic:(int)arg3 historyWindow:(id)arg4 error:(*id)arg5 replyHandler:(id)arg6 ;
-(BOOL)requestStatisticFromDevice:(unsigned int)arg0 attributeId:(NSUInteger)arg1 statistic:(int)arg2 historyWindow:(id)arg3 error:(*id)arg4 replyHandler:(id)arg5 ;
-(BOOL)requestSystemDataFromDevice:(unsigned int)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)resetAdmissionMask:(NSUInteger)arg0 attributeName:(id)arg1 bitfield:(NSUInteger)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)resetAdmissionMask:(NSUInteger)arg0 bitfield:(NSUInteger)arg1 error:(*id)arg2 replyHandler:(id)arg3 ;
-(BOOL)resetAttributeId:(NSUInteger)arg0 attributeName:(id)arg1 type:(int)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)resetAttributeId:(NSUInteger)arg0 type:(int)arg1 error:(*id)arg2 replyHandler:(id)arg3 ;
-(BOOL)sendMessageWithType:(NSInteger)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)sendMessageWithType:(NSInteger)arg0 nameKey:(id)arg1 name:(id)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)sendMessageWithType:(NSInteger)arg0 nameKey:(id)arg1 name:(id)arg2 typeField:(NSUInteger)arg3 integerId:(NSUInteger)arg4 error:(*id)arg5 replyHandler:(id)arg6 ;
-(BOOL)sendMessageWithType:(NSInteger)arg0 nameKey:(id)arg1 name:(id)arg2 valueKey:(id)arg3 int64Value:(NSInteger)arg4 error:(*id)arg5 replyHandler:(id)arg6 ;
-(BOOL)sendMessageWithType:(NSInteger)arg0 nameKey:(id)arg1 name:(id)arg2 valueKey:(id)arg3 int64Value:(NSInteger)arg4 type:(NSUInteger)arg5 integerId:(NSUInteger)arg6 error:(*id)arg7 replyHandler:(id)arg8 ;
-(BOOL)sendMessageWithType:(NSInteger)arg0 valueKey1:(id)arg1 int64Value1:(NSInteger)arg2 valueKey2:(id)arg3 uint64Value2:(NSUInteger)arg4 valueKey3:(id)arg5 uint64Value3:(NSUInteger)arg6 error:(*id)arg7 replyHandler:(id)arg8 ;
-(BOOL)sendMessageWithType:(NSInteger)arg0 valueKey1:(id)arg1 uint64Value1:(NSUInteger)arg2 valueKey2:(id)arg3 uint64Value2:(NSUInteger)arg4 error:(*id)arg5 replyHandler:(id)arg6 ;
-(BOOL)sendMessageWithType:(NSInteger)arg0 valueKey:(id)arg1 uint64Value:(NSUInteger)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)setActiveBundles:(id)arg0 startTimestamps:(id)arg1 endTimestamps:(id)arg2 event:(NSUInteger)arg3 error:(*id)arg4 replyHandler:(id)arg5 ;
-(BOOL)setAdmissionMask:(NSUInteger)arg0 attributeName:(id)arg1 bitfield:(NSUInteger)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)setAdmissionMask:(NSUInteger)arg0 bitfield:(NSUInteger)arg1 error:(*id)arg2 replyHandler:(id)arg3 ;
-(BOOL)setNonAppBundlId:(id)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)versionWithError:(*id)arg0 replyHandler:(id)arg1 ;
-(id)init;
-(id)initWithClientId:(NSUInteger)arg0 error:(*id)arg1 ;


@end


#endif