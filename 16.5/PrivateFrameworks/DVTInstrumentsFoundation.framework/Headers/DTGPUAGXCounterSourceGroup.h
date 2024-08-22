// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTGPUAGXCOUNTERSOURCEGROUP_H
#define DTGPUAGXCOUNTERSOURCEGROUP_H

@class NSArray;
@protocol GPURawCounterSourceGroup;

#import <Foundation/Foundation.h>


@interface DTGPUAGXCounterSourceGroup : NSObject {
    id<GPURawCounterSourceGroup> *_sourceGroup;
    NSArray *_selects;
}


@property (readonly, nonatomic) NSArray *sources; // ivar: _sources


-(BOOL)start:(NSUInteger)arg0 vendorFeatures:(id)arg1 ;
-(id)initWithSourceGroup:(id)arg0 selects:(id)arg1 ;
-(void)sampleCounters:(NSUInteger)arg0 callback:(id)arg1 ;
-(void)stop;


@end


#endif