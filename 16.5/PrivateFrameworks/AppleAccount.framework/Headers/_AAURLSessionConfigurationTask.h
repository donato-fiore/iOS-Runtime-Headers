// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AAURLSESSIONCONFIGURATIONTASK_H
#define _AAURLSESSIONCONFIGURATIONTASK_H

@class NSString, NSURLRequest;
@protocol AAURLSessionTaskProtocol;

#import <Foundation/Foundation.h>

#import "AAURLSession.h"

@interface _AAURLSessionConfigurationTask : NSObject <AAURLSessionTaskProtocol>

 {
    id *_completion;
    os_unfair_lock_s _unfairLock;
    ? _flags;
    id<AAURLSessionTaskProtocol> *_configurationTask;
    id<AAURLSessionTaskProtocol> *_sessionTask;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURLRequest *originalRequest; // ivar: _originalRequest
@property (readonly, nonatomic) AAURLSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSession:(id)arg0 request:(id)arg1 completion:(id)arg2 ;
-(void)_initiateSessionTaskWithConfiguration:(id)arg0 ;
-(void)_invokeCompletionWithData:(id)arg0 response:(id)arg1 error:(id)arg2 ;
-(void)_unfairLock_initiateConfigurationTask;
-(void)cancel;
-(void)resume;
-(void)suspend;


@end


#endif