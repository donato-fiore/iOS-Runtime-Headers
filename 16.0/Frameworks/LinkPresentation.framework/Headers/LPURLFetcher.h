// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPURLFETCHER_H
#define LPURLFETCHER_H

@class WKWebView, NSMutableData, NSString, NSURL;
@protocol _WKDataTaskDelegate;


#import "LPFetcher.h"

@interface LPURLFetcher : LPFetcher <_WKDataTaskDelegate>

 {
    id *_completionHandler;
    WKWebView *_webView;
    NSMutableData *_data;
    NSString *_MIMEType;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) Class responseClass; // ivar: _responseClass
@property (readonly) Class superclass;


-(void)_completedWithData:(id)arg0 MIMEType:(id)arg1 error:(id)arg2 ;
-(void)_failedWithErrorCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
-(void)cancel;
-(void)dataTask:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)dataTask:(id)arg0 didReceiveData:(id)arg1 ;
-(void)dataTask:(id)arg0 didReceiveResponse:(id)arg1 decisionHandler:(id)arg2 ;
-(void)fetchWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif