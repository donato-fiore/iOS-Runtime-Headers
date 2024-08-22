// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLTASK_H
#define MLTASK_H

@class NSError, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MLTask : NSObject

@property (copy) NSError *error; // ivar: _error
@property NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (readonly, copy, nonatomic) NSString *taskIdentifier; // ivar: _taskIdentifier


-(BOOL)_canCancel;
-(BOOL)_canComplete;
-(BOOL)_canFail;
-(BOOL)_canResume;
-(BOOL)_canSuspend;
-(id)initWithState:(NSInteger)arg0 ;
-(id)taskStatesToString:(NSInteger)arg0 ;
-(void)_resumeWithTaskContext:(id)arg0 ;
-(void)cancel;
-(void)completeWithTaskContext:(id)arg0 ;
-(void)failWithError:(id)arg0 taskContext:(id)arg1 ;
-(void)resume;
-(void)resumeWithTaskContext:(id)arg0 ;
-(void)suspendWithTaskContext:(id)arg0 ;


@end


#endif