// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDMSERVERCORE_H
#define MDMSERVERCORE_H

@class NSString, APSConnection, NSData;
@protocol APSConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MDMServerCore : NSObject <APSConnectionDelegate>



@property (readonly, copy, nonatomic) NSString *daemonIdentifier; // ivar: _daemonIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (retain, nonatomic) APSConnection *memberQueueDevAPSConnection; // ivar: _memberQueueDevAPSConnection
@property (nonatomic) BOOL memberQueueIsMDMConfigurationValid; // ivar: _memberQueueIsMDMConfigurationValid
@property (retain, nonatomic) NSString *memberQueueManagingProfileIdentifier; // ivar: _memberQueueManagingProfileIdentifier
@property (retain, nonatomic) APSConnection *memberQueueProdAPSConnection; // ivar: _memberQueueProdAPSConnection
@property (retain, nonatomic) NSData *memberQueuePushToken; // ivar: _memberQueuePushToken
@property (retain, nonatomic) NSString *memberQueueTopic; // ivar: _memberQueueTopic
@property (nonatomic) BOOL memberQueueUseDevelopmentAPNS; // ivar: _memberQueueUseDevelopmentAPNS
@property (readonly, copy, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (readonly, copy, nonatomic) NSString *serverName; // ivar: _serverName
@property (readonly) Class superclass;


-(BOOL)handleHTTPStatusGoneResponse;
-(BOOL)readConfigurationOutError:(*id)arg0 isUproot:(BOOL)arg1 ;
-(id)_processTraditionalErrorFromTransaction:(id)arg0 ;
-(id)_processTraditionalUnauthorizedFromTransaction:(id)arg0 assertion:(id)arg1 ;
-(id)_processUnauthorizedAuthServicesWithAuthURL:(id)arg0 rmAccountID:(id)arg1 rmAccountUsername:(id)arg2 ;
-(id)_processUnauthorizedMAIDFromTransaction:(id)arg0 authURL:(id)arg1 rmAccountID:(id)arg2 rmAccountUsername:(id)arg3 reauthQueue:(id)arg4 ;
-(id)_processUserChannelUnauthorizedFromTransaction:(id)arg0 rmAccountID:(id)arg1 reauthQueue:(id)arg2 ;
-(id)httpErrorFromTransaction:(id)arg0 assertion:(id)arg1 rmAccountID:(id)arg2 enrollmentMode:(id)arg3 reauthQueue:(id)arg4 ;
-(id)init;
-(id)responseDataFromResponseDictionary:(id)arg0 ;
-(void)_listenForManagedAppleAccountLongLivedTokenChangedNotificationsOnQueue:(id)arg0 perform:(id)arg1 ;
-(void)_presentFollowUpForAuthURL:(id)arg0 accountUsername:(id)arg1 isMAIDAccount:(BOOL)arg2 ;
-(void)clearCachedResponse;
-(void)clearCoreFollowup;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)executionQueueRemoveMDMProfileWithAssertion:(id)arg0 ;
-(void)memberQueueSetupAPSConnectionIsMDMConfigurationValid:(BOOL)arg0 isUserDaemon:(BOOL)arg1 ;
-(void)pushTokenCompletionBlock:(id)arg0 ;
-(void)setTokenUpdateRequestCountToZero;


@end


#endif