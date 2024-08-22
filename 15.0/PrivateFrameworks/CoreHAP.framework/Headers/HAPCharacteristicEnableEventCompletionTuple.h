// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPCHARACTERISTICENABLEEVENTCOMPLETIONTUPLE_H
#define HAPCHARACTERISTICENABLEEVENTCOMPLETIONTUPLE_H

@class HMFObject;
@protocol OS_dispatch_queue;



@interface HAPCharacteristicEnableEventCompletionTuple : HMFObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (copy, nonatomic) id *handler; // ivar: _handler


// +(id)enableEventCompletionTupleWithHandler:(id)arg0 queue:(unk)arg1  ;


@end


#endif