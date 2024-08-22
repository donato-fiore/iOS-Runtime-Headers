// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACSURLSESSIONDOWNLOADTASK_H
#define ACSURLSESSIONDOWNLOADTASK_H

@class NSError, NSURLRequest;


#import "ACSURLSessionTask.h"

@interface ACSURLSessionDownloadTask : ACSURLSessionTask

@property (copy) id *_clientLocationCompletionHandler; // ivar: __clientLocationCompletionHandler
@property (retain) NSError *_deferredLinkError; // ivar: __deferredLinkError
@property (retain) NSURLRequest *_resumedOriginalRequest; // ivar: __resumedOriginalRequest
@property (readonly, copy) NSURLRequest *originalRequest;


-(BOOL)_isUpload;
// -(id)initWithNSURLDownloadTaskCreator:(id)arg0 initialRequest:(unk)arg1 forSession:(id)arg2  ;
-(void)cancelByProducingResumeData:(id)arg0 ;


@end


#endif