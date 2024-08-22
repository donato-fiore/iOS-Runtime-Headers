// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPBTLEREACHABILITYSCANTUPLE_H
#define HAPBTLEREACHABILITYSCANTUPLE_H

@class HMFObject, NSString;
@protocol OS_dispatch_queue;



@interface HAPBTLEReachabilityScanTuple : HMFObject

@property (readonly, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


// +(id)reachabilityScanTupleWithCompletion:(id)arg0 workQueue:(unk)arg1 identifier:(id)arg2  ;


@end


#endif