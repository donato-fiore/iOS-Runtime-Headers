// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLENTRYDEFINITION_H
#define PLENTRYDEFINITION_H


#import <Foundation/Foundation.h>


@interface PLEntryDefinition : NSObject



+(BOOL)cacheSQLPrepareStatementForEntryDefinition:(id)arg0 ;
+(BOOL)cacheSQLPrepareStatementForEntryKey:(id)arg0 ;
+(BOOL)filterEntryLoggingForEntryDefinition:(id)arg0 ;
+(BOOL)filterEntryLoggingForEntryKey:(id)arg0 ;
+(BOOL)hasAppIdentifierKeysForEntryDefinition:(id)arg0 ;
+(BOOL)hasArrayKeysForEntryDefinition:(id)arg0 ;
+(BOOL)hasArrayKeysForEntryKey:(id)arg0 ;
+(BOOL)hasDynamicKeysForEntryDefinition:(id)arg0 ;
+(BOOL)hasDynamicKeysForEntryKey:(id)arg0 ;
+(BOOL)isAggregateForEntryDefinition:(id)arg0 ;
+(BOOL)isAggregateForEntryKey:(id)arg0 ;
+(BOOL)isAggregateWallClockBucket:(id)arg0 ;
+(BOOL)isAggregateWallClockBucketForEntryDefinition:(id)arg0 ;
+(BOOL)isOnDemandQueryableForEntryDefinition:(id)arg0 ;
+(BOOL)isOnDemandQueryableForEntryKey:(id)arg0 ;
+(BOOL)overridesEntryDateForEntryDefinition:(id)arg0 ;
+(BOOL)overridesEntryDateForEntryKey:(id)arg0 ;
+(CGFloat)schemaVersionForEntryDefinition:(id)arg0 ;
+(CGFloat)schemaVersionForEntryKey:(id)arg0 ;
+(id)aggregateBucketDefinitionsForEntryDefinition:(id)arg0 ;
+(id)aggregateBucketDefinitionsForEntryKey:(id)arg0 ;
+(id)allAggregateKeysForEntryDefinition:(id)arg0 ;
+(id)allAggregateKeysForEntryKey:(id)arg0 ;
+(id)allAggregatePrimaryKeysForEntryDefinition:(id)arg0 ;
+(id)allAggregatePrimaryKeysForEntryKey:(id)arg0 ;
+(id)allDynamicKeysForEntryDefinition:(id)arg0 ;
+(id)allDynamicKeysForEntryKey:(id)arg0 ;
+(id)allIndexKeysForEntryDefinition:(id)arg0 ;
+(id)allIndexKeysForEntryKey:(id)arg0 ;
+(id)allKeysForEntryDefinition:(id)arg0 ;
+(id)allKeysForEntryKey:(id)arg0 ;
+(id)arrayKeysForEntryDefinition:(id)arg0 ;
+(id)arrayKeysForEntryKey:(id)arg0 ;
+(id)configsForEntryDefinition:(id)arg0 ;
+(id)configsForEntryKey:(id)arg0 ;
+(id)definitionForEntryKey:(id)arg0 ;
+(id)dynamicKeyConfigsForEntryDefinition:(id)arg0 ;
+(id)dynamicKeyConfigsForEntryKey:(id)arg0 ;
+(id)entryDefinitionsForOperator:(id)arg0 ;
+(id)entryDefinitionsForOperatorClass:(Class)arg0 ;
+(id)keyConfigsForEntryDefinition:(id)arg0 ;
+(id)keyConfigsForEntryKey:(id)arg0 ;
+(id)logSelectorStringForEnteryKey:(id)arg0 ;
+(id)logSelectorStringForEntryDefinition:(id)arg0 ;
+(id)manualSortOrderForEntryDefinition:(id)arg0 ;
+(id)manualSortOrderForEntryKey:(id)arg0 ;
+(id)notificationNameForEntryKey:(id)arg0 withFilterDefintion:(id)arg1 ;
+(id)pruneEmptyValueEntryFromDict:(id)arg0 ;
+(id)sharedInstance;
+(id)sortedKeysFromEntryDefinition:(id)arg0 ;
+(id)subEntryKeyKeyForEntryDefinition:(id)arg0 ;
+(id)subEntryKeyKeyForEntryKey:(id)arg0 ;
+(int)cacheCountForEntryDefition:(id)arg0 ;
+(int)cacheCountForEntryKey:(id)arg0 ;
+(int)limitOfType:(id)arg0 forEntryDefinition:(id)arg1 ;
+(int)limitOfType:(id)arg0 forEntryKey:(id)arg1 ;
+(short)aggregateFunctionForEntryDefinition:(id)arg0 forKey:(id)arg1 ;
-(id)commonTypeDict_BoolFormat;
-(id)commonTypeDict_DateFormat;
-(id)commonTypeDict_DateFormat_isCFAbsoluteTime;
-(id)commonTypeDict_IntegerFormat;
-(id)commonTypeDict_IntegerFormat_aggregateFunction_sum;
-(id)commonTypeDict_IntegerFormat_withUnit_mA;
-(id)commonTypeDict_IntegerFormat_withUnit_mAh;
-(id)commonTypeDict_IntegerFormat_withUnit_mV;
-(id)commonTypeDict_IntegerFormat_withUnit_ms;
-(id)commonTypeDict_IntegerFormat_withUnit_s;
-(id)commonTypeDict_IntegerFormat_withUnit_us;
-(id)commonTypeDict_RawDataFormat;
-(id)commonTypeDict_RealFormat;
-(id)commonTypeDict_RealFormat_aggregateFunction_sum;
-(id)commonTypeDict_RealFormat_withUnit_mJ;
-(id)commonTypeDict_RealFormat_withUnit_mW;
-(id)commonTypeDict_RealFormat_withUnit_mWhr;
-(id)commonTypeDict_RealFormat_withUnit_s;
-(id)commonTypeDict_StringFormat;
-(id)commonTypeDict_StringFormat_withAppName;
-(id)commonTypeDict_StringFormat_withBundleID;
-(id)commonTypeDict_StringFormat_withProcessName;


@end


#endif