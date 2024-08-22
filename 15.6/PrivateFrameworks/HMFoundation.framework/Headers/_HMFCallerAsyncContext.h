// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HMFCALLERASYNCCONTEXT_H
#define _HMFCALLERASYNCCONTEXT_H

@protocol HMFAsyncContext;

#import <Foundation/Foundation.h>


@interface _HMFCallerAsyncContext : NSObject <HMFAsyncContext>





-(id)description;
-(void)assertIsExecuting;
-(void)performBlock:(id)arg0 ;


@end


#endif