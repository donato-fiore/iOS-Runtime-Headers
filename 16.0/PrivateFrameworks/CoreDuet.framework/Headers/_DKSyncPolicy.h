// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKSYNCPOLICY_H
#define _DKSYNCPOLICY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _DKSyncPolicy : NSObject {
    BOOL _syncDisabled;
    BOOL _alwaysSyncUpAndDown;
    BOOL _pushTriggersSync;
    BOOL _forceSync;
    NSUInteger _assetThresholdInBytes;
    NSUInteger _firstSyncPeriodInDays;
    NSUInteger _maxSyncDownIntervalInDays;
    NSUInteger _minSyncIntervalInSeconds;
    NSUInteger _minSyncsPerDay;
    NSUInteger _maxSyncsPerDay;
    NSUInteger _numChangesTriggeringSync;
    NSUInteger _singleDeviceSyncIntervalInDays;
    NSArray *_streamNamesWithAdditionsTriggeringSync;
    NSArray *_streamNamesWithDeletionsTriggeringSync;
    NSUInteger _syncTimeoutInSeconds;
    NSUInteger _triggeredSyncDelayInSeconds;
    NSUInteger _policyDownloadIntervalInDays;
}


@property (readonly, nonatomic) BOOL alwaysSyncUpAndDown;
@property (readonly, nonatomic) NSUInteger assetThresholdInBytes;
@property (readonly, nonatomic) NSUInteger firstSyncPeriodInDays;
@property (readonly, nonatomic) BOOL forceSync;
@property (readonly, nonatomic) NSUInteger maxSyncDownIntervalInDays;
@property (readonly, nonatomic) NSUInteger maxSyncsPerDay;
@property (readonly, nonatomic) NSUInteger minSyncIntervalInSeconds;
@property (readonly, nonatomic) NSUInteger minSyncsPerDay;
@property (readonly, nonatomic) NSUInteger numChangesTriggeringSync;
@property (readonly, nonatomic) BOOL pushTriggersSync;
@property (readonly, nonatomic) NSUInteger singleDeviceSyncIntervalInDays;
@property (readonly, nonatomic) NSArray *streamNamesWithAdditionsTriggeringSync;
@property (readonly, nonatomic) NSArray *streamNamesWithDeletionsTriggeringSync;
@property (readonly, nonatomic) BOOL syncDisabled;
@property (readonly, nonatomic) NSUInteger syncTimeoutInSeconds;
@property (readonly, nonatomic) NSUInteger triggeredSyncDelayInSeconds;


+(id)policy;
-(CGFloat)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)arg0 ;
-(id)description;
-(id)queryStartDateFromLastDaySyncDates:(id)arg0 lastSyncDate:(id)arg1 isSingleDevice:(BOOL)arg2 isTriggeredSync:(BOOL)arg3 ;


@end


#endif