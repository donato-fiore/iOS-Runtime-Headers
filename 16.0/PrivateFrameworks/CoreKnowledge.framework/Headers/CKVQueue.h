// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVQUEUE_H
#define CKVQUEUE_H


#import <Foundation/Foundation.h>

#import "CKVQueueNode.h"

@interface CKVQueue : NSObject {
    CKVQueueNode *_firstNode;
    CKVQueueNode *_lastNode;
}




-(id)dequeue;
-(id)init;
-(void)enqueue:(id)arg0 ;


@end


#endif