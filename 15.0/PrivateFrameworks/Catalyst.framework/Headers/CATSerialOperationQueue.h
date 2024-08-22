// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATSERIALOPERATIONQUEUE_H
#define CATSERIALOPERATIONQUEUE_H

@class NSOperation;


#import "CATOperationQueue.h"

@interface CATSerialOperationQueue : CATOperationQueue {
    NSOperation *mLastOperation;
}




-(id)debugDescription;
-(id)init;
-(void)addOperation:(id)arg0 ;


@end


#endif