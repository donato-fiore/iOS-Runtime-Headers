// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBCORENSURLSESSIONDATATASK_H
#define WEBCORENSURLSESSIONDATATASK_H

@class NSURLRequest, NSError, NSURLResponse, NSString;

#import <Foundation/Foundation.h>

#import "WebCoreNSURLSession.h"

@interface WebCoreNSURLSessionDataTask : NSObject {
    WeakObjCPtr<WebCoreNSURLSession> _session;
    RefPtr<WebCore::PlatformMediaResource, WTF::RawPtrTraits<WebCore::PlatformMediaResource>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResource>> _resource;
    RetainPtr<NSURLResponse> _response;
    RetainPtr<NSURLRequest> _originalRequest;
    RetainPtr<NSURLRequest> _currentRequest;
    RetainPtr<NSError> _error;
    RetainPtr<NSString> _taskDescription;
}


@property NSInteger countOfBytesExpectedToReceive; // ivar: _countOfBytesExpectedToReceive
@property NSInteger countOfBytesExpectedToSend; // ivar: _countOfBytesExpectedToSend
@property NSInteger countOfBytesReceived; // ivar: _countOfBytesReceived
@property NSInteger countOfBytesSent; // ivar: _countOfBytesSent
@property (readonly, copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSError *error;
@property (readonly, copy) NSURLRequest *originalRequest;
@property float priority; // ivar: _priority
@property (readonly, copy) NSURLResponse *response;
@property WebCoreNSURLSession *session;
@property NSInteger state; // ivar: _state
@property (copy) NSString *taskDescription;
@property NSUInteger taskIdentifier; // ivar: _taskIdentifier


-(BOOL)resource:(*void)arg0 shouldCacheResponse:(*void)arg1 ;
-(id)_timingData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSession:(id)arg0 identifier:(NSUInteger)arg1 request:(id)arg2 ;
-(void)_cancel;
-(void)_resource:(*void)arg0 loadFinishedWithError:(id)arg1 metrics:(*void)arg2 ;
-(void)_restart;
-(void)cancel;
-(void)dealloc;
-(void)resource:(*void)arg0 accessControlCheckFailedWithError:(*void)arg1 ;
-(void)resource:(*void)arg0 loadFailedWithError:(*void)arg1 ;
-(void)resource:(*void)arg0 receivedData:(*void)arg1 ;
-(void)resource:(*void)arg0 receivedRedirect:(*void)arg1 request:(*void)arg2 completionHandler:(*void)arg3 ;
-(void)resource:(*void)arg0 receivedResponse:(*void)arg1 completionHandler:(*void)arg2 ;
-(void)resource:(*void)arg0 sentBytes:(NSUInteger)arg1 totalBytesToBeSent:(NSUInteger)arg2 ;
-(void)resourceFinished:(*void)arg0 metrics:(*void)arg1 ;
-(void)resume;
-(void)suspend;


@end


#endif