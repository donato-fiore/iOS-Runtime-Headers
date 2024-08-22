// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTGPUAGXCOUNTERSOURCE_H
#define DTGPUAGXCOUNTERSOURCE_H

@class NSLock, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_source, GPURawCounterSource, GPURawCounterSourceGroup;

#import <Foundation/Foundation.h>


@interface DTGPUAGXCounterSource : NSObject {
    NSObject<OS_dispatch_queue> *_pullQueue;
    NSObject<OS_dispatch_source> *_pullTimer;
    NSLock *_pullLock;
    vector<std::vector<unsigned char>, std::allocator<std::vector<unsigned char>>> _counterBuffers;
    vector<unsigned char, std::allocator<unsigned char>> _tmpOutBuffer;
}


@property (readonly, nonatomic) NSArray *selects; // ivar: _selects
@property (readonly, nonatomic) NSObject<GPURawCounterSource> *source; // ivar: _source
@property (readonly, nonatomic) NSObject<GPURawCounterSourceGroup> *sourceGroup; // ivar: _sourceGroup
@property (readonly, nonatomic) unsigned int sourceIndex; // ivar: _sourceIndex


-(BOOL)request:(NSUInteger)arg0 vendorFeatures:(id)arg1 ;
-(id)initWithSource:(id)arg0 sourceGroup:(id)arg1 selects:(id)arg2 sourceIndex:(unsigned int)arg3 ;
-(void)dealloc;
-(void)pullAndDrainCounters;
-(void)resume;
-(void)sampleCounters:(NSUInteger)arg0 callback:(id)arg1 ;
-(void)stop;


@end


#endif