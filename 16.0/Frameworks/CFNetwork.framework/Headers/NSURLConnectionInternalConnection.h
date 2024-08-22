// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSURLCONNECTIONINTERNALCONNECTION_H
#define NSURLCONNECTIONINTERNALCONNECTION_H

@class NSString;
@protocol NSURLConnectionRequired;


#import "NSURLConnectionInternal.h"
#import "NSURLAuthenticationChallenge.h"

@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired>

 {
    int _cfConnLock;
    *_CFURLConnection _cfConn;
    *_CFURLAuthChallenge _currCFChallenge;
    NSURLAuthenticationChallenge *_currNSChallenge;
    *__CFString _fileName;
    BOOL _shouldSkipCancelOnRelease;
    NSInteger _totalBytes;
    NSInteger _expectedTotalBytes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_timingData;
-(id)initWithInfo:(struct InternalInit *)arg0 ;
-(void)_invalidate;
-(void)_resumeLoading;
-(void)_setDelegateQueue:(id)arg0 ;
-(void)_setShouldSkipCancelOnRelease:(BOOL)arg0 ;
-(void)_suspendLoading;
-(void)cancel;
-(void)cancelAuthenticationChallenge:(id)arg0 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg0 ;
-(void)dealloc;
-(void)invokeForDelegate:(id)arg0 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg0 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg0 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)start;
-(void)unscheduleFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)useCredential:(id)arg0 forAuthenticationChallenge:(id)arg1 ;


@end


#endif