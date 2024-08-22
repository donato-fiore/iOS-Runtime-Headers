// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANMESSENGER_H
#define ANMESSENGER_H

@class NSString, ANParticipant;
@protocol ANConnectionDelegate, ANMessengerDelegate, ANIDSConnectionProvider, OS_os_log, ANRapportConnectionProvider;

#import <Foundation/Foundation.h>


@interface ANMessenger : NSObject <ANConnectionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ANMessengerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<ANIDSConnectionProvider> *idsConnection; // ivar: _idsConnection
@property (readonly, nonatomic) ANParticipant *localParticipant;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSObject<ANRapportConnectionProvider> *rapportConnection; // ivar: _rapportConnection
@property (readonly) Class superclass;


+(BOOL)_isAnnouncerAdminInAnnouncement:(id)arg0 home:(id)arg1 ;
+(id)_performPreflightChecksForSendingContent:(id)arg0 toHome:(id)arg1 ;
+(id)_performPreflightChecksForSendingToRooms:(id)arg0 zones:(id)arg1 ;
+(id)announcementForAccessory:(id)arg0 inHome:(id)arg1 fromAnnouncement:(id)arg2 ;
+(id)announcementForDevice:(id)arg0 inHome:(id)arg1 fromAnnouncement:(id)arg2 ;
+(id)announcementForUser:(id)arg0 inHome:(id)arg1 fromAnnouncement:(id)arg2 ;
+(id)createAnnouncementWithRequest:(id)arg0 forLocation:(id)arg1 inHome:(id)arg2 isReply:(BOOL)arg3 error:(*id)arg4 ;
+(id)locationForHome:(id)arg0 rooms:(id)arg1 zones:(id)arg2 idsService:(id)arg3 ;
+(id)locationForReplyToAnnouncement:(id)arg0 home:(id)arg1 idsService:(id)arg2 ;
+(id)performBasicValidationForAnnouncement:(id)arg0 type:(NSUInteger)arg1 ;
+(id)performIDSValidationForAnnouncement:(id)arg0 withSenderContext:(id)arg1 ;
+(id)performPreflightChecksForSendingContent:(id)arg0 toHome:(id)arg1 rooms:(id)arg2 zones:(id)arg3 ;
+(id)performRapportValidationForAnnouncement:(id)arg0 withSenderContext:(id)arg1 ;
+(id)validateAnnouncerInAnnouncement:(id)arg0 home:(id)arg1 ;
+(void)_setIdentifiersForIDSService:(id)arg0 inLocation:(id)arg1 home:(id)arg2 ;
+(void)purgeTemporaryFiles;
-(BOOL)_willTargetReachableDevicesForAnnouncement:(id)arg0 inDestination:(id)arg1 ;
-(CGFloat)_calculateAnnouncementDeadline:(id)arg0 ;
-(id)connectionDidReceiveRequestForHomeLocationStatus:(id)arg0 ;
-(id)getScanningDeviceCandidates;
-(id)init;
-(id)initWithIDSConnection:(id)arg0 rapportConnection:(id)arg1 ;
-(void)_forwardRelayRequest:(id)arg0 withSenderContext:(id)arg1 sentHandler:(id)arg2 ;
-(void)_fulfillRelayRequest:(id)arg0 withSenderContext:(id)arg1 sentHandler:(id)arg2 ;
-(void)_logDebugInfoForHome:(id)arg0 ;
-(void)_relayAnnouncementThroughHomePod:(id)arg0 inHome:(id)arg1 rooms:(id)arg2 sentHandler:(id)arg3 ;
-(void)_sendAnnouncement:(id)arg0 toDestination:(id)arg1 sentHandler:(id)arg2 ;
-(void)broadcastReply:(id)arg0 forAnnouncement:(id)arg1 completion:(id)arg2 ;
-(void)cleanForExit;
-(void)connection:(id)arg0 didReceiveMessage:(id)arg1 fromSender:(id)arg2 senderContext:(id)arg3 handler:(id)arg4 ;
-(void)connection:(id)arg0 failedDeliveryForMessage:(id)arg1 withError:(id)arg2 ;
-(void)forwardAnnouncementToCompanion:(id)arg0 ;
-(void)mockAnnouncement:(id)arg0 playbackDeadline:(id)arg1 sentHandler:(id)arg2 ;
-(void)sendAnnouncement:(id)arg0 sentHandler:(id)arg1 ;
-(void)sendReply:(id)arg0 forAnnouncement:(id)arg1 completion:(id)arg2 ;
-(void)sendRequest:(id)arg0 sentHandler:(id)arg1 ;


@end


#endif