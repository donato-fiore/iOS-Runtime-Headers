// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ANEPERFORMANCESTATS_H
#define _ANEPERFORMANCESTATS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _ANEPerformanceStats : NSObject

@property (readonly, nonatomic) NSUInteger hwExecutionTime; // ivar: _hwExecutionTime
@property (readonly, nonatomic) NSData *perfCounterData; // ivar: _perfCounterData


+(id)new;
+(id)statsWithHardwareExecutionNS:(NSUInteger)arg0 ;
+(id)statsWithReconstructed:(id)arg0 hardwareExecutionNS:(NSUInteger)arg1 ;
+(id)statsWithRequestPerformanceBuffer:(**void)arg0 statsBufferSize:(*unsigned int)arg1 ;
+(unsigned int)driverMaskForANEFMask:(unsigned int)arg0 ;
-(id)description;
-(id)init;
-(id)initWithHardwareExecution:(NSUInteger)arg0 perfCounterData:(id)arg1 ;
-(id)initWithReconstructedData:(id)arg0 hardwareExecutionNS:(NSUInteger)arg1 ;
-(id)initWithRequestPerformanceBuffer:(**void)arg0 statsBufferSize:(*unsigned int)arg1 ;
-(id)performanceCounters;
-(id)stringForPerfCounter:(int)arg0 ;
-(void)emitPerfcounterSignpostsWithModelStringID:(NSUInteger)arg0 ;


@end


#endif