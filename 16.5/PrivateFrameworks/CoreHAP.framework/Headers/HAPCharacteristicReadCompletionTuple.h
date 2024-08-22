// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPCHARACTERISTICREADCOMPLETIONTUPLE_H
#define HAPCHARACTERISTICREADCOMPLETIONTUPLE_H

@class HMFObject;
@protocol OS_dispatch_queue;



@interface HAPCharacteristicReadCompletionTuple : HMFObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (copy, nonatomic) id *handler; // ivar: _handler


// +(id)readCompletionTupleWithHandler:(id)arg0 queue:(unk)arg1  ;


@end


#endif