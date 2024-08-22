// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SDHTTPCLIENT_H
#define SDHTTPCLIENT_H

@class NSURL, NSString, NSURLSession;
@protocol NSURLSessionDelegate, OS_os_log;

#import <Foundation/Foundation.h>


@interface SDHTTPClient : NSObject <NSURLSessionDelegate>



@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURLSession *urlSession; // ivar: _urlSession


+(id)sharedInstance;
-(id)init;
-(id)overrideServerURL;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif