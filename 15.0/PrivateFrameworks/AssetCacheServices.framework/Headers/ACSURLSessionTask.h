// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACSURLSESSIONTASK_H
#define ACSURLSESSIONTASK_H

@class NSURLSessionTask, NSURLRequest, NSString, NSError, NSProgress, NSURLResponse;
@protocol NSCopying, NSProgressReporting;

#import <Foundation/Foundation.h>

#import "ACSURLSession.h"

@interface ACSURLSessionTask : NSObject <NSCopying, NSProgressReporting>



@property BOOL _failBackToOrigin; // ivar: __failBackToOrigin
@property (readonly) BOOL _isUpload;
@property (copy) id *_nsurlTaskCreator; // ivar: __nsurlTaskCreator
@property (retain) NSURLSessionTask *_nsurlTaskToCachingServer; // ivar: __nsurlTaskToCachingServer
@property (retain) NSURLSessionTask *_nsurlTaskToOrigin; // ivar: __nsurlTaskToOrigin
@property BOOL _suspended; // ivar: __suspended
@property BOOL _tryCachingServer; // ivar: __tryCachingServer
@property (weak) ACSURLSession *_weakSession; // ivar: __weakSession
@property NSInteger countOfBytesClientExpectsToReceive;
@property NSInteger countOfBytesClientExpectsToSend;
@property (readonly) NSInteger countOfBytesExpectedToReceive;
@property (readonly) NSInteger countOfBytesExpectedToSend;
@property (readonly) NSInteger countOfBytesReceived;
@property (readonly) NSInteger countOfBytesSent;
@property (readonly, copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSURLRequest *originalRequest;
@property float priority;
@property (readonly) NSProgress *progress;
@property (readonly, copy) NSURLResponse *response;
@property (readonly) NSInteger state;
@property (readonly) Class superclass;
@property (copy) NSString *taskDescription;
@property (readonly) NSUInteger taskIdentifier;


-(id)_nsurlTaskForRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
// -(id)initWithNSURLTaskCreator:(id)arg0 initialRequest:(unk)arg1 forSession:(id)arg2  ;
-(void)cancel;
-(void)resume;
-(void)suspend;


@end


#endif