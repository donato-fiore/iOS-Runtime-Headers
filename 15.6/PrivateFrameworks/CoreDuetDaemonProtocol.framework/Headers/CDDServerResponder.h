// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDDSERVERRESPONDER_H
#define CDDSERVERRESPONDER_H

@class CDDebug;

#import <Foundation/Foundation.h>


@interface CDDServerResponder : NSObject

@property (readonly) CDDebug *debug; // ivar: _debug


-(BOOL)respondIndicatingProtocolErrorOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 protocolErrorNumber:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)respondToAdmissionCheckAndStartedOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 admissionGranted:(BOOL)arg3 grantValiditySeconds:(NSUInteger)arg4 admissionCondition:(NSUInteger)arg5 error:(*id)arg6 ;
-(BOOL)respondToAdmissionCheckOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 admissionGranted:(BOOL)arg3 grantValiditySeconds:(NSUInteger)arg4 admissionCondition:(NSUInteger)arg5 error:(*id)arg6 ;
-(BOOL)respondToAppsLaunchedButNotPrewarmedSinceDateOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToAssociateToBudgetOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToAttributeNamesOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 resultDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToAttributeOccurredOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToAttributeRepeatedStatisticOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 statisticsArray:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToAttributeReset:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToAttributeStatisticOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 statisticsDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToBackgroundLaunchOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToBroadcastSystemDataOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToBudgetsForAttributeIdOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToBundleIdChangeOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToBundleIdEntriesOlderThanDateOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 status:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)respondToCompareAndSwapPoolOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 finalValue:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)respondToDebugBitmapOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToDecrementPoolOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 decrementedValue:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)respondToDeleteAllDatabaseEntriesOlderThanDateOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToDeleteAttributeIdOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToDeleteBundleIdOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToDeleteDataForClientIdOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToDeletePoolOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToDeregisterTrendableAppOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToForecastAttributeIdOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 resultDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToGetCtlOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 mitigationDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToGetDeviceFromDescriptionOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToGetDevicesOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToGetRemoteSystemDataOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToHistoryQueryOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 resultDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToIdForAttributeOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 attributeId:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)respondToIdForPoolOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 integerId:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)respondToIncrementPoolOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 incrementedValue:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)respondToLiveAppsOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToLocalFocalAppsOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToMeteringForAttributeOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 meterToken:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)respondToPoolNamesOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 resultDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToReadPoolOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 readValue:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)respondToReadRemoteRequestResultOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseKey:(char *)arg3 responseDictionary:(id)arg4 error:(*id)arg5 ;
-(BOOL)respondToReadSystemDataFromDeviceOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToRegisterAttributeOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 registeredAttributeId:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)respondToRegisterChildPoolOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 initialValue:(NSInteger)arg3 integerId:(NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)respondToRegisterForSignoff:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToRegisterPoolOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 initialValue:(NSInteger)arg3 integerId:(NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)respondToRegisterTrendableAppOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToRemoteFocalAppsOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToRequestAdmissionLogFromDeviceOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToRequestDeviceForecastDataOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToRequestDeviceStatisticDataOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToRequestSystemDataFromDeviceOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToResetAdmissionMask:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToSetAdmissionMask:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToSetCategoryOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToSetCtlOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToSetNonAppFocalOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToSignoffConditionsChangedOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToTrendingAppsOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 responseDictionary:(id)arg3 error:(*id)arg4 ;
-(BOOL)respondToTriggerSystemDataExchange:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToVersionOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)sendMessageOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 type:(NSInteger)arg3 dictionaryKey:(id)arg4 dictionary:(id)arg5 error:(*id)arg6 ;
-(BOOL)sendMessageOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 type:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)sendMessageOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 type:(NSInteger)arg3 nameKey:(id)arg4 name:(id)arg5 dictionaryKey:(id)arg6 dictionary:(id)arg7 error:(*id)arg8 ;
-(BOOL)sendMessageOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 type:(NSInteger)arg3 nameKey:(id)arg4 name:(id)arg5 error:(*id)arg6 ;
-(BOOL)sendMessageOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 type:(NSInteger)arg3 nameKey:(id)arg4 name:(id)arg5 valueKey:(id)arg6 value:(NSInteger)arg7 error:(*id)arg8 ;
-(BOOL)sendMessageOnConnection:(id)arg0 usingMessage:(id)arg1 withSequenceNumber:(NSUInteger)arg2 type:(NSInteger)arg3 valueKey:(id)arg4 value:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)init;
-(id)makeStashWithId:(NSUInteger)arg0 ;


@end


#endif