// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFBLOCKQUEUEPAIR_H
#define PDFBLOCKQUEUEPAIR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PDFBlockQueuePair : NSObject

@property (readonly) id *block; // ivar: _block
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


// +(id)blockQueuePairWithBlock:(id)arg0 andQueue:(unk)arg1  ;
// -(id)initWithBlock:(id)arg0 andQueue:(unk)arg1  ;


@end


#endif