// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLE5EXECUTIONSTREAMPOOL_H
#define MLE5EXECUTIONSTREAMPOOL_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MLE5ExecutionStreamPool : NSObject

@property (readonly) NSMutableSet *pool; // ivar: _pool
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(id)init;
-(id)takeOut;
-(void)putBack:(id)arg0 ;


@end


#endif