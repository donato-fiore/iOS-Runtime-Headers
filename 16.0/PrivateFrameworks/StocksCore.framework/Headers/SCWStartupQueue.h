// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCWSTARTUPQUEUE_H
#define SCWSTARTUPQUEUE_H


#import <Foundation/Foundation.h>

#import "SCWAsyncSerialQueue.h"

@interface SCWStartupQueue : NSObject

@property (nonatomic) NSInteger startupTaskDepth; // ivar: _startupTaskDepth
@property (nonatomic) os_unfair_lock_s startupTaskDepthLock; // ivar: _startupTaskDepthLock
@property (retain, nonatomic) SCWAsyncSerialQueue *startupTaskQueue; // ivar: _startupTaskQueue


-(id)initWithDeferredStartup:(BOOL)arg0 ;
-(void)enqueueStartupBlock:(id)arg0 ;
-(void)executeAfterStartup:(id)arg0 ;


@end


#endif