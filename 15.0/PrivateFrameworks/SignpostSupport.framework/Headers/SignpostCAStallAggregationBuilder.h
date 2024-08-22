// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNPOSTCASTALLAGGREGATIONBUILDER_H
#define SIGNPOSTCASTALLAGGREGATIONBUILDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SignpostCAInstrumentationProcessor.h"
#import "SignpostCAStallAggregation.h"

@interface SignpostCAStallAggregationBuilder : NSObject {
    NSUInteger _frameLifetimeCount;
    NSUInteger _commitCount;
    NSUInteger _transactionLifetimeCount;
}


@property (readonly, nonatomic) SignpostCAInstrumentationProcessor *caInstrumentationProcessor; // ivar: _caInstrumentationProcessor
@property (nonatomic) float maxDurationSec; // ivar: _maxDurationSec
@property (readonly, nonatomic) SignpostCAStallAggregation *stallAggregation; // ivar: _stallAggregation
@property (readonly, copy, nonatomic) SignpostCAStallAggregation *stallAggregationSnapshot;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue


-(BOOL)_isOverThreshold:(id)arg0 ;
-(id)init;
-(id)newConfiguredExtractor;
-(void)_handleLongCommit:(id)arg0 ;
-(void)_handleLongFrameLifetime:(id)arg0 ;
-(void)_handleLongTransactionLifetime:(id)arg0 ;
-(void)_initializeCAInstrumentationProcessor;
-(void)_processDurationNs:(NSUInteger)arg0 type:(unsigned char)arg1 processExecutablePath:(id)arg2 pid:(int)arg3 aggregateForSystem:(BOOL)arg4 ;
-(void)addSubsystemCategoriesOfInterestToAllowlist:(id)arg0 ;
-(void)addSubsystemCategoriesOfInterestToWhitelist:(id)arg0 ;
-(void)handleDeviceReboot;
-(void)handleSignpostEvent:(id)arg0 ;
-(void)handleSignpostInterval:(id)arg0 ;
-(void)handleSignpostIntervalBegin:(id)arg0 ;


@end


#endif