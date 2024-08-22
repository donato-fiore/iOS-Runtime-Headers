// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NDANALYTICSENVELOPEMANAGER_H
#define NDANALYTICSENVELOPEMANAGER_H

@class NSString, NFMutexLock, FCKeyValueStore;
@protocol NDAnalyticsEnvelopeStoreObserver, NDAnalyticsUploadSchedulerDelegate, NDAnalyticsService;

#import <Foundation/Foundation.h>

#import "NDAnalyticsEnvelopeStore.h"
#import "NDAnalyticsPayloadAssembler.h"
#import "NDAnalyticsPayloadUploader.h"
#import "NDAnalyticsUploadScheduler.h"

@interface NDAnalyticsEnvelopeManager : NSObject <NDAnalyticsEnvelopeStoreObserver, NDAnalyticsUploadSchedulerDelegate, NDAnalyticsService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NDAnalyticsEnvelopeStore *envelopeStore; // ivar: _envelopeStore
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NFMutexLock *keyValueStoreLock; // ivar: _keyValueStoreLock
@property (retain, nonatomic) FCKeyValueStore *lastUploadDatesByContentType; // ivar: _lastUploadDatesByContentType
@property (retain, nonatomic) NDAnalyticsPayloadAssembler *payloadAssembler; // ivar: _payloadAssembler
@property (retain, nonatomic) NDAnalyticsPayloadUploader *payloadUploader; // ivar: _payloadUploader
@property (readonly) Class superclass;
@property (retain, nonatomic) NDAnalyticsUploadScheduler *uploadScheduler; // ivar: _uploadScheduler


-(id)_handleDroppedEnvelopesForLocalReasons:(id)arg0 ;
-(id)_handleOutcomeOfUploadAttemptWithPayload:(id)arg0 success:(BOOL)arg1 error:(id)arg2 willRetry:(BOOL)arg3 hitEndpoint:(BOOL)arg4 ;
-(id)init;
-(id)initWithAppConfigurationManager:(id)arg0 storeDirectoryFileURL:(id)arg1 URLSessionQueue:(id)arg2 ;
-(void)_scheduleUploadIfNeededWithCompletion:(id)arg0 ;
-(void)envelopeStore:(id)arg0 didFlushEnvelopesForEntries:(id)arg1 ;
-(void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)submitEnvelopes:(id)arg0 withCompletion:(id)arg1 ;
// -(void)submitEnvelopes:(id)arg0 withSubmissionCompletion:(id)arg1 foregroundUploadCompletion:(unk)arg2  ;
-(void)uploadScheduler:(id)arg0 performUploadWithCompletion:(id)arg1 ;
-(void)uploadSchedulerDidDropScheduledBackgroundUpload:(id)arg0 ;


@end


#endif