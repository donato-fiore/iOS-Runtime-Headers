// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPRECENTLYSEENPAIREDBTLEPERIPHERALTUPLE_H
#define HAPRECENTLYSEENPAIREDBTLEPERIPHERALTUPLE_H

@class HMFObject, NSNumber;


#import "HAPBLEPeripheral.h"

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : HMFObject {
    CGFloat _lastSeen;
}


@property (retain, nonatomic) HAPBLEPeripheral *blePeripheral; // ivar: _blePeripheral
@property (retain, nonatomic) NSNumber *category; // ivar: _category
@property (retain, nonatomic) NSNumber *configNumber; // ivar: _configNumber
@property (nonatomic) NSUInteger connectionPriority; // ivar: _connectionPriority
@property (nonatomic) BOOL monitorState; // ivar: _monitorState
@property (nonatomic) BOOL notifyingCharacteristicUpdated; // ivar: _notifyingCharacteristicUpdated
@property (retain, nonatomic) NSNumber *stateNumber; // ivar: _stateNumber


-(id)description;
-(id)initRecentlySeenPairedHAPBLEPeripheral:(id)arg0 ;
-(void)updatePairedPeripheralConfiguration:(BOOL)arg0 connectionPriority:(NSUInteger)arg1 ;
-(void)updateWithPeripheral:(id)arg0 ;


@end


#endif