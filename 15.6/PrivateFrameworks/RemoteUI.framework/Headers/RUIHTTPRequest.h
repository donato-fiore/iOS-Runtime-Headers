// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUIHTTPREQUEST_H
#define RUIHTTPREQUEST_H

@class NSURLRequest, NSURLSessionDataTask, NSURLSession;

#import <Foundation/Foundation.h>


@interface RUIHTTPRequest : NSObject {
    NSURLRequest *_request;
    NSURLSessionDataTask *_dataTask;
    NSURLSession *_urlSession;
}


@property (weak, nonatomic) id *delegate; // ivar: _delegate


+(BOOL)anyRequestLoading;
+(id)errorWithCode:(NSUInteger)arg0 ;
+(id)invalidResponseErrorWithResponse:(id)arg0 ;
+(id)nonSecureConnectionNotAllowedError;
+(id)safeBaseURL;
+(id)serviceUnavailableError;
-(BOOL)isLoading;
-(BOOL)receivedValidResponse:(id)arg0 forRequest:(id)arg1 ;
-(id)handleWillLoadRequest:(id)arg0 ;
-(id)init;
-(id)request;
-(id)sessionConfiguration;
-(id)urlSessionDelegate;
-(void)_finishedLoading;
-(void)_loadRequestMain:(id)arg0 ;
-(void)_preLoadCancel;
-(void)_startedLoading;
-(void)cancel;
-(void)dealloc;
-(void)didParseData;
-(void)failWithError:(id)arg0 forRequest:(id)arg1 ;
-(void)loadRequest:(id)arg0 ;
-(void)loadStatusChanged;
-(void)parseData:(id)arg0 ;
-(void)shouldLoadRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)willParseData;


@end


#endif