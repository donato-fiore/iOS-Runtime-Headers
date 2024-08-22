// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIFEEDBACKSESSION_H
#define HMIFEEDBACKSESSION_H

@class HMFObject, NSString, NSOperationQueue, NSURLSession;
@protocol NSURLSessionDelegate, HMFLogging;


#import "HMIHomeKitClient.h"

@interface HMIFeedbackSession : HMFObject <NSURLSessionDelegate, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *feedbackServiceHost; // ivar: _feedbackServiceHost
@property (readonly) NSUInteger hash;
@property (readonly) HMIHomeKitClient *homeKitClient; // ivar: _homeKitClient
@property (readonly) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;


@end


#endif