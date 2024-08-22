// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSREDUCEOBSERVATIONTRANSFORMER_H
#define NSREDUCEOBSERVATIONTRANSFORMER_H



#import "NSObservationTransformer.h"

@interface NSReduceObservationTransformer : NSObservationTransformer {
    id *_reducer;
    id *_accumulator;
}




+(id)reduceValue:(id)arg0 withReducer:(id)arg1 ;
// -(id)initWithBlock:(id)arg0 initialValue:(unk)arg1  ;
-(void)_receiveBox:(id)arg0 ;
-(void)dealloc;
-(void)finishObserving;


@end


#endif