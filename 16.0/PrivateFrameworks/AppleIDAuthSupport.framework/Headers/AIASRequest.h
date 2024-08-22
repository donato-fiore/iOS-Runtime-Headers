// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIASREQUEST_H
#define AIASREQUEST_H

@class NSMutableURLRequest, NSMutableData, NSString, NSError, NSURLSession, NSURLSessionDataTask;
@protocol NSURLSessionDataDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface AIASRequest : NSObject <NSURLSessionDataDelegate>



@property (retain) NSMutableURLRequest *URLRequest; // ivar: _URLRequest
@property *__AppleIDAuthSupportData context; // ivar: _context
@property (retain) NSMutableData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL done; // ivar: _done
@property (retain) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain) NSString *networkTaskDescription; // ivar: _networkTaskDescription
@property (retain) NSObject<OS_dispatch_semaphore> *sema; // ivar: _sema
@property (retain) NSURLSession *session; // ivar: _session
@property BOOL success; // ivar: _success
@property (readonly) Class superclass;
@property (retain) NSURLSessionDataTask *task; // ivar: _task


-(id)initWithURL:(id)arg0 data:(struct __CFDictionary *)arg1 clientInfo:(id)arg2 proxiedClientInfo:(id)arg3 companionClientInfo:(id)arg4 appleITeamId:(id)arg5 appleIClientId:(id)arg6 additionalHeaders:(id)arg7 ;
-(void)resume;


@end


#endif