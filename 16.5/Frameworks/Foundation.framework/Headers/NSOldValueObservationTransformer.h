// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSOLDVALUEOBSERVATIONTRANSFORMER_H
#define NSOLDVALUEOBSERVATIONTRANSFORMER_H



#import "NSObservationTransformer.h"

@interface NSOldValueObservationTransformer : NSObservationTransformer {
    id *_lastValue;
}




+(id)oldValuesTransformer;
-(void)_receiveBox:(id)arg0 ;
-(void)dealloc;


@end


#endif