// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTSESSION_H
#define ASTSESSION_H

@class NSError, NSString, NSMutableDictionary;
@protocol ASTConnectionManagerDelegate, OS_dispatch_semaphore, OS_dispatch_queue, ASTConnectionManager, ASTSessionDelegate;

#import <Foundation/Foundation.h>

#import "ASTContext.h"
#import "ASTAuthInfoResult.h"
#import "ASTProfileResult.h"
#import "ASTRequest.h"

@interface ASTSession : NSObject <ASTConnectionManagerDelegate>



@property (nonatomic) NSUInteger allowCellularSizeThreshold; // ivar: _allowCellularSizeThreshold
@property (nonatomic) NSInteger backoffCounter; // ivar: _backoffCounter
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *backoffTimer; // ivar: _backoffTimer
@property (retain, nonatomic) NSError *clientStatusLoopError; // ivar: _clientStatusLoopError
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientStatusQueue; // ivar: _clientStatusQueue
@property (retain, nonatomic) NSObject<ASTConnectionManager> *connectionManager; // ivar: _connectionManager
@property (readonly, copy, nonatomic) ASTContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASTSessionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *fileSigner; // ivar: _fileSigner
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *payloadSigner; // ivar: _payloadSigner
@property (retain, nonatomic) ASTAuthInfoResult *pendingAuthInfoResult; // ivar: _pendingAuthInfoResult
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pendingAuthInfoSemaphore; // ivar: _pendingAuthInfoSemaphore
@property (retain, nonatomic) ASTProfileResult *pendingProfileResult; // ivar: _pendingProfileResult
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pendingProfileSemaphore; // ivar: _pendingProfileSemaphore
@property (retain, nonatomic) ASTRequest *pendingPropertiesResult; // ivar: _pendingPropertiesResult
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pendingPropertiesSemaphore; // ivar: _pendingPropertiesSemaphore
@property (retain, nonatomic) NSMutableDictionary *pendingTestResults; // ivar: _pendingTestResults
@property (nonatomic) NSInteger phase; // ivar: _phase
@property (nonatomic) NSInteger retryCounter; // ivar: _retryCounter
@property (retain, nonatomic) NSMutableDictionary *runningTests; // ivar: _runningTests
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (copy, nonatomic) id *sessionTeardownCompletion; // ivar: _sessionTeardownCompletion
@property (nonatomic) BOOL shouldAbort; // ivar: _shouldAbort
@property (nonatomic) BOOL shouldContinueRequestLoop; // ivar: _shouldContinueRequestLoop
@property (nonatomic) BOOL shouldUnenroll; // ivar: _shouldUnenroll
@property (readonly) Class superclass;


+(BOOL)auditToken:(struct ? *)arg0 hasEntitlement:(id)arg1 ;
+(BOOL)currentProcessHasEntitlement;
+(BOOL)shouldEvictCachedAssetForName:(id)arg0 ;
+(id)_destinationAssetDirectoryForSessionId:(id)arg0 ;
+(id)_destinationURLForAsset:(id)arg0 sessionId:(id)arg1 ;
+(id)_readContentsOfFileHandle:(id)arg0 error:(*id)arg1 ;
+(id)sessionWithContext:(id)arg0 ;
+(id)sessionWithIdentity:(id)arg0 ;
+(id)sessionWithSerialNumber:(id)arg0 ;
+(void)_downloadAsset:(id)arg0 sessionId:(id)arg1 fileHandle:(id)arg2 completion:(id)arg3 ;
+(void)_fetchAsset:(id)arg0 sessionId:(id)arg1 completionHandler:(id)arg2 ;
+(void)requestAsset:(id)arg0 completionHandler:(id)arg1 ;
+(void)sessionExistsForIdentities:(id)arg0 ticketNumber:(id)arg1 completionHandler:(id)arg2 ;
+(void)sessionExistsForIdentities:(id)arg0 ticketNumber:(id)arg1 timeout:(CGFloat)arg2 completionHandler:(id)arg3 ;
+(void)sessionExistsForSerialNumbers:(id)arg0 ticketNumber:(id)arg1 completionHandler:(id)arg2 ;
+(void)sessionExistsForSerialNumbers:(id)arg0 ticketNumber:(id)arg1 timeout:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(BOOL)_authInfoIfNecessary;
-(BOOL)_profile;
-(BOOL)_shouldAllowCellularForSealedSealablePayload:(id)arg0 ;
-(BOOL)_shouldAllowCellularForSealedTestResult:(id)arg0 ;
-(BOOL)_validateCommand:(NSInteger)arg0 clientStatus:(NSInteger)arg1 ;
-(BOOL)sendAuthInfoResult:(id)arg0 error:(*id)arg1 ;
-(BOOL)sendProfileResult:(id)arg0 error:(*id)arg1 ;
-(BOOL)sendTestResult:(id)arg0 error:(*id)arg1 ;
-(id)_abort;
-(id)_clientAbort;
-(id)_continueWithLastRequest:(id)arg0 ;
-(id)_idle;
-(id)_retryRequest;
-(id)_sendPropertiesWithData:(id)arg0 ;
-(id)_sendRequest:(id)arg0 ;
-(id)_sendTestResults:(id)arg0 ;
-(id)_signFile:(id)arg0 error:(*id)arg1 ;
-(id)_signPayload:(id)arg0 error:(*id)arg1 ;
-(id)_startNewTest:(id)arg0 data:(id)arg1 ;
-(id)_updateSessionSettingsWithData:(id)arg0 ;
-(id)_updateUIWithData:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 ;
-(id)initWithSerialNumber:(id)arg0 ;
-(void)_abortRunningProcedures;
-(void)_archive;
-(void)_backoff;
-(void)_cancelControlExecution;
-(void)_cancelRunningTests;
-(void)_cancelSendingTestResults;
-(void)_endAndUnenrollIfNecessary:(BOOL)arg0 ;
-(void)_protocolError;
-(void)_reboot;
-(void)_removeDownloadedAssets;
-(void)_setup;
-(void)_startClientStatusLoop;
-(void)_teardown;
-(void)_updateProgress:(id)arg0 ;
-(void)connectionManager:(id)arg0 pausedSendingResultForTest:(id)arg1 reason:(NSInteger)arg2 ;
-(void)connectionManager:(id)arg0 resumedSendingResultForTest:(id)arg1 ;
-(void)connectionManagerRequestPaused:(id)arg0 ;
-(void)connectionManagerRequestResumed:(id)arg0 ;
-(void)dealloc;
-(void)end;
-(void)idle;
-(void)invalidate;
-(void)requestAsset:(id)arg0 completionHandler:(id)arg1 ;
-(void)start;
-(void)updateAction:(id)arg0 ;


@end


#endif