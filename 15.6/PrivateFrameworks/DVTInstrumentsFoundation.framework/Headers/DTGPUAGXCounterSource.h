// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTGPUAGXCOUNTERSOURCE_H
#define DTGPUAGXCOUNTERSOURCE_H

@class NSArray, NSLock;
@protocol GPURawCounterSource, GPURawCounterSourceGroup, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface DTGPUAGXCounterSource : NSObject {
    id<GPURawCounterSource> *_source;
    id<GPURawCounterSourceGroup> *_sourceGroup;
    NSArray *_rawCounters;
    NSObject<OS_dispatch_queue> *_pullQueue;
    NSObject<OS_dispatch_source> *_pullTimer;
    NSLock *_pullLock;
    vector<std::vector<unsigned char>, std::allocator<std::vector<unsigned char>>> _counterBuffers;
    vector<unsigned char, std::allocator<unsigned char>> _tmpOutBuffer;
}




-(BOOL)start:(NSUInteger)arg0 vendorFeatures:(id)arg1 ;
-(id)initWithSource:(id)arg0 sourceGroup:(id)arg1 rawCounterList:(id)arg2 ;
-(void)dealloc;
-(void)pullAndDrainCounters;
-(void)sampleCounters:(NSUInteger)arg0 callback:(id)arg1 ;
-(void)stop;


@end


#endif