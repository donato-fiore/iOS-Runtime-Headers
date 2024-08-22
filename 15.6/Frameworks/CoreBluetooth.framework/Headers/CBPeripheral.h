// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBPERIPHERAL_H
#define CBPERIPHERAL_H

@class NSMutableDictionary, NSString, NSNumber, NSHashTable, NSArray;
@protocol CBPeripheralDelegate;


#import "CBPeer.h"

@interface CBPeripheral : CBPeer {
    ? _delegateFlags;
    NSMutableDictionary *_attributes;
}


@property (retain) NSString *BDAddress; // ivar: _BDAddress
@property (retain) NSNumber *RSSI; // ivar: _RSSI
@property BOOL ancsAuthorized; // ivar: _ancsAuthorized
@property unsigned short appearance; // ivar: _appearance
@property BOOL canSendWriteWithoutResponse; // ivar: _canSendWriteWithoutResponse
@property (readonly, nonatomic, getter=isConnectedToSystem) BOOL connectedToSystem; // ivar: _connectedToSystem
@property (weak, nonatomic) NSObject<CBPeripheralDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isConnectedToSystem; // ivar: _isConnectedToSystem
@property (readonly, retain, nonatomic) NSHashTable *l2capChannels; // ivar: _l2capChannels
@property (retain) NSString *name; // ivar: _name
@property (retain) NSArray *services; // ivar: _services
@property NSInteger state; // ivar: _state
@property (readonly) BOOL visibleInSettings; // ivar: _visibleInSettings
@property unsigned int writesPending; // ivar: _writesPending


-(BOOL)isConnected;
-(NSUInteger)maximumWriteValueLengthForType:(NSInteger)arg0 ;
-(id)attributeForHandle:(id)arg0 ;
-(id)description;
-(id)initWithCentralManager:(id)arg0 info:(id)arg1 ;
-(id)l2capChannelForPeer:(id)arg0 withPsm:(unsigned short)arg1 ;
-(id)sendSyncMsg:(int)arg0 args:(id)arg1 ;
-(void)dealloc;
-(void)discoverCharacteristics:(id)arg0 forService:(id)arg1 ;
-(void)discoverDescriptorsForCharacteristic:(id)arg0 ;
-(void)discoverIncludedServices:(id)arg0 forService:(id)arg1 ;
-(void)discoverServices:(id)arg0 ;
-(void)getTimeSyncData;
-(void)handleAttributeEvent:(id)arg0 args:(id)arg1 attributeSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(BOOL)arg4 ;
-(void)handleCharacteristicDescriptorsDiscovered:(id)arg0 ;
-(void)handleCharacteristicEvent:(id)arg0 characteristicSelector:(SEL)arg1 delegateSelector:(SEL)arg2 delegateFlag:(BOOL)arg3 ;
-(void)handleCharacteristicValueNotifying:(id)arg0 ;
-(void)handleCharacteristicValueUpdated:(id)arg0 ;
-(void)handleCharacteristicValueWritten:(id)arg0 ;
-(void)handleConnectionStateUpdated:(BOOL)arg0 ;
-(void)handleDescriptorEvent:(id)arg0 descriptorSelector:(SEL)arg1 delegateSelector:(SEL)arg2 delegateFlag:(BOOL)arg3 ;
-(void)handleDescriptorValueUpdated:(id)arg0 ;
-(void)handleDescriptorValueWritten:(id)arg0 ;
-(void)handleDisconnection;
-(void)handleFailedConnection;
-(void)handleL2CAPChannelClosed:(id)arg0 ;
-(void)handleL2CAPChannelOpened:(id)arg0 ;
-(void)handleMsg:(int)arg0 args:(id)arg1 ;
-(void)handleNameUpdated:(id)arg0 ;
-(void)handleRSSIUpdated:(id)arg0 ;
-(void)handleServiceCharacteristicsDiscovered:(id)arg0 ;
-(void)handleServiceEvent:(id)arg0 serviceSelector:(SEL)arg1 delegateSelector:(SEL)arg2 delegateFlag:(BOOL)arg3 ;
-(void)handleServiceIncludedServicesDiscovered:(id)arg0 ;
-(void)handleServicesChanged:(id)arg0 ;
-(void)handleServicesDiscovered:(id)arg0 ;
-(void)handleSuccessfulConnection:(id)arg0 ;
-(void)handleTimeSyncResponse:(id)arg0 ;
-(void)handleVisibilityChanged:(id)arg0 ;
-(void)invalidateAllAttributes;
-(void)isReadyForUpdates;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)openL2CAPChannel:(unsigned short)arg0 ;
-(void)openL2CAPChannel:(unsigned short)arg0 options:(id)arg1 ;
-(void)openL2CAPChannel:(unsigned short)arg0 priority:(NSInteger)arg1 ;
-(void)readValueForCharacteristic:(id)arg0 ;
-(void)readValueForDescriptor:(id)arg0 ;
-(void)removeAllL2CAPChannels;
-(void)removeAttributeForHandle:(id)arg0 ;
-(void)sendMsg:(int)arg0 args:(id)arg1 ;
-(void)sendMsg:(int)arg0 requiresConnected:(BOOL)arg1 args:(id)arg2 ;
-(void)setAttribute:(id)arg0 forHandle:(id)arg1 ;
-(void)setBroadcastValue:(BOOL)arg0 forCharacteristic:(id)arg1 ;
-(void)setHighPriorityStream:(BOOL)arg0 duration:(id)arg1 ;
-(void)setNotifyValue:(BOOL)arg0 forCharacteristic:(id)arg1 ;
-(void)setOrphan;
-(void)setPeripheralName:(id)arg0 ;
-(void)writeValue:(id)arg0 forCharacteristic:(id)arg1 type:(NSInteger)arg2 ;
-(void)writeValue:(id)arg0 forDescriptor:(id)arg1 ;


@end


#endif