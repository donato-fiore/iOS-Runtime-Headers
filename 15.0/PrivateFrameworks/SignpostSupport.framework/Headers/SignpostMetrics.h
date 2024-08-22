// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNPOSTMETRICS_H
#define SIGNPOSTMETRICS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface SignpostMetrics : NSObject

@property (readonly, nonatomic) NSData *binarySnapshot; // ivar: _binarySnapshot
@property (readonly, nonatomic) NSNumber *cpuInstructionsKI; // ivar: _cpuInstructionsKI
@property (readonly, nonatomic) NSNumber *cpuTimeNsec; // ivar: _cpuTimeNsec
@property (readonly, nonatomic) NSNumber *dirtyMemoryKB; // ivar: _dirtyMemoryKB
@property (readonly, nonatomic) NSNumber *dirtyMemoryLifetimePeakKB; // ivar: _dirtyMemoryLifetimePeakKB
@property (readonly, nonatomic) NSNumber *storageDirtiedKB; // ivar: _storageDirtiedKB


+(id)_deltaDescription:(id)arg0 ;
+(id)_newMetricsFromData:(id)arg0 ;
+(id)newMetricsForSignpostEvent:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithSnapshotDict:(id)arg0 data:(id)arg1 ;


@end


#endif