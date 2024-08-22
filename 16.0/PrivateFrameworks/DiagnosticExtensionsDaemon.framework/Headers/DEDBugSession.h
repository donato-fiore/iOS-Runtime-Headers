// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEDBUGSESSION_H
#define DEDBUGSESSION_H

@class NSMutableArray, NSArray, NSDictionary, NSMutableDictionary, NSString, NSMutableSet, NSDate;
@protocol NSSecureCoding, DEDSecureArchiving, DEDUploadStatusDelegate, OS_dispatch_queue, DEDFinisher><DEDSecureArchiving, DEDNotifier><DEDSecureArchiving, DEDClientProtocol, OS_os_log, DEDWorkerProtocol;

#import <Foundation/Foundation.h>

#import "DEDBugSessionConfiguration.h"
#import "DEDExtensionIdentifierManager.h"

@interface DEDBugSession : NSObject <NSSecureCoding, DEDSecureArchiving>



@property (weak, nonatomic) NSObject<DEDUploadStatusDelegate> *__uploadDelegate; // ivar: ___uploadDelegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_diskAccessQueue; // ivar: __diskAccessQueue
@property (retain) NSObject<DEDFinisher><DEDSecureArchiving> *_finisher; // ivar: __finisher
@property (retain) NSObject<DEDNotifier><DEDSecureArchiving> *_notifier; // ivar: __notifier
@property (retain) NSMutableArray *adoptFilesCompletions; // ivar: _adoptFilesCompletions
@property (readonly) NSArray *allExtensionIdentifiers;
@property (retain) NSDictionary *cachedExtensions; // ivar: _cachedExtensions
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain) NSObject<DEDClientProtocol> *client; // ivar: _client
@property (retain) DEDBugSessionConfiguration *config; // ivar: _config
@property (retain) NSMutableDictionary *deCompletions; // ivar: _deCompletions
@property (retain) NSMutableArray *deListCompletions; // ivar: _deListCompletions
@property (copy) id *deTextDataLoadCompletion; // ivar: _deTextDataLoadCompletion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly) NSObject<OS_dispatch_queue> *diskAccessQueue;
@property (retain) NSMutableSet *filePromises; // ivar: _filePromises
@property (readonly) NSUInteger hash;
@property (retain) NSString *identifier; // ivar: _identifier
@property (retain) DEDExtensionIdentifierManager *identifierManager; // ivar: _identifierManager
@property (readonly) NSObject<OS_os_log> *log;
@property (retain) NSMutableDictionary *ongoingCompletionHandlers; // ivar: _ongoingCompletionHandlers
@property (retain) NSMutableDictionary *pendingOperations; // ivar: _pendingOperations
@property (copy) id *pingHandler; // ivar: _pingHandler
@property (retain, nonatomic) NSString *priorClientAddress; // ivar: _priorClientAddress
@property NSInteger priorClientTransportType; // ivar: _priorClientTransportType
@property NSInteger priorWorkerTransportType; // ivar: _priorWorkerTransportType
@property (copy) id *sessionStateCompletionBlock; // ivar: _sessionStateCompletionBlock
@property (copy) id *statusCompletionBlock; // ivar: _statusCompletionBlock
@property (readonly) Class superclass;
@property (copy) id *syncCompletionBlock; // ivar: _syncCompletionBlock
@property (weak) NSObject<DEDUploadStatusDelegate> *uploadDelegate;
@property (retain) NSDate *uploadStartTime; // ivar: _uploadStartTime
@property (retain) NSObject<DEDWorkerProtocol> *worker; // ivar: _worker


+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(BOOL)hasCapability:(id)arg0 ;
-(BOOL)hasDirectory;
-(BOOL)hasStaleDirectory;
-(BOOL)isCancelling;
-(BOOL)isRunningDE:(id)arg0 ;
-(BOOL)isTarget;
-(BOOL)readyToCancel;
-(BOOL)readyToFinish;
-(BOOL)readyToNotify;
-(BOOL)shouldCollectDiagnosticWithId:(id)arg0 ;
-(NSInteger)instanceType;
-(NSInteger)state;
-(id)finisher;
-(id)finisherWithState;
-(id)hashExtensions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)knownExtensions;
-(id)nextCompletionBlockForIdentifier:(SEL)arg0 ;
-(id)notifier;
-(id)ongoingCollectOperationsWithOperations:(id)arg0 ;
-(id)ongoingExtensionCollectionOperations;
-(id)prettyDescription;
-(id)scheduledDeferredExtensionCollectionOperations;
-(id)shortDescription;
-(id)startDiagnosticExtensionWithIdentifier:(id)arg0 parameters:(id)arg1 completion:(id)arg2 ;
-(id)startDiagnosticExtensionWithIdentifier:(id)arg0 parameters:(id)arg1 deferRunUntil:(id)arg2 completion:(id)arg3 ;
-(id)stateInfo;
-(void)_addSessionData:(id)arg0 filename:(id)arg1 ;
-(void)_cancel;
-(void)_prepareForStartDiagnosticExtensionWithDEDIdentifier:(id)arg0 parameters:(id)arg1 newCollectRemovedPendingKill:(*BOOL)arg2 completion:(id)arg3 ;
-(void)_streamOperationQueue;
-(void)_terminateExtensionWithIdentifier:(id)arg0 info:(id)arg1 ;
-(void)addData:(id)arg0 withFilename:(id)arg1 ;
-(void)adoptFiles:(id)arg0 withCompletion:(id)arg1 ;
-(void)attachCompletionHandlerForDEDExtensionIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)attachCompletionHandlerForOngoingOperation:(id)arg0 handler:(id)arg1 ;
-(void)cancel;
-(void)cancelDiagnosticExtension:(id)arg0 ;
-(void)cancelDiagnosticExtensionWithDEDExtensionIdentifier:(id)arg0 ;
-(void)cancelDiagnosticExtensionWithIdentifier:(id)arg0 ;
-(void)cancelDiagnosticExtensionWithIdentifier:(id)arg0 invocationNumber:(NSInteger)arg1 ;
-(void)cleanup;
-(void)cleanupFinishedUploads:(BOOL)arg0 ;
-(void)clearNotification;
-(void)clearNotificationOnFilingDevice;
-(void)commit;
-(void)didAdoptFilesWithError:(id)arg0 ;
-(void)didAdoptGroup:(id)arg0 ;
-(void)didCancel;
-(void)didCommit;
-(void)didFinishAllUploads;
-(void)didFinishOperation:(NSInteger)arg0 withIdentifier:(id)arg1 ;
-(void)didGetState:(NSInteger)arg0 info:(id)arg1 ;
-(void)didLoadTextDataForExtensions:(id)arg0 localization:(id)arg1 ;
-(void)didStart;
-(void)didTerminateDiagnosticExtension:(id)arg0 info:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finallyStartDiagnosticWithIdentifier:(id)arg0 parameters:(id)arg1 completion:(id)arg2 ;
-(void)finishedDiagnosticWithIdentifier:(id)arg0 result:(id)arg1 ;
-(void)getSessionStatusWithCompletion:(id)arg0 ;
-(void)getStateWithCompletion:(id)arg0 ;
-(void)hasCollected:(id)arg0 isCollecting:(id)arg1 ;
-(void)hasCollected:(id)arg0 isCollecting:(id)arg1 identifiers:(id)arg2 ;
-(void)idsInbound_clearNotificationOnFilingDevice;
-(void)idsInbound_didClearNotificationOnFilingDevice;
-(void)idsInbound_didPresentNotificationOnFilingDevice;
-(void)idsInbound_presentNotificationOnFilingDevice;
-(void)listDiagnosticExtensionsWithCompletion:(id)arg0 ;
-(void)loadTextDataForExtensions:(id)arg0 localization:(id)arg1 completion:(id)arg2 ;
-(void)notifyPromiseCancellationIfNeeded:(id)arg0 info:(id)arg1 ;
-(void)pingWithCallback:(id)arg0 ;
-(void)pong;
-(void)presentNotificationOnFilingDevice;
-(void)removeAttachment:(id)arg0 ;
-(void)removeFromStore;
-(void)resumePendingOperations;
-(void)save;
-(void)scheduleDiagnosticCollectionForClassBAccessWithIdentifier:(id)arg0 parameters:(id)arg1 ;
-(void)scheduleNotification;
-(void)startDiagnosticExtension:(id)arg0 parameters:(id)arg1 completion:(id)arg2 ;
-(void)startDiagnosticExtensionWithDEDIdentifier:(id)arg0 parameters:(id)arg1 completion:(id)arg2 ;
-(void)startDiagnosticExtensionWithDEDIdentifier:(id)arg0 parameters:(id)arg1 deferRunUntil:(id)arg2 completion:(id)arg3 ;
// -(void)storeCollectionCompletion:(id)arg0 forIdentifier:(unk)arg1  ;
-(void)supportsDiagnostics:(id)arg0 ;
-(void)synchronizeSessionStatusWithCompletion:(id)arg0 ;
-(void)terminateExtension:(id)arg0 withInfo:(id)arg1 ;
-(void)uploadProgress:(NSUInteger)arg0 total:(NSUInteger)arg1 ;
-(void)willPerformOperationWithID:(id)arg0 type:(NSInteger)arg1 options:(id)arg2 ;


@end


#endif