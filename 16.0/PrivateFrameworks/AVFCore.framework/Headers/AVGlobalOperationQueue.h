// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVGLOBALOPERATIONQUEUE_H
#define AVGLOBALOPERATIONQUEUE_H

@class NSOperationQueue, NSArray;

#import <Foundation/Foundation.h>


@interface AVGlobalOperationQueue : NSObject {
    NSOperationQueue *_operationQueue;
}


@property (readonly, copy) NSArray *unfinishedOperations;


+(id)defaultQueue;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)enqueueOperation:(id)arg0 ;


@end


#endif