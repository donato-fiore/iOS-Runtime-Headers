// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDTASKEXECUTIONCONTEXT_H
#define UIKEYBOARDTASKEXECUTIONCONTEXT_H


#import <Foundation/Foundation.h>

#import "UIKeyboardTaskExecutionContext.h"
#import "UIKeyboardTaskQueue.h"

@interface UIKeyboardTaskExecutionContext : NSObject {
    UIKeyboardTaskExecutionContext *_parentExecutionContext;
    id *_continuation;
    id *_pendingCompletionBlock;
}


@property (readonly, nonatomic) UIKeyboardTaskQueue *executionQueue; // ivar: _executionQueue
@property (retain, nonatomic) id *info; // ivar: _info


-(id)childWithContinuation:(id)arg0 ;
-(id)init;
-(id)initWithExecutionQueue:(id)arg0 ;
-(id)initWithParentContext:(id)arg0 continuation:(id)arg1 ;
-(id)takeOwnershipOfPendingCompletionBlock:(SEL)arg0 ;
-(void)returnExecutionToParent;
-(void)returnExecutionToParentWithInfo:(id)arg0 ;
-(void)setPendingCompletionBlock:(id)arg0 ;
-(void)transferExecutionToMainThreadWithTask:(id)arg0 ;


@end


#endif