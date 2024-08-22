// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APXPCACTIVITYCRITERIA_H
#define APXPCACTIVITYCRITERIA_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface APXPCActivityCriteria : NSObject

@property (nonatomic) BOOL allowBattery; // ivar: _allowBattery
@property (nonatomic) NSDictionary *customProperties; // ivar: _customProperties
@property (nonatomic) NSInteger delay; // ivar: _delay
@property (nonatomic) NSInteger firstRunInterval; // ivar: _firstRunInterval
@property (nonatomic) NSInteger gracePeriod; // ivar: _gracePeriod
@property (nonatomic) NSInteger interval; // ivar: _interval
@property (nonatomic) BOOL isCPUIntensive; // ivar: _isCPUIntensive
@property (nonatomic) BOOL isRepeating; // ivar: _isRepeating
@property (nonatomic) char * priority; // ivar: _priority
@property (nonatomic) BOOL requireBuddyComplete; // ivar: _requireBuddyComplete
@property (nonatomic) BOOL requireClassCData; // ivar: _requireClassCData
@property (nonatomic) BOOL requireSleep; // ivar: _requireSleep
@property (nonatomic) BOOL requiresNetworkConnectivity; // ivar: _requiresNetworkConnectivity


-(id)init;


@end


#endif