// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKSYNC2POLICY_H
#define _DKSYNC2POLICY_H

@class NSString, NSArray, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface _DKSync2Policy : NSObject

@property (nonatomic) NSUInteger maxBatchesPerSync; // ivar: _maxBatchesPerSync
@property (nonatomic) NSUInteger maxSyncDownIntervalInDays; // ivar: _maxSyncDownIntervalInDays
@property (nonatomic) NSUInteger maxSyncPeriodInDays; // ivar: _maxSyncPeriodInDays
@property (nonatomic) NSUInteger maxSyncsPerDay; // ivar: _maxSyncsPerDay
@property (nonatomic) NSUInteger minSyncIntervalInSeconds; // ivar: _minSyncIntervalInSeconds
@property (nonatomic) NSUInteger minSyncWindowInSeconds; // ivar: _minSyncWindowInSeconds
@property (nonatomic) NSUInteger minSyncsPerDay; // ivar: _minSyncsPerDay
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger numChangesTriggeringSync; // ivar: _numChangesTriggeringSync
@property (nonatomic) NSUInteger policyDownloadIntervalInDays; // ivar: _policyDownloadIntervalInDays
@property (nonatomic) BOOL pushTriggersSync; // ivar: _pushTriggersSync
@property (nonatomic) BOOL requireCharging; // ivar: _requireCharging
@property (nonatomic) NSUInteger singleDeviceSyncIntervalInDays; // ivar: _singleDeviceSyncIntervalInDays
@property (retain, nonatomic) NSArray *streamNamesToAlwaysSync; // ivar: _streamNamesToAlwaysSync
@property (retain, nonatomic) NSDictionary *streamNamesToSync; // ivar: _streamNamesToSync
@property (retain, nonatomic) NSArray *streamNamesWithAdditionsTriggeringSync; // ivar: _streamNamesWithAdditionsTriggeringSync
@property (retain, nonatomic) NSArray *streamNamesWithDeletionsTriggeringSync; // ivar: _streamNamesWithDeletionsTriggeringSync
@property (nonatomic) NSUInteger syncBatchSizeInEvents; // ivar: _syncBatchSizeInEvents
@property (nonatomic) BOOL syncDisabled; // ivar: _syncDisabled
@property (nonatomic) NSUInteger syncTimeoutInSeconds; // ivar: _syncTimeoutInSeconds
@property (nonatomic) NSUInteger triggeredSyncDelayInSeconds; // ivar: _triggeredSyncDelayInSeconds
@property (retain, nonatomic) NSNumber *version; // ivar: _version


+(BOOL)cloudSyncDisabled;
+(BOOL)rapportSyncDisabled;
+(id)disabledFeaturesForSyncType:(id)arg0 transports:(NSInteger)arg1 ;
+(id)policyForSyncTransportType:(NSInteger)arg0 ;
+(id)policyFromDictionary:(id)arg0 ;
+(void)setOkToDownloadPolicyUpdates:(BOOL)arg0 ;
-(BOOL)canDeferSyncOperationWithSyncType:(id)arg0 ;
-(BOOL)canPerformSyncOperationWithSyncType:(id)arg0 lastSyncDate:(id)arg1 lastDaySyncCount:(NSUInteger)arg2 isCharging:(BOOL)arg3 ;
-(BOOL)highPriorityForSyncDownWithSyncType:(id)arg0 ;
-(BOOL)highPriorityForSyncUpWithSyncType:(id)arg0 lastSyncDate:(id)arg1 ;
-(CGFloat)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)arg0 ;
-(CGFloat)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)arg0 urgency:(NSUInteger)arg1 ;
-(id)description;
-(id)queryStartDateWithSyncType:(id)arg0 lastSyncDate:(id)arg1 lastDaySyncCount:(NSUInteger)arg2 previousHighWaterMark:(id)arg3 ;
-(id)queryStartDateWithSyncType:(id)arg0 previousHighWaterMark:(id)arg1 ;
-(id)streamNamesToSyncWithDisabledFeatures:(id)arg0 ;
-(id)streamNamesToSyncWithSyncType:(id)arg0 transportType:(NSInteger)arg1 ;


@end


#endif