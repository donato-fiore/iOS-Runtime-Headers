// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCHTTPTRANSACTION_H
#define MCHTTPTRANSACTION_H

@class NSURL, NSURLSession, NSString, NSData, NSError, NSArray;
@protocol NSURLSessionDataDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface MCHTTPTransaction : NSObject <NSURLSessionDataDelegate>

 {
    *__SecIdentity _identity;
    NSURL *_currentURL;
    BOOL _rememberData;
    NSURLSession *_session;
    NSObject<OS_dispatch_semaphore> *_doneSema;
}


@property (retain, nonatomic) NSString *CMSSignatureHeaderName; // ivar: _CMSSignatureHeaderName
@property (retain, nonatomic) NSString *contentType; // ivar: _contentType
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *method; // ivar: _method
@property (readonly, retain, nonatomic) NSURL *permanentlyRedirectedURL; // ivar: _permanentlyRedirectedURL
@property (retain, nonatomic) NSArray *pinnedSecCertificateRefs; // ivar: _pinnedSecCertificateRefs
@property (nonatomic) BOOL pinningRevocationCheckRequired; // ivar: _pinningRevocationCheckRequired
@property (readonly, retain, nonatomic) NSData *responseData; // ivar: _responseData
@property (readonly, nonatomic) NSInteger statusCode; // ivar: _statusCode
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (retain, nonatomic) NSURL *url; // ivar: _requestURL
@property (retain, nonatomic) NSString *userAgent; // ivar: _userAgent


+(id)transactionWithURL:(id)arg0 method:(id)arg1 ;
-(BOOL)_shouldAllowTrust:(struct __SecTrust *)arg0 forHost:(id)arg1 ;
-(BOOL)_shouldAllowTrustWithPinning:(struct __SecTrust *)arg0 forHost:(id)arg1 ;
-(id)initWithURL:(id)arg0 method:(id)arg1 ;
-(struct __SecIdentity *)copyIdentity;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_beginTransaction;
-(void)dealloc;
-(void)performCompletionBlock:(id)arg0 ;
-(void)performSynchronously;
-(void)setIdentity:(struct __SecIdentity *)arg0 ;


@end


#endif