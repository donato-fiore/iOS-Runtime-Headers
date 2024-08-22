// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASTNETWORKING_H
#define ASTNETWORKING_H

@class NSString, NSMutableDictionary, NSURLSession;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface ASTNetworking : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *networkStorage; // ivar: _networkStorage
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


-(BOOL)_didRefetchProxyServer;
-(BOOL)_isValidEasyRider;
-(BOOL)_verifyMD5ForFileHandle:(id)arg0 task:(id)arg1 ;
-(BOOL)_verifyResultOfTask:(id)arg0 connection:(id)arg1 ;
-(id)_downloadTaskWithDownloadConnection:(id)arg0 error:(*id)arg1 ;
-(id)_sessionConfigurationWithSOCKSProxyServer:(id)arg0 port:(id)arg1 ;
-(id)_taskWithConnection:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithSOCKSProxyServer:(id)arg0 port:(id)arg1 ;
-(int)_requestTimeInterval;
-(int)networkDisconnectRetryCount;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)URLSession:(id)arg0 taskIsWaitingForConnectivity:(id)arg1 ;
-(void)addConnection:(id)arg0 ;
-(void)cancelConnectionsOfClass:(Class)arg0 ;
-(void)invalidate;
-(void)updateConnectionState:(id)arg0 newState:(NSInteger)arg1 ;


@end


#endif