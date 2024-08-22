// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLDISCRETIONARYINTERVAL_H
#define PLDISCRETIONARYINTERVAL_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "PLCPUEnergySnapshot.h"
#import "PLNetworkUsageSnapshot.h"

@interface PLDiscretionaryInterval : NSObject

@property (retain) PLCPUEnergySnapshot *cpuEnergySnapshot; // ivar: _cpuEnergySnapshot
@property (retain) NSDate *currentStartDate; // ivar: _currentStartDate
@property (retain) NSDate *endDate; // ivar: _endDate
@property (retain) PLNetworkUsageSnapshot *networkEnergySnapshot; // ivar: _networkEnergySnapshot
@property CGFloat openCount; // ivar: _openCount
@property (retain) NSDate *originalStartDate; // ivar: _originalStartDate
@property CGFloat startCount; // ivar: _startCount


-(BOOL)isClosed;
-(BOOL)shouldClose;
-(CGFloat)checkOpenIntervalDuration:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 andInfo:(id)arg1 andSnapshottingEnabled:(BOOL)arg2 andMockData:(id)arg3 ;
-(void)closeInterval;


@end


#endif