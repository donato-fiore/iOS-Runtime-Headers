// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCASYNCQUEUEBLOCKOPERATION_H
#define CCASYNCQUEUEBLOCKOPERATION_H

@protocol CCAsyncOperation;

#import <Foundation/Foundation.h>


@interface CCAsyncQueueBlockOperation : NSObject <CCAsyncOperation>

 {
    id *_block;
}




-(id)initWithBlock:(id)arg0 ;
-(void)performOperationWithCallback:(id)arg0 ;


@end


#endif