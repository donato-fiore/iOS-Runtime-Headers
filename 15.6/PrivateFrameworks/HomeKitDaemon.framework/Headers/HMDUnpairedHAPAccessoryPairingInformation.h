// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUNPAIREDHAPACCESSORYPAIRINGINFORMATION_H
#define HMDUNPAIREDHAPACCESSORYPAIRINGINFORMATION_H

@class HMFObject, NSString, NSUUID, HMFActivity, HMFTimer, HAPAccessoryPairingRequest;



@interface HMDUnpairedHAPAccessoryPairingInformation : HMFObject

@property (retain, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (retain, nonatomic) NSString *accessoryServerIdentifier; // ivar: _accessoryServerIdentifier
@property (retain, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (copy, nonatomic) id *addAccessoryCompletionHandler; // ivar: _addAccessoryCompletionHandler
@property (copy, nonatomic) id *addAccessoryProgressHandler; // ivar: _addAccessoryProgressHandler
@property (nonatomic) BOOL allowAddUnauthenticatedAccessory; // ivar: _allowAddUnauthenticatedAccessory
@property (nonatomic) BOOL legacyWAC; // ivar: _legacyWAC
@property (nonatomic) NSInteger linkType; // ivar: _linkType
@property (weak, nonatomic) HMFActivity *pairingActivity; // ivar: _pairingActivity
@property (retain, nonatomic) HMFTimer *pairingInterruptionTimer; // ivar: _pairingInterruptionTimer
@property (readonly, nonatomic) HAPAccessoryPairingRequest *pairingRequest; // ivar: _pairingRequest
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
// -(id)initWithAccessoryDescription:(id)arg0 linkType:(NSInteger)arg1 completionHandler:(id)arg2 progressHandler:(unk)arg3 pairingRequest:(id)arg4  ;
// -(id)initWithAccessoryUUID:(id)arg0 accessoryName:(id)arg1 linkType:(NSInteger)arg2 setupCode:(id)arg3 completionHandler:(id)arg4 setupCodeProvider:(unk)arg5 pairingRequest:(id)arg6  ;


@end


#endif