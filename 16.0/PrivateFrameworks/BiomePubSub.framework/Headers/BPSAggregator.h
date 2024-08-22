// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSAGGREGATOR_H
#define BPSAGGREGATOR_H


#import <Foundation/Foundation.h>


@interface BPSAggregator : NSObject

@property (readonly, nonatomic) id *accumulator; // ivar: _accumulator
@property (readonly, nonatomic) id *closure; // ivar: _closure


-(id)initWithAccumulator:(id)arg0 closure:(id)arg1 ;


@end


#endif