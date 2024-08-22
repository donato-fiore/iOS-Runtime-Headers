// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICQMEGABACKUPNETWORKREQUEST_H
#define _ICQMEGABACKUPNETWORKREQUEST_H

@class NSURLSession, NSURLSessionTask, NSDictionary, NSError, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _ICQMegaBackupNetworkRequest : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSURLSession *_URLSession;
    NSURLSessionTask *_URLSessionTask;
    id *_completionHandler;
}


@property (readonly, copy, nonatomic) NSDictionary *additionalRequestHeaders;
@property (readonly, copy, nonatomic) NSDictionary *bodyJSON;
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSDictionary *requestHeaders;
@property (readonly, copy, nonatomic) NSURL *requestURL; // ivar: _requestURL


-(id)_createURLRequestWithError:(*id)arg0 ;
-(id)_dictionaryFromData:(id)arg0 response:(id)arg1 error:(*id)arg2 ;
-(id)_errorForURLRequestError:(id)arg0 ;
-(id)errorForUnsuccessfulResponse:(id)arg0 body:(id)arg1 ;
-(id)handleResponse:(id)arg0 body:(id)arg1 ;
-(id)initWithRequestURL:(id)arg0 URLSession:(id)arg1 queue:(id)arg2 ;
-(void)_completeWithError:(id)arg0 ;
-(void)_performURLRequest:(id)arg0 ;
-(void)addAdditionalRequestHeaders:(id)arg0 ;
-(void)handleURLResponse:(id)arg0 data:(id)arg1 error:(id)arg2 ;
-(void)invalidate;
-(void)resumeWithCompletionHandler:(id)arg0 ;


@end


#endif