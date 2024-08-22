// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKASTATUSPUBLISHINGMANAGER_H
#define SKASTATUSPUBLISHINGMANAGER_H

@class NSString;
@protocol SKAStatusPublishingManaging, SKAAccountProviding, SKAChannelManaging, SKADatabaseManaging, SKAStatusEncryptionManaging, OS_dispatch_queue, SKAInvitationManaging;

#import <Foundation/Foundation.h>


@interface SKAStatusPublishingManager : NSObject <SKAStatusPublishingManaging>



@property (retain, nonatomic) NSObject<SKAAccountProviding> *accountProvider; // ivar: _accountProvider
@property (retain, nonatomic) NSObject<SKAChannelManaging> *channelManager; // ivar: _channelManager
@property BOOL clientIsRateLimited; // ivar: _clientIsRateLimited
@property (retain, nonatomic) NSObject<SKADatabaseManaging> *databaseManager; // ivar: _databaseManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<SKAStatusEncryptionManaging> *encryptionManager; // ivar: _encryptionManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue; // ivar: _internalWorkQueue
@property (retain, nonatomic) NSObject<SKAInvitationManaging> *invitationManager; // ivar: _invitationManager
@property BOOL pendingRequestScheduled; // ivar: _pendingRequestScheduled
@property (readonly) Class superclass;


+(id)_errorForDuplicateStatusPublishRequestWithIdentifier:(id)arg0 ;
+(id)_errorForRateLimit;
+(id)_errorForStatusPublishRequestWithIdentifier:(id)arg0 requestedStatusCreationDate:(id)arg1 isOlderThanExistingStatus:(id)arg2 existingStatusCreationDate:(id)arg3 ;
+(id)_noPersonalChannelErrorForStatusTypeIdentifier:(id)arg0 ;
+(id)logger;
-(BOOL)_shouldAbandonRequestForError:(id)arg0 ;
-(BOOL)_shouldAllowPublishForPublishRequest:(id)arg0 onChannel:(id)arg1 error:(*id)arg2 ;
-(BOOL)_shouldClientRateLimit;
-(BOOL)_shouldReauthForError:(id)arg0 ;
-(BOOL)_shouldRetryWithDelayForError:(id)arg0 ;
-(BOOL)_shouldRollChannelForError:(id)arg0 ;
-(CGFloat)_pendingDelayTime;
-(CGFloat)_rapidPublishesTimescale;
-(CGFloat)_rateLimitDelayTime;
-(NSInteger)_maxRapidPublishes;
-(NSInteger)_maxRetryCount;
-(id)initWithDatabaseManager:(id)arg0 channelManager:(id)arg1 accountProvider:(id)arg2 encryptionManager:(id)arg3 invitationManager:(id)arg4 ;
-(void)_markPublishAttempt;
-(void)_publishStatusRequest:(id)arg0 statusTypeIdentifier:(id)arg1 afterTime:(CGFloat)arg2 isPendingPublish:(BOOL)arg3 retryCount:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)_removePendingPublishRequestWithUniqueIdentifier:(id)arg0 databaseContext:(id)arg1 ;
-(void)_removePendingPublishRequestsForStatusTypeIdentifier:(id)arg0 olderThanRequest:(id)arg1 databaseContext:(id)arg2 ;
-(void)createPersonalChannelForStatusTypeIdentifier:(id)arg0 databaseContext:(id)arg1 completion:(id)arg2 ;
-(void)ensurePendingPublishRequestExistsWithPublishRequest:(id)arg0 forStatusTypeIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(void)findOrCreatePersonalChannelForStatusTypeIdentifier:(id)arg0 databaseContext:(id)arg1 completion:(id)arg2 ;
-(void)publishPendingRequestForReason:(NSInteger)arg0 ;
-(void)publishPendingRequestsWithDelay:(CGFloat)arg0 ;
-(void)publishStatusRequest:(id)arg0 statusTypeIdentifier:(id)arg1 afterTime:(CGFloat)arg2 isPendingPublish:(BOOL)arg3 completion:(id)arg4 ;
-(void)removePendingPublishRequestsForStatusTypeIdentifier:(id)arg0 olderThanRequest:(id)arg1 ;


@end


#endif