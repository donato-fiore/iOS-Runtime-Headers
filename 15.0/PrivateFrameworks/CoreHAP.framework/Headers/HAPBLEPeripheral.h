// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPBLEPERIPHERAL_H
#define HAPBLEPERIPHERAL_H

@class HMFObject, NSString, NSNumber, NSData, NSUUID;



@interface HAPBLEPeripheral : HMFObject

@property (retain, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (retain, nonatomic) NSNumber *advInterval; // ivar: _advInterval
@property (retain, nonatomic) NSNumber *averageRSSI; // ivar: _averageRSSI
@property (retain, nonatomic) NSNumber *category; // ivar: _category
@property (retain, nonatomic) NSNumber *compatibleVersion; // ivar: _compatibleVersion
@property (retain, nonatomic) NSNumber *configNumber; // ivar: _configNumber
@property (copy, nonatomic) NSData *encryptedPayload; // ivar: _encryptedPayload
@property (retain, nonatomic) NSNumber *hkType; // ivar: _hkType
@property (nonatomic) CGFloat lastSeen; // ivar: _lastSeen
@property (retain, nonatomic) NSString *pairingIdentifier; // ivar: _pairingIdentifier
@property (retain, nonatomic) NSNumber *pairingStatusFlag; // ivar: _pairingStatusFlag
@property (retain, nonatomic) NSUUID *peripheralUUID; // ivar: _peripheralUUID
@property (readonly, nonatomic) NSData *setupHash; // ivar: _setupHash
@property (retain, nonatomic) NSNumber *stateNumber; // ivar: _stateNumber
@property (readonly, nonatomic) NSString *whbStableIdentifier; // ivar: _whbStableIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateWithPeripheral:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithName:(id)arg0 peripheralUUID:(id)arg1 hkType:(id)arg2 advInterval:(id)arg3 pairingStatusFlag:(id)arg4 pairingIdentifier:(id)arg5 category:(id)arg6 stateNumber:(id)arg7 configNumber:(id)arg8 hapBLECompatibleVersion:(id)arg9 setupHash:(id)arg10 encryptedPayload:(id)arg11 whbStableIdentifier:(id)arg12 ;
-(void)updateStateNumber:(id)arg0 ;


@end


#endif