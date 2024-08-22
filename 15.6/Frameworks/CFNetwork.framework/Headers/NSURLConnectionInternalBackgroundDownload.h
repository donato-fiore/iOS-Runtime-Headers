// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSURLCONNECTIONINTERNALBACKGROUNDDOWNLOAD_H
#define NSURLCONNECTIONINTERNALBACKGROUNDDOWNLOAD_H

@class NSMutableArray, NSCountedSet, SSDownloadHandler, NSTimer, NSString;
@protocol NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate;


#import "NSURLConnectionInternal.h"
#import "NSAsyncSSDownloadManager.h"

@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate>

 {
    *__CFRunLoopSource _source;
    NSMutableArray *_pendingOps;
    NSCountedSet *_runloops;
    SSDownloadHandler *_handler;
    NSAsyncSSDownloadManager *_manager;
    NSInteger _downloadIdent;
    NSInteger _ctLast;
    BOOL _terminated;
    NSTimer *_deferredStartTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)_enableLogging;
-(BOOL)downloadHandler:(id)arg0 pauseSession:(id)arg1 ;
-(NSInteger)_getDownloadIdent;
-(id)initWithInfo:(struct InternalInit *)arg0 ;
-(void)_invalidate;
-(void)_managerFailedToStartInTime;
-(void)_updateDownloadState:(id)arg0 ;
-(void)cancel;
-(void)cancelAuthenticationChallenge:(id)arg0 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg0 ;
-(void)dealloc;
-(void)downloadHandler:(id)arg0 cancelSession:(id)arg1 ;
-(void)downloadHandler:(id)arg0 handleAuthenticationSession:(id)arg1 ;
-(void)downloadHandlerDidDisconnect:(id)arg0 ;
-(void)invokeForDelegate:(id)arg0 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg0 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg0 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)start;
-(void)unscheduleFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)useCredential:(id)arg0 forAuthenticationChallenge:(id)arg1 ;


@end


#endif