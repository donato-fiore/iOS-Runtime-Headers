// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSTUMBLINGWINDOWASSIGNER_H
#define BPSTUMBLINGWINDOWASSIGNER_H

@class NSString;
@protocol BPSWindowAssigner;

#import <Foundation/Foundation.h>

#import "BPSAggregator.h"

@interface BPSTumblingWindowAssigner : NSObject <BPSWindowAssigner>

 {
    CGFloat _interval;
    BPSAggregator *_aggregator;
    id *_timestamp;
    NSUInteger _identifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)assignWindow:(id)arg0 input:(id)arg1 ;
-(id)initWithInterval:(CGFloat)arg0 aggregator:(id)arg1 ;
// -(id)initWithInterval:(CGFloat)arg0 timestamp:(id)arg1 aggregator:(unk)arg2  ;


@end


#endif