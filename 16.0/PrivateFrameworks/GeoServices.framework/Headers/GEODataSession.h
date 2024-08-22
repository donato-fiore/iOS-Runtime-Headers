// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEODATASESSION_H
#define GEODATASESSION_H

@class NSString;
@protocol GEODataSession, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEODataURLSession.h"

@interface GEODataSession : NSObject <GEODataSession>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation; // ivar: _sessionIsolation
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEODataURLSession *urlSession; // ivar: _urlSession


+(id)asynchronousGetURL:(id)arg0 kind:(struct ? )arg1 auditToken:(id)arg2 requestCounterTicket:(id)arg3 queue:(id)arg4 completionHandler:(id)arg5 ;
+(id)sharedDataSession;
-(id)asynchronousGetURL:(id)arg0 kind:(struct ? )arg1 auditToken:(id)arg2 requestCounterTicket:(id)arg3 queue:(id)arg4 completionHandler:(id)arg5 ;
-(id)downloadTaskWithRequest:(id)arg0 priority:(float)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)init;
-(id)initWithUrlSession:(id)arg0 ;
-(id)manifestManager;
-(id)taskWithRequest:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
-(id)taskWithRequest:(id)arg0 priority:(float)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;


@end


#endif