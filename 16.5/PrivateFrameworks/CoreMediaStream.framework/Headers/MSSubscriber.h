// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSSUBSCRIBER_H
#define MSSUBSCRIBER_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate, MSSubscribeStorageProtocol, MSSubscriberDelegate;


#import "MSCupidStateMachine.h"
#import "MSSubscribeStreamsProtocol.h"
#import "MSReauthorizationProtocol.h"
#import "MSObjectQueue.h"
#import "MSMediaStreamDaemon.h"

@interface MSSubscriber : MSCupidStateMachine <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate>

 {
    BOOL _checkOneMoreTime;
    int _state;
    MSSubscribeStreamsProtocol *_protocol;
    NSMutableDictionary *_newSubscriptionsByStreamID;
    int _retrievalState;
    id<MSSubscribeStorageProtocol> *_storageProtocol;
    MSReauthorizationProtocol *_reauthProtocol;
    MSObjectQueue *_retrievalQueue;
    NSMutableArray *_assetsBeingRetrieved;
    NSInteger _maxErrorCount;
}


@property (nonatomic) MSMediaStreamDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<MSSubscriberDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int retrievalBatchSize; // ivar: _retrievalBatchSize
@property (readonly) Class superclass;
@property (nonatomic) NSInteger targetRetrievalByteCount; // ivar: _targetRetrievalByteCount


+(BOOL)isInRetryState;
+(id)_clearInstantiatedSubscribersByPersonID;
+(id)_descriptionForRetrievalState:(int)arg0 ;
+(id)_descriptionForState:(int)arg0 ;
+(id)existingSubscriberForPersonID:(id)arg0 ;
+(id)nextActivityDate;
+(id)nextActivityDateForPersonID:(id)arg0 ;
+(id)personIDsWithOutstandingActivities;
+(id)subscriberForPersonID:(id)arg0 ;
+(void)_setMasterNextActivityDate:(id)arg0 forPersonID:(id)arg1 ;
+(void)forgetPersonID:(id)arg0 ;
+(void)stopAllActivities;
-(BOOL)_hasOutstandingPoll;
-(BOOL)_isAllowedToDownload;
-(BOOL)_isInRetryState;
-(id)_subscriptionsByStreamID;
-(id)initWithPersonID:(id)arg0 baseURL:(id)arg1 ;
-(id)ownSubscribedStream;
-(id)subscribedStreams;
-(void)_abort;
-(void)_changeRetrievalStateTo:(int)arg0 ;
-(void)_changeStateTo:(int)arg0 ;
-(void)_checkForNewAssetCollections;
-(void)_didFinishRetrievingSubscriptionUpdate;
-(void)_didReceiveAuthenticationError:(id)arg0 ;
-(void)_finishedRetrievingAsset:(id)arg0 ;
-(void)_forget;
-(void)_reauthorizeAssets;
-(void)_refreshServerSideConfigurationParameters;
-(void)_retrieveAssets;
-(void)_retrieveNextAssets;
-(void)_serverSideConfigurationDidChange:(id)arg0 ;
-(void)_setHasOutstandingPoll:(BOOL)arg0 ;
-(void)_setSubscriptionsByStreamID:(id)arg0 ;
-(void)_stopOutSubscriberState:(*int)arg0 outRetrievalState:(*int)arg1 ;
-(void)_updateMasterManifest;
-(void)abort;
-(void)checkForNewAssetCollections;
-(void)checkForNewAssetCollectionsIfMissingCtag;
-(void)checkForOutstandingActivities;
-(void)deactivate;
-(void)dealloc;
-(void)reauthorizationProtocol:(id)arg0 didReceiveAuthenticationError:(id)arg1 ;
-(void)reauthorizationProtocol:(id)arg0 reauthorizedAssets:(id)arg1 rejectedAssets:(id)arg2 error:(id)arg3 ;
-(void)resetSync;
-(void)retrieveAssets:(id)arg0 ;
-(void)stop;
-(void)subscribeStorageProtocol:(id)arg0 didFinishRetrievingAsset:(id)arg1 error:(id)arg2 ;
-(void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)arg0 ;
-(void)subscribeStreamsProtocol:(id)arg0 didFindDisappearedSubscriptionForPersonID:(id)arg1 ;
-(void)subscribeStreamsProtocol:(id)arg0 didFindTemporarilyUnavailableSubscriptionForPersonID:(id)arg1 ;
-(void)subscribeStreamsProtocol:(id)arg0 didFinishError:(id)arg1 ;
-(void)subscribeStreamsProtocol:(id)arg0 didFinishReceivingUpdatesForPersonID:(id)arg1 ctag:(id)arg2 ;
-(void)subscribeStreamsProtocol:(id)arg0 didReceiveAssetCollections:(id)arg1 forPersonID:(id)arg2 ;
-(void)subscribeStreamsProtocol:(id)arg0 didReceiveAuthenticationError:(id)arg1 ;
-(void)subscribeStreamsProtocol:(id)arg0 willReceiveUpdatesForPersonID:(id)arg1 wasReset:(BOOL)arg2 metadata:(id)arg3 ;


@end


#endif