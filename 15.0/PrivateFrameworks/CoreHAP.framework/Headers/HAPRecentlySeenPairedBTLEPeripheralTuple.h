// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPRECENTLYSEENPAIREDBTLEPERIPHERALTUPLE_H
#define HAPRECENTLYSEENPAIREDBTLEPERIPHERALTUPLE_H

@class HMFObject, NSMapTable, NSMutableDictionary, NSNumber, NSString, CBPeripheral, NSData;



@interface HAPRecentlySeenPairedBTLEPeripheralTuple : HMFObject

@property (nonatomic) NSUInteger advertisementFormat; // ivar: _advertisementFormat
@property (readonly, nonatomic) NSMapTable *cachedCharacteristicSignatures; // ivar: _cachedCharacteristicSignatures
@property (readonly, nonatomic) NSMutableDictionary *cachedDescriptors; // ivar: _cachedDescriptors
@property (readonly, nonatomic) NSMapTable *cachedServiceSignatures; // ivar: _cachedServiceSignatures
@property (retain, nonatomic) NSNumber *categoryIdentifier; // ivar: _categoryIdentifier
@property (retain, nonatomic) NSNumber *configNumber; // ivar: _configNumber
@property (nonatomic) NSUInteger connectionPriority; // ivar: _connectionPriority
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat lastSeen; // ivar: _lastSeen
@property (nonatomic) BOOL monitorState; // ivar: _monitorState
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL notifyingCharacteristicUpdated; // ivar: _notifyingCharacteristicUpdated
@property (retain, nonatomic) CBPeripheral *peripheral; // ivar: _peripheral
@property (readonly, nonatomic) NSData *setupHash; // ivar: _setupHash
@property (retain, nonatomic) NSNumber *stateNumber; // ivar: _stateNumber
@property (retain, nonatomic) NSNumber *statusFlags; // ivar: _statusFlags


-(id)description;
-(id)initRecentlySeenPairedBTLEPeripheral:(id)arg0 statusFlags:(id)arg1 stateNumber:(id)arg2 category:(id)arg3 configNumber:(id)arg4 name:(id)arg5 identifier:(id)arg6 advertisementFormat:(NSUInteger)arg7 setupHash:(id)arg8 ;
-(void)updatePairedPeripheralConfiguration:(BOOL)arg0 connectionPriority:(NSUInteger)arg1 ;
-(void)updateWithPeripheral:(id)arg0 ;


@end


#endif