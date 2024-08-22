// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALDOCUMENTSTORE_H
#define HKCLINICALDOCUMENTSTORE_H

@class HKTaskServerProxyProvider, HKObserverSet, NSString;
@protocol HKMedicalDownloadableAttachmentStoreClientInterface, _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKClinicalDocumentStore : NSObject <HKMedicalDownloadableAttachmentStoreClientInterface, _HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
    HKObserverSet *_stateChangeListeners;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_establishProxyConnection;
-(void)_establishProxyConnectionIfNoObserversArePresent;
// -(void)_fetchServerProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)_getSynchronousServerProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)_unitTesting_triggerDownloadableAttachmentDidChange:(id)arg0 completion:(id)arg1 ;
-(void)addClinicalDocumentStateChangeListener:(id)arg0 ;
-(void)clientRemote_downloadableAttachmentDidChangeState:(id)arg0 ;
-(void)connectionInvalidated;
-(void)fetchAttachmentWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)insertDownloadableAttachment:(id)arg0 completion:(id)arg1 ;
-(void)markDataAvailableForAttachmentWithIdentifier:(id)arg0 attachmentContent:(id)arg1 completion:(id)arg2 ;
-(void)markDownloadCompleteForAttachmentWithIdentifier:(id)arg0 fileURL:(id)arg1 completion:(id)arg2 ;
-(void)pingWithCompletion:(id)arg0 ;
-(void)processAttachmentWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeAllAttachmentsFromMedicalRecord:(id)arg0 completion:(id)arg1 ;
-(void)removeClinicalDocumentStateChangeListener:(id)arg0 ;
-(void)triggerAttachmentRetryForMedicalRecordWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateErrorStatusForAttachmentWithIdentifier:(id)arg0 errorStatus:(NSInteger)arg1 lastError:(id)arg2 completion:(id)arg3 ;
-(void)updateRetryCountForAttachmentWithIdentifier:(id)arg0 retryCount:(NSInteger)arg1 nextRetryDate:(id)arg2 completion:(id)arg3 ;
-(void)updateStatusAndClearErrorForAttachmentWithIdentifier:(id)arg0 status:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif