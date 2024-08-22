// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMFMAINTHREADASYNCCONTEXT_H
#define _HMFMAINTHREADASYNCCONTEXT_H

@protocol HMFAsyncContext;

#import <Foundation/Foundation.h>


@interface _HMFMainThreadAsyncContext : NSObject <HMFAsyncContext>





-(id)description;
-(void)assertIsExecuting;
-(void)performBlock:(id)arg0 ;


@end


#endif