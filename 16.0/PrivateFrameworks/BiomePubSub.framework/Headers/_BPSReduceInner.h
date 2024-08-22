// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BPSREDUCEINNER_H
#define _BPSREDUCEINNER_H



#import "BPSReduceProducer.h"

@interface _BPSReduceInner : BPSReduceProducer

@property (readonly, nonatomic) id *reduce; // ivar: _reduce


-(id)initWithDownstream:(id)arg0 initial:(id)arg1 reduce:(id)arg2 ;
-(id)receiveNewValue:(id)arg0 ;


@end


#endif