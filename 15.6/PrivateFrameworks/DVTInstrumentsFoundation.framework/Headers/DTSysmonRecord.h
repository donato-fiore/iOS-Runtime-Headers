// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTSYSMONRECORD_H
#define DTSYSMONRECORD_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "DTSysmonCPUUsageRecord.h"
#import "DTSysmonSystemRecord.h"

@interface DTSysmonRecord : NSObject

@property (retain, nonatomic) NSArray *changedProcesses; // ivar: _changedProcesses
@property (retain, nonatomic) NSArray *coalitionAttributes; // ivar: _coalitionAttributes
@property (retain, nonatomic) NSArray *coalitions; // ivar: _coalitions
@property (retain, nonatomic) DTSysmonCPUUsageRecord *cpuUsage; // ivar: _cpuUsage
@property (retain, nonatomic) NSArray *deadCoalitions; // ivar: _deadCoalitions
@property (retain, nonatomic) NSArray *deadProcesses; // ivar: _deadProcesses
@property (nonatomic) NSUInteger endTimestamp; // ivar: _endTimestamp
@property (retain, nonatomic) NSArray *processAttributes; // ivar: _processAttributes
@property (nonatomic) unsigned int recordType; // ivar: _recordType
@property (nonatomic) NSUInteger startTimestamp; // ivar: _startTimestamp
@property (retain, nonatomic) DTSysmonSystemRecord *system; // ivar: _system
@property (retain, nonatomic) NSArray *systemAttributes; // ivar: _systemAttributes




@end


#endif