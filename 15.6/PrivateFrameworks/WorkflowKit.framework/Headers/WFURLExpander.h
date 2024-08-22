// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFURLEXPANDER_H
#define WFURLEXPANDER_H

@class NSURL, NSString;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface WFURLExpander : NSObject <NSURLSessionDataDelegate>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)expandURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)finishWithURL:(id)arg0 error:(id)arg1 ;
-(void)start;


@end


#endif