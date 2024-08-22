// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMEDIAINVOKEAUTHENTICATIONQUEUEDOBJECT_H
#define AMSMEDIAINVOKEAUTHENTICATIONQUEUEDOBJECT_H

@class NSURLResponse;

#import <Foundation/Foundation.h>

#import "AMSPromise.h"
#import "AMSURLTaskInfo.h"

@interface AMSMediaInvokeAuthenticationQueuedObject : NSObject

@property (nonatomic) BOOL ignoringResult; // ivar: _ignoringResult
@property (retain, nonatomic) AMSPromise *pendingPromise; // ivar: _pendingPromise
@property (retain, nonatomic) NSURLResponse *response; // ivar: _response
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo; // ivar: _taskInfo




@end


#endif