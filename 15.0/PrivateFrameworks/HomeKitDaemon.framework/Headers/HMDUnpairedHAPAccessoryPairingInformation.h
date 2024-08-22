// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUNPAIREDHAPACCESSORYPAIRINGINFORMATION_H
#define HMDUNPAIREDHAPACCESSORYPAIRINGINFORMATION_H

@class HMFObject, NSString, NSUUID, HAPAccessoryConfiguration, NSData, HMFActivity, HMFTimer;



@interface HMDUnpairedHAPAccessoryPairingInformation : HMFObject

@property (retain, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (retain, nonatomic) NSString *accessoryServerIdentifier; // ivar: _accessoryServerIdentifier
@property (retain, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (copy, nonatomic) id *addAccessoryCompletionHandler; // ivar: _addAccessoryCompletionHandler
@property (copy, nonatomic) id *addAccessoryProgressHandler; // ivar: _addAccessoryProgressHandler
@property (nonatomic) BOOL allowAddUnauthenticatedAccessory; // ivar: _allowAddUnauthenticatedAccessory
@property (readonly, nonatomic) HAPAccessoryConfiguration *hapAccessoryConfiguration; // ivar: _hapAccessoryConfiguration
@property (retain, nonatomic) NSString *homeName; // ivar: _homeName
@property (nonatomic) BOOL legacyWAC; // ivar: _legacyWAC
@property (nonatomic) NSInteger linkType; // ivar: _linkType
@property (nonatomic) BOOL needsUserConsent; // ivar: _needsUserConsent
@property (retain, nonatomic) NSData *ownershipToken; // ivar: _ownershipToken
@property (weak, nonatomic) HMFActivity *pairingActivity; // ivar: _pairingActivity
@property (retain, nonatomic) HMFTimer *pairingInterruptionTimer; // ivar: _pairingInterruptionTimer
@property (retain, nonatomic) HMFTimer *pairingRetryTimer; // ivar: _pairingRetryTimer
@property (nonatomic) BOOL provideNetworkCredentialsToAccessory; // ivar: _provideNetworkCredentialsToAccessory
@property (retain, nonatomic) HMFTimer *reconfirmTimer; // ivar: _reconfirmTimer
@property (retain, nonatomic) NSString *setupCode; // ivar: _setupCode
@property (nonatomic) BOOL setupCodeProvided; // ivar: _setupCodeProvided
@property (copy, nonatomic) id *setupCodeProviderCompletionHandler; // ivar: _setupCodeProviderCompletionHandler
@property (retain, nonatomic) NSString *setupID; // ivar: _setupID
@property (nonatomic) BOOL wacAccessory; // ivar: _wacAccessory


-(BOOL)matchesAccessoryServer:(id)arg0 ;
-(BOOL)matchesUnpairedAccessory:(id)arg0 ;
-(id)description;
// -(id)initWithAccessoryDescription:(id)arg0 linkType:(NSInteger)arg1 needsUserConsent:(BOOL)arg2 completionHandler:(id)arg3 progressHandler:(unk)arg4 wiFiPSK:(id)arg5 country:(unk)arg6  ;
// -(id)initWithAccessoryUUID:(id)arg0 accessoryName:(id)arg1 linkType:(NSInteger)arg2 homeName:(id)arg3 setupCode:(id)arg4 completionHandler:(id)arg5 setupCodeProvider:(unk)arg6 wiFiPSK:(id)arg7 country:(unk)arg8  ;


@end


#endif