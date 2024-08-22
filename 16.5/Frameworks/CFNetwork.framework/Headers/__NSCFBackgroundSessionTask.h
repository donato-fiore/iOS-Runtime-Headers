// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSCFBACKGROUNDSESSIONTASK_H
#define __NSCFBACKGROUNDSESSIONTASK_H

@class NSMutableSet, NSError, NSString;
@protocol NSURLSessionTaskSubclass;


#import "NSURLSessionTask.h"

@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass>

 {
    NSMutableSet *_secKeyProxies;
    os_unfair_lock_s _proxyLock;
    BOOL _sentCancel;
    BOOL _sentDidFinish;
    NSError *_immediateError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_timingData;
-(id)initWithBackgroundTask:(id)arg0 ;
-(id)initWithOriginalRequest:(id)arg0 ident:(NSUInteger)arg1 taskGroup:(id)arg2 ;
-(id)initWithTaskInfo:(id)arg0 taskGroup:(id)arg1 ident:(NSUInteger)arg2 ;
-(void)_onSessionQueue_disavow;
-(void)_onqueue_adjustBytesPerSecondLimit:(NSInteger)arg0 ;
-(void)_onqueue_adjustLoadingPoolPriority;
-(void)_onqueue_adjustPoolPriority;
-(void)_onqueue_adjustPriorityHint:(float)arg0 incremental:(BOOL)arg1 ;
-(void)_onqueue_cancel;
-(void)_onqueue_didFinishWithError:(id)arg0 ;
-(void)_onqueue_didReceiveResponse:(id)arg0 ;
-(void)_onqueue_resume;
-(void)_onqueue_suspend;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg0 withCompletion:(id)arg1 ;
-(void)addSecKeyProxy:(id)arg0 ;
-(void)dealloc;
-(void)removeSecKeyProxy:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setTaskDescription:(id)arg0 ;
-(void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg0 ;
-(void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg0 ;
-(void)set_discretionaryOverride:(NSInteger)arg0 ;


@end


#endif