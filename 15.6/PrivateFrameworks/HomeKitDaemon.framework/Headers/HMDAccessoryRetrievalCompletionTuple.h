// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYRETRIEVALCOMPLETIONTUPLE_H
#define HMDACCESSORYRETRIEVALCOMPLETIONTUPLE_H

@class HMFObject;
@protocol OS_dispatch_queue;



@interface HMDAccessoryRetrievalCompletionTuple : HMFObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) NSInteger linkType; // ivar: _linkType
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)tupleWithLinkType:(NSInteger)arg0 queue:(id)arg1 completion:(id)arg2 ;


@end


#endif