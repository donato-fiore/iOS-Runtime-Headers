// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPUBLISHER_H
#define MSPUBLISHER_H

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate, MSPublishStorageProtocol, MSPublisherDelegate;


#import "MSCupidStateMachine.h"
#import "MSObjectQueue.h"
#import "MSPublishStreamsProtocol.h"
#import "MSMediaStreamDaemon.h"

@interface MSPublisher : MSCupidStateMachine <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate>

 {
    int _state;
    MSObjectQueue *_uploadQueue;
    MSObjectQueue *_derivativesQueue;
    MSObjectQueue *_quarantinedQueue;
    NSArray *_pendingDerivativesQueue;
    NSMutableArray *_requestAuthQueue;
    NSUInteger _sendingQueueCount;
    NSMutableArray *_sendingQueue;
    NSMutableDictionary *_fileHashToAssetMap;
    MSPublishStreamsProtocol *_protocol;
    id<MSPublishStorageProtocol> *_storageProtocol;
    NSMutableArray *_tempFiles;
    NSMutableDictionary *_maxSizeByUTI;
    int _maxErrorCount;
}


@property (nonatomic) MSMediaStreamDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<MSPublisherDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int publishBatchSize; // ivar: _publishBatchSize
@property (nonatomic) NSInteger publishTargetByteCount; // ivar: _publishTargetByteCount
@property (retain, nonatomic) NSURL *storageProtocolURL; // ivar: _storageProtocolURL
@property (readonly) Class superclass;


+(BOOL)isInRetryState;
+(id)_clearInstantiatedPublishersByPersonID;
+(id)existingPublisherForPersonID:(id)arg0 ;
+(id)nextActivityDate;
+(id)nextActivityDateForPersonID:(id)arg0 ;
+(id)personIDsWithOutstandingActivities;
+(id)publisherForPersonID:(id)arg0 ;
+(void)_setMasterNextActivityDate:(id)arg0 forPersonID:(id)arg1 ;
+(void)forgetPersonID:(id)arg0 ;
+(void)stopAllActivities;
-(BOOL)_isAllowedToUpload;
-(BOOL)_isInRetryState;
-(BOOL)_verifyAssetFile:(id)arg0 ;
-(BOOL)dequeueAssetCollectionWithGUIDs:(id)arg0 outError:(*id)arg1 ;
-(BOOL)enqueueAssetCollections:(id)arg0 outError:(*id)arg1 ;
-(id)_abortedError;
-(id)_checkAssetCollectionFiles:(id)arg0 ;
-(id)_checkObjectWrappers:(id)arg0 ;
-(id)_collectionWithNoDerivatives:(id)arg0 ;
-(id)_invalidStreamsResponseErrorUnderlyingError:(id)arg0 ;
-(id)initWithPersonID:(id)arg0 baseURL:(id)arg1 ;
-(int)_stop;
-(int)publishStorageProtocol:(id)arg0 didRequestFDForAsset:(id)arg1 ;
-(void)_abort;
-(void)_addAssetToFileHashMap:(id)arg0 ;
-(void)_categorizeError:(id)arg0 setOutIsIgnorable:(*BOOL)arg1 setOutIsCounted:(*BOOL)arg2 setOutIsFatal:(*BOOL)arg3 setOutNeedsBackoff:(*BOOL)arg4 setOutIsTemporary:(*BOOL)arg5 setOutIsTokenAuth:(*BOOL)arg6 setOutIsAuthError:(*BOOL)arg7 ;
-(void)_didFinishUsingAssetCollections:(id)arg0 ;
-(void)_forget;
-(void)_quarantineOrDiscardWrappers:(id)arg0 withError:(id)arg1 ;
-(void)_refreshServerSideConfiguredParameters;
-(void)_registerAllAssetsForWrapper:(id)arg0 ;
-(void)_registerAsset:(id)arg0 ;
-(void)_removeAssetFromFileHashMap:(id)arg0 ;
-(void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)arg0 ;
-(void)_requestDerivatives;
-(void)_sendFilesToMMCS;
-(void)_sendMetadataToStreams;
-(void)_sendUploadComplete;
-(void)_serverSideConfigurationDidChange:(id)arg0 ;
-(void)_updateMasterManifest;
-(void)abort;
-(void)computeHashForAsset:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)publish;
-(void)publishStorageProtocol:(id)arg0 didFinishUploadingAsset:(id)arg1 error:(id)arg2 ;
-(void)publishStorageProtocol:(id)arg0 didFinishUsingFD:(int)arg1 forAsset:(id)arg2 ;
-(void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg0 ;
-(void)publishStreamsProtocol:(id)arg0 didFinishSendingUploadCompleteError:(id)arg1 ;
-(void)publishStreamsProtocol:(id)arg0 didFinishUploadingMetadataResponse:(id)arg1 error:(id)arg2 ;
-(void)publishStreamsProtocol:(id)arg0 didReceiveAuthenticationError:(id)arg1 ;
-(void)reenqueueQuarantinedAssetCollections;
-(void)stop;
-(void)submitAssetCollectionsForPublication:(id)arg0 skipAssetCollections:(id)arg1 ;


@end


#endif