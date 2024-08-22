// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTSYSMONCPUUSAGERECORD_H
#define DTSYSMONCPUUSAGERECORD_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "DTSysmonCPUUsageEntry.h"

@interface DTSysmonCPUUsageRecord : NSObject

@property (retain, nonatomic) DTSysmonCPUUsageEntry *averageCPUUsage; // ivar: _averageCPUUsage
@property (nonatomic) unsigned int cpuCount; // ivar: _cpuCount
@property (nonatomic) unsigned int enabledCPUs; // ivar: _enabledCPUs
@property (retain, nonatomic) NSArray *perCPUUsage; // ivar: _perCPUUsage




@end


#endif