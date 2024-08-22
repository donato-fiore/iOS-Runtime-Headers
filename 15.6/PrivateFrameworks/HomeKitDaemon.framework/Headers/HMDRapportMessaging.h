// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDRAPPORTMESSAGING_H
#define HMDRAPPORTMESSAGING_H

@class HMFObject, RPCompanionLinkClient, NSMutableArray, NSMutableDictionary, NSString;
@protocol HMFLogging, OS_dispatch_queue, HMDRapportMessagingClientFactory;



@interface HMDRapportMessaging : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMDRapportMessagingClientFactory> *_clientFactory;
    RPCompanionLinkClient *_discoveryClient;
    id *_requestHandler;
    NSMutableArray *_requestQueue;
    NSMutableDictionary *_deviceClients;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedInstance;
-(BOOL)canSendRequestToDestinationID:(id)arg0 ;
-(id)_activeDeviceForIDSIdentifier:(id)arg0 ;
-(id)_clientForIDSIdentifier:(id)arg0 ;
-(id)_createRapportClientForDevice:(id)arg0 ;
-(id)initWithClientFactory:(id)arg0 ;
-(void)_completeQueuedRequests;
-(void)_configureDiscoveryClientWithCompletion:(id)arg0 ;
-(void)_handleRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_invalidateDestinationDevice:(id)arg0 ;
-(void)_queueRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)configureDiscoveryClientWithCompletion:(id)arg0 ;
-(void)registerRequestHandler:(id)arg0 ;
-(void)sendRequest:(id)arg0 destinationID:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;


@end


#endif