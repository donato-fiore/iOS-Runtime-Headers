// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSCFURLLOCALSESSIONCONNECTION_H
#define __NSCFURLLOCALSESSIONCONNECTION_H

@class NSCFURLSessionConnection, NSError, NSString;
@protocol NSURLAuthenticationChallengeSender, NSCopying, OS_dispatch_data;


#import "NSURLResponse.h"

@interface __NSCFURLLocalSessionConnection : NSCFURLSessionConnection <NSURLAuthenticationChallengeSender, NSCopying>

 {
    *SessionConnectionLoadable _loaderClient;
    *URLConnectionLoader _loader;
    BOOL _canceled;
    NSInteger _suspended;
    NSObject<OS_dispatch_data> *_pendingData;
    NSInteger _pendingCompletion;
    NSUInteger _didReceiveResponseDisposition;
    NSError *_pendingError;
    int _state;
    NSInteger _clientBufferLength;
    NSObject<OS_dispatch_data> *_sniffData;
    NSURLResponse *_sniffResponse;
    BOOL _isMixedReplace;
    BOOL _didCheckMixedReplace;
    BOOL _didCheckCredentialsSuppliedInURL;
    BOOL _actuallyTriedCredentialsSuppliedInURL;
    NSUInteger _maxDataSegmentCoalesceThreshhold;
    NSUInteger _maxDataSegmentCount;
    unsigned int _didReceiveDataCount;
    BOOL _ignoreLoaderEvents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)_captureTransportConnectionextraBytes;
-(id)initWithTask:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)_ackBytes:(NSInteger)arg0 ;
-(void)_capturedSocketInputStream:(id)arg0 outputStream:(id)arg1 ;
-(void)_conditionalRequirementsChanged:(BOOL)arg0 ;
-(void)_connectionIsWaitingWithReason:(NSInteger)arg0 ;
-(void)_didFinishWithError:(id)arg0 ;
-(void)_didReceiveChallenge:(id)arg0 ;
-(void)_didReceiveData:(id)arg0 ;
-(void)_didReceiveResponse:(id)arg0 sniff:(BOOL)arg1 rewrite:(BOOL)arg2 ;
-(void)_didSendBodyData:(struct UploadProgressInfo )arg0 ;
-(void)_needConnectedSocketToHost:(id)arg0 port:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_needNewBodyStream;
-(void)_redirectRequest:(id)arg0 redirectResponse:(id)arg1 completion:(id)arg2 ;
-(void)_willSendRequestForEstablishedConnection:(id)arg0 completion:(id)arg1 ;
-(void)cancel;
-(void)cancelAuthenticationChallenge:(id)arg0 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg0 ;
-(void)dealloc;
-(void)expectedProgressTargetChanged;
-(void)resume;
-(void)setBytesPerSecondLimit:(NSInteger)arg0 ;
-(void)setIsDownload:(BOOL)arg0 ;
-(void)setPoolPriority:(NSInteger)arg0 ;
-(void)setPriorityHint:(float)arg0 incremental:(BOOL)arg1 ;
-(void)suspend;
-(void)useCredential:(id)arg0 forAuthenticationChallenge:(id)arg1 ;
-(void)withLoaderAsync:(id)arg0 ;


@end


#endif