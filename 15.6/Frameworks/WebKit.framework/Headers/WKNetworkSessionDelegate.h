// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKNETWORKSESSIONDELEGATE_H
#define WKNETWORKSESSIONDELEGATE_H

@class NSString;
@protocol NSURLSessionDataDelegate, NSURLSessionWebSocketDelegate;

#import <Foundation/Foundation.h>


@interface WKNetworkSessionDelegate : NSObject <NSURLSessionDataDelegate, NSURLSessionWebSocketDelegate>

 {
    WeakPtr<WebKit::NetworkSessionCocoa, WTF::EmptyCounter> _session;
    WeakPtr<WebKit::SessionWrapper, WTF::EmptyCounter> _sessionWrapper;
    BOOL _withCredentials;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)existingTask:(id)arg0 ;
-(*void)existingWebSocketTask:(id)arg0 ;
-(*void)sessionFromTask:(id)arg0 ;
-(id)initWithNetworkSession:(struct NakedRef<WebKit::NetworkSessionCocoa> )arg0 wrapper:(*void)arg1 withCredentials:(BOOL)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didResumeAtOffset:(NSInteger)arg2 expectedTotalBytes:(NSInteger)arg3 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 _schemeUpgraded:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)URLSession:(id)arg0 webSocketTask:(id)arg1 didCloseWithCode:(NSInteger)arg2 reason:(id)arg3 ;
-(void)URLSession:(id)arg0 webSocketTask:(id)arg1 didOpenWithProtocol:(id)arg2 ;
-(void)sessionInvalidated;


@end


#endif