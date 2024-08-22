// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BGSYSTEMTASKREQUEST_H
#define BGSYSTEMTASKREQUEST_H

@class NSString, NSArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BGSystemTaskRequest : NSObject <NSCopying>



@property (nonatomic) BOOL appRefresh; // ivar: _appRefresh
@property (nonatomic) BOOL backlogged; // ivar: _backlogged
@property (nonatomic) BOOL blockRebootActivitiesForSU; // ivar: _blockRebootActivitiesForSU
@property (nonatomic) BOOL bypassBatteryAging; // ivar: _bypassBatteryAging
@property (nonatomic) BOOL bypassPeakPower; // ivar: _bypassPeakPower
@property (nonatomic) BOOL communicatesWithPairedDevice; // ivar: _communicatesWithPairedDevice
@property (nonatomic) BOOL dataBudgeted; // ivar: _dataBudgeted
@property (nonatomic) CGFloat expectedDuration; // ivar: _expectedDuration
@property (nonatomic) NSUInteger groupConcurrencyLimit; // ivar: _groupConcurrencyLimit
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *involvedProcesses; // ivar: _involvedProcesses
@property (nonatomic) BOOL magneticInterferenceSensitivity; // ivar: _magneticInterferenceSensitivity
@property (nonatomic) BOOL mailFetch; // ivar: _mailFetch
@property (nonatomic) BOOL mayRebootDevice; // ivar: _mayRebootDevice
@property (nonatomic) NSInteger networkDownloadSize; // ivar: _networkDownloadSize
@property (copy, nonatomic) NSDictionary *networkEndpoint; // ivar: _networkEndpoint
@property (copy, nonatomic) NSDictionary *networkParameters; // ivar: _networkParameters
@property (nonatomic) NSInteger networkUploadSize; // ivar: _networkUploadSize
@property (nonatomic) BOOL overrideRateLimiting; // ivar: _overrideRateLimiting
@property (nonatomic) BOOL postInstall; // ivar: _postInstall
@property (nonatomic) BOOL powerBudgeted; // ivar: _powerBudgeted
@property (nonatomic) BOOL powerNap; // ivar: _powerNap
@property (nonatomic) BOOL preventsDeviceSleep; // ivar: _preventsDeviceSleep
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) CGFloat randomInitialDelay; // ivar: _randomInitialDelay
@property (copy, nonatomic) NSArray *relatedApplications; // ivar: _relatedApplications
@property (nonatomic) BOOL requiresBuddyComplete; // ivar: _requiresBuddyComplete
@property (nonatomic) BOOL requiresExternalPower; // ivar: _requiresExternalPower
@property (nonatomic) BOOL requiresInexpensiveNetworkConnectivity; // ivar: _requiresInexpensiveNetworkConnectivity
@property (nonatomic) NSUInteger requiresMinimumBatteryLevel; // ivar: _requiresMinimumBatteryLevel
@property (nonatomic) NSUInteger requiresMinimumDataBudgetPercentage; // ivar: _requiresMinimumDataBudgetPercentage
@property (nonatomic) BOOL requiresNetworkConnectivity; // ivar: _requiresNetworkConnectivity
@property (nonatomic) NSInteger requiresProtectionClass; // ivar: _requiresProtectionClass
@property (nonatomic) BOOL requiresSignificantUserInactivity; // ivar: _requiresSignificantUserInactivity
@property (nonatomic) BOOL requiresUserInactivity; // ivar: _requiresUserInactivity
@property (nonatomic) BOOL resourceIntensive; // ivar: _resourceIntensive
@property (nonatomic) BOOL runOnAppForeground; // ivar: _runOnAppForeground
@property (nonatomic) NSInteger runOnMotionState; // ivar: _runOnMotionState
@property (nonatomic) BOOL shouldWakeDevice; // ivar: _shouldWakeDevice
@property (nonatomic) BOOL useStatisticalModelForTriggersRestart; // ivar: _useStatisticalModelForTriggersRestart
@property (nonatomic) BOOL userRequestedBackupTask; // ivar: _userRequestedBackupTask


+(id)descriptorWithTaskRequest:(id)arg0 ;
+(id)taskRequestWithDescriptor:(id)arg0 withIdentifier:(id)arg1 ;
+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif