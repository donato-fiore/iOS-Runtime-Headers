// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TESTHTTPPROBE_H
#define TESTHTTPPROBE_H

@class NSURLSession, NSURLSessionDataTask, NSString, NSURL;
@protocol NSURLSessionDelegate;


#import "TestProbe.h"

@interface TestHTTPProbe : TestProbe <NSURLSessionDelegate>

 {
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_urlSessionTask;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *urlToTest; // ivar: _urlToTest


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)stopTest;
-(void)testURL:(id)arg0 timeout:(CGFloat)arg1 interfaceName:(id)arg2 userAgent:(id)arg3 reply:(id)arg4 ;


@end


#endif