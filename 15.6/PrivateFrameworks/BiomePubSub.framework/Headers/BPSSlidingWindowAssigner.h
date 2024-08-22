// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSSLIDINGWINDOWASSIGNER_H
#define BPSSLIDINGWINDOWASSIGNER_H

@class NSString;
@protocol BPSWindowAssigner;

#import <Foundation/Foundation.h>

#import "BPSAggregator.h"

@interface BPSSlidingWindowAssigner : NSObject <BPSWindowAssigner>

 {
    CGFloat _interval;
    CGFloat _slide;
    BPSAggregator *_aggregator;
    id *_timestamp;
    NSUInteger _identifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)assignWindow:(id)arg0 input:(id)arg1 ;
-(id)assignWindowNonOverlappingIntervals:(id)arg0 timestamp:(id)arg1 ;
-(id)assignWindowOverlappingIntervals:(id)arg0 timestamp:(id)arg1 ;
-(id)initWithInterval:(CGFloat)arg0 slide:(CGFloat)arg1 aggregator:(id)arg2 ;
// -(id)initWithInterval:(CGFloat)arg0 slide:(CGFloat)arg1 timestamp:(id)arg2 aggregator:(unk)arg3  ;


@end


#endif