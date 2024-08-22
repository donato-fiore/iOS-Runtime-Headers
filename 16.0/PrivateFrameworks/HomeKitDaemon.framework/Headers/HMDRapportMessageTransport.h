// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDRAPPORTMESSAGETRANSPORT_H
#define HMDRAPPORTMESSAGETRANSPORT_H

@protocol HMDRapportMessagingReachabilityDelegate, HMMLogEventSubmitting;


#import "HMDRemoteMessageTransport.h"
#import "HMDAppleAccountManager.h"
#import "HMDRapportMessaging.h"

@interface HMDRapportMessageTransport : HMDRemoteMessageTransport <HMDRapportMessagingReachabilityDelegate>



@property (readonly, nonatomic) HMDAppleAccountManager *appleAccountManager; // ivar: _appleAccountManager
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly, nonatomic) HMDRapportMessaging *rapportMessaging; // ivar: _rapportMessaging


+(NSUInteger)restriction;
+(id)logCategory;
-(BOOL)canSendMessage:(id)arg0 ;
-(BOOL)isSecure;
-(BOOL)isValidMessage:(id)arg0 ;
-(id)_IDSIdentifierForDestination:(id)arg0 ;
-(id)_deviceForIDSIdentifier:(id)arg0 deviceIdentifier:(id)arg1 ;
-(id)_rpOptions:(id)arg0 stringForKey:(id)arg1 ;
-(id)_serializeRemoteMessage:(id)arg0 withResponseErrorData:(id)arg1 serializationError:(*id)arg2 ;
-(id)initWithAccountRegistry:(id)arg0 ;
-(id)initWithAccountRegistry:(id)arg0 rapportMessaging:(id)arg1 logEventSubmitter:(id)arg2 appleAccountManager:(id)arg3 ;
-(id)start;
-(int)transportType;
-(void)_addSourceDeviceIdentifierToPayload:(id)arg0 withRemoteMessage:(id)arg1 ;
-(void)_configureRapport;
-(void)_didReceiveRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)_setSharedUserIDSIdentifierForDevice:(id)arg0 idsIdentifier:(id)arg1 ;
-(void)rapportMessaging:(id)arg0 idsIdentifier:(id)arg1 didAppearReachable:(BOOL)arg2 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif