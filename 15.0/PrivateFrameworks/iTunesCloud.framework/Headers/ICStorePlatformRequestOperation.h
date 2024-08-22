// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSTOREPLATFORMREQUESTOPERATION_H
#define ICSTOREPLATFORMREQUESTOPERATION_H

@protocol OS_dispatch_queue;


#import "ICAsyncOperation.h"
#import "ICStoreURLRequest.h"
#import "ICStorePlatformRequestOperation.h"
#import "ICURLSession.h"
#import "ICStorePlatformRequest.h"

@interface ICStorePlatformRequestOperation : ICAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_activeURLRequest;
    ICStorePlatformRequestOperation *_strongSelf;
    ICURLSession *_urlSession;
}


@property (readonly, copy, nonatomic) ICStorePlatformRequest *platformRequest; // ivar: _platformRequest
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)_URLRequestWithBaseURL:(id)arg0 ;
-(id)_requestContext;
-(id)initWithPlatformRequest:(id)arg0 ;
-(id)initWithPlatformRequest:(id)arg0 usingURLSession:(id)arg1 ;
-(void)_enqueueDataRequest:(id)arg0 ;
-(void)_executePersonalized;
-(void)_executeUnpersonalized;
-(void)_finishWithResponse:(id)arg0 error:(id)arg1 ;
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg0 ;


@end


#endif