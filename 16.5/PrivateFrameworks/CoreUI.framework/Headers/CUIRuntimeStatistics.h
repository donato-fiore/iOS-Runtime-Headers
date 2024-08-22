// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIRUNTIMESTATISTICS_H
#define CUIRUNTIMESTATISTICS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUIRuntimeStatistics : NSObject {
    uint8_t _wasted_size;
    uint8_t _total_size;
    uint8_t _shortCircuitImageLookup;
    uint8_t _total_lookup;
    uint8_t _total_probes;
    uint8_t _total_initial_lookups;
    uint8_t _missed_lookup;
    NSObject<OS_dispatch_queue> *_queue;
    int _notify_token;
}




+(id)sharedRuntimeStatistics;
+(void)generateLog;
-(NSInteger)shortCircuitImageLookup;
-(id)init;
-(void)addStatisticAllocatedImageSize:(NSUInteger)arg0 roundedSize:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)incrementMissedLookup;
-(void)incrementStaticsInitialLookup;
-(void)incrementStaticsProbe;
-(void)incrementStatisticDidShortCircuitImageLookup;
-(void)incrementStatisticLookup;


@end


#endif