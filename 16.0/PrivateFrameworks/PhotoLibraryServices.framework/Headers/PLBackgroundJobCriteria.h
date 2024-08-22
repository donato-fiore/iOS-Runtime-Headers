// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDJOBCRITERIA_H
#define PLBACKGROUNDJOBCRITERIA_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PLBackgroundJobCriteria : NSObject <NSCopying>

 {
    NSUInteger _xpcActivityPriority;
    BOOL _allowBattery;
    NSInteger _gracePeriod;
    BOOL _requireScreenSleep;
    BOOL _cpuIntensive;
    BOOL _requireInexpensiveNetworkConnectivity;
    BOOL _requireConcurrencyLimit;
    BOOL _overrideRateLimiting;
}


@property (readonly, copy) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSString *shortCode; // ivar: _shortCode


+(id)allKnownCriterias;
+(id)allKnownShortCodes;
+(id)criteriaForDiscretionaryResourceWorker;
+(id)criteriaForDuplicateDetectorWorker;
+(id)criteriaForHubbleNetworkDownloadWorker;
+(id)criteriaForHubbleWorker;
+(id)criteriaForIncrementalSearchWorker;
+(id)criteriaForRebuildSearchWorker;
+(id)criteriaForUrgentResourceWorker;
+(id)criteriaWithKnownShortCode:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 shortCode:(id)arg1 xpcActivityPriority:(NSUInteger)arg2 allowBattery:(BOOL)arg3 gracePeriod:(NSInteger)arg4 requireScreenSleep:(BOOL)arg5 cpuIntensive:(BOOL)arg6 requireInexpensiveNetworkConnectivity:(BOOL)arg7 requireConcurrencyLimit:(BOOL)arg8 overrideRateLimiting:(BOOL)arg9 ;
-(id)xpcCriteria;


@end


#endif