// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPBLEPERIPHERAL_H
#define HAPBLEPERIPHERAL_H

@class HMFObject, NSString, NSNumber, CBPeripheral, NSMutableArray, NSData, NSArray, NSUUID;
@protocol NSCopying;



@interface HAPBLEPeripheral : HMFObject <NSCopying>

 {
    os_unfair_lock_s _lock;
}


@property (retain) NSString *advDeviceAddress; // ivar: _advDeviceAddress
@property (retain) NSNumber *advInterval; // ivar: _advInterval
@property NSUInteger advertisementFormat; // ivar: _advertisementFormat
@property (retain) NSNumber *averageRSSI; // ivar: _averageRSSI
@property (retain) NSNumber *category; // ivar: _category
@property (retain) CBPeripheral *cbPeripheral; // ivar: _cbPeripheral
@property (retain, nonatomic) NSMutableArray *cbPeripheralUUIDs; // ivar: _cbPeripheralUUIDs
@property (retain) NSNumber *configNumber; // ivar: _configNumber
@property (retain) NSData *encryptedPayload; // ivar: _encryptedPayload
@property (retain) NSNumber *hkType; // ivar: _hkType
@property (copy) NSString *identifier; // ivar: _identifier
@property BOOL isCached; // ivar: _isCached
@property (readonly, nonatomic) BOOL isReachable;
@property CGFloat lastSeen; // ivar: _lastSeen
@property (copy) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *peripheralUUIDs;
@property (retain) NSData *setupHash; // ivar: _setupHash
@property (retain) NSNumber *stateNumber; // ivar: _stateNumber
@property (retain) NSNumber *statusFlags; // ivar: _statusFlags
@property (readonly) NSUUID *uniqueBTIdentifier; // ivar: _uniqueBTIdentifier
@property (copy) NSString *whbStableIdentifier; // ivar: _whbStableIdentifier


+(id)uuidForBTLEPeripheral:(id)arg0 ;
-(BOOL)isBroadcasting;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateWithPeripheral:(id)arg0 ;
-(NSInteger)compareConfigNumber:(id)arg0 ;
-(NSInteger)compareStateNumber:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 peripheralUUID:(id)arg1 identifier:(id)arg2 hapVersion:(id)arg3 hkType:(id)arg4 advInterval:(id)arg5 statusFlags:(id)arg6 category:(id)arg7 stateNumber:(id)arg8 configNumber:(id)arg9 setupHash:(id)arg10 encryptedPayload:(id)arg11 whbStableIdentifier:(id)arg12 advDeviceAddress:(id)arg13 ;
-(id)shortDescription;
-(void)_updateAverageRSSIWithRSSI:(id)arg0 ;
-(void)connectedToCBPeripheral:(id)arg0 error:(id)arg1 ;
-(void)disconnectedFromCBPeripheral:(id)arg0 shouldRemove:(BOOL)arg1 ;
-(void)mergeWithPeripheral:(id)arg0 ;
-(void)reset;
-(void)updateStateNumber:(id)arg0 ;


@end


#endif