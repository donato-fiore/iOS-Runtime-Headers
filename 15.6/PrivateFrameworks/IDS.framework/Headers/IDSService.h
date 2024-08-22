// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSSERVICE_H
#define IDSSERVICE_H

@class NSArray, NSSet, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "_IDSService.h"

@interface IDSService : NSObject {
    _IDSService *_internal;
}


@property (readonly, nonatomic) NSArray *URIs;
@property (readonly, nonatomic) _IDSService *_internal;
@property (readonly, copy, nonatomic) NSSet *accounts;
@property (readonly, nonatomic) BOOL canSend;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (readonly, copy, nonatomic) NSSet *internalAccounts;
@property (readonly, nonatomic) NSDictionary *pseudonymURIMap;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier;


+(BOOL)checkMessageSize:(NSUInteger)arg0 priority:(NSInteger)arg1 ;
+(id)removeSentinelFromAliases:(id)arg0 ;
+(void)serviceWithIdentifier:(id)arg0 commands:(id)arg1 manuallyAckMessages:(BOOL)arg2 completion:(id)arg3 ;
+(void)serviceWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(BOOL)cancelIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)cancelOpportunisticDataWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)getProgressUpdateForIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)isPretendingToBeFull;
-(BOOL)reportSpamMessage:(id)arg0 ;
-(BOOL)sendAccessoryData:(id)arg0 toAccessoryID:(id)arg1 accessToken:(id)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendAheadGroup:(id)arg0 priority:(NSInteger)arg1 options:(id)arg2 identifier:(*id)arg3 error:(*id)arg4 ;
-(BOOL)sendCertifiedDeliveryReceipt:(id)arg0 ;
-(BOOL)sendData:(id)arg0 fromAccount:(id)arg1 toDestinations:(id)arg2 priority:(NSInteger)arg3 options:(id)arg4 identifier:(*id)arg5 error:(*id)arg6 ;
-(BOOL)sendData:(id)arg0 priority:(NSInteger)arg1 options:(id)arg2 identifier:(*id)arg3 error:(*id)arg4 ;
-(BOOL)sendData:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendInvitation:(id)arg0 toDestination:(id)arg1 options:(id)arg2 identifier:(*id)arg3 error:(*id)arg4 ;
-(BOOL)sendInvitationUpdate:(id)arg0 toDestination:(id)arg1 options:(id)arg2 identifier:(*id)arg3 error:(*id)arg4 ;
-(BOOL)sendMessage:(id)arg0 fromAccount:(id)arg1 toDestinations:(id)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendMessage:(id)arg0 fromAccount:(id)arg1 toDestinations:(id)arg2 priority:(NSInteger)arg3 options:(id)arg4 identifier:(*id)arg5 error:(*id)arg6 ;
-(BOOL)sendMessage:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendOpportunisticData:(id)arg0 options:(id)arg1 identifier:(id)arg2 error:(*id)arg3 ;
-(BOOL)sendProtobuf:(id)arg0 fromAccount:(id)arg1 toDestinations:(id)arg2 priority:(NSInteger)arg3 options:(id)arg4 identifier:(*id)arg5 error:(*id)arg6 ;
-(BOOL)sendProtobuf:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendResourceAtURL:(id)arg0 metadata:(id)arg1 toDestinations:(id)arg2 priority:(NSInteger)arg3 options:(id)arg4 identifier:(*id)arg5 error:(*id)arg6 ;
-(BOOL)sendServerMessage:(id)arg0 command:(id)arg1 fromAccount:(id)arg2 ;
-(BOOL)updateSubServices:(id)arg0 forDevice:(id)arg1 ;
-(NSInteger)maxEffectivePayloadSize;
-(NSInteger)maxHomeKitPayloadSize;
-(SEL)protobufActionForIncomingRequestsOfType:(unsigned short)arg0 ;
-(SEL)protobufActionForIncomingResponsesOfType:(unsigned short)arg0 ;
-(id)_accountWithAlias:(id)arg0 ;
-(id)accountMatchingSim:(id)arg0 ;
-(id)accountMatchingSimIdentifier:(id)arg0 ;
-(id)activeAliases;
-(id)aliases;
-(id)datagramChannelForSessionDestination:(id)arg0 error:(*id)arg1 ;
-(id)datagramChannelForSocketDescriptor:(int)arg0 error:(*id)arg1 ;
-(id)datagramConnectionForSessionDestination:(id)arg0 error:(*id)arg1 ;
-(id)datagramConnectionForSessionDestination:(id)arg0 uid:(unsigned int)arg1 error:(*id)arg2 ;
-(id)datagramConnectionForSocketDescriptor:(int)arg0 error:(*id)arg1 ;
-(id)deviceForFromID:(id)arg0 ;
-(id)deviceForUniqueID:(id)arg0 ;
-(id)devicesForBTUUID:(id)arg0 ;
-(id)firstRoutableInternetDestinationForSelf;
-(id)iCloudAccount;
-(id)initWithService:(id)arg0 ;
-(id)initWithService:(id)arg0 commands:(id)arg1 ;
-(id)initWithService:(id)arg0 commands:(id)arg1 manuallyAckMessages:(BOOL)arg2 ;
-(id)initWithService:(id)arg0 manuallyAckMessages:(BOOL)arg1 ;
-(id)initWithService:(id)arg0 serviceDomain:(id)arg1 ;
-(id)internal;
-(id)linkedDeviceForFromID:(id)arg0 withRelationship:(NSInteger)arg1 ;
-(id)linkedDevicesWithRelationship:(NSInteger)arg0 ;
-(id)pseudonymForPseudonymURI:(id)arg0 ;
-(id)pseudonymPropertiesWithFeatureID:(id)arg0 scopeID:(id)arg1 expiryDurationInSeconds:(CGFloat)arg2 ;
-(id)pseudonymsForMaskedURI:(id)arg0 ;
-(id)pseudonymsForMaskedURI:(id)arg0 matchingProperties:(id)arg1 ;
-(id)serviceDomain;
-(id)streamConnectionForSessionDestination:(id)arg0 error:(*id)arg1 ;
-(id)streamConnectionForSocketDescriptor:(int)arg0 error:(*id)arg1 ;
-(id)uriForFromID:(id)arg0 ;
-(void)activateAlias:(id)arg0 ;
-(void)activateAliases:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)addDelegate:(id)arg0 withDelegateProperties:(id)arg1 queue:(id)arg2 ;
-(void)deactivateAlias:(id)arg0 ;
-(void)deactivateAliases:(id)arg0 ;
-(void)dealloc;
-(void)performGroupTask:(id)arg0 ;
-(void)provisionPseudonymForURI:(id)arg0 withProperties:(id)arg1 completion:(id)arg2 ;
-(void)provisionPseudonymForURI:(id)arg0 withProperties:(id)arg1 requestProperties:(id)arg2 completion:(id)arg3 ;
-(void)provisionPseudonymWithProperties:(id)arg0 completion:(id)arg1 ;
-(void)provisionPseudonymWithProperties:(id)arg0 requestProperties:(id)arg1 completion:(id)arg2 ;
-(void)removeDelegate:(id)arg0 ;
-(void)renewPseudonym:(id)arg0 forUpdatedDuration:(CGFloat)arg1 completion:(id)arg2 ;
-(void)renewPseudonym:(id)arg0 forUpdatedExpiryEpoch:(CGFloat)arg1 completion:(id)arg2 ;
-(void)reportAction:(NSInteger)arg0 ofTempURI:(id)arg1 fromURI:(id)arg2 withCompletion:(id)arg3 ;
-(void)revokePseudonym:(id)arg0 completion:(id)arg1 ;
-(void)scheduleTransactionLogTask:(id)arg0 ;
-(void)sendAckForMessageWithContext:(id)arg0 ;
-(void)setLinkPreferences:(id)arg0 ;
-(void)setPreferInfraWiFi:(BOOL)arg0 ;
-(void)setPretendingToBeFull:(BOOL)arg0 ;
-(void)setProtobufAction:(SEL)arg0 forIncomingRequestsOfType:(unsigned short)arg1 ;
-(void)setProtobufAction:(SEL)arg0 forIncomingResponsesOfType:(unsigned short)arg1 ;
-(void)startOTRTest:(NSInteger)arg0 ;
-(void)testCloudQRConnection;
-(void)updateSubServices:(id)arg0 ;


@end


#endif