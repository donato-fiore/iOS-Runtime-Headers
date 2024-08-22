// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPACCESSORYSERVERBTLE_H
#define HAPACCESSORYSERVERBTLE_H

@class NSArray, NSString, CBPeripheral, NSNumber;
@protocol HAPAccessoryServerMetricProtocol;


#import "HAPAccessoryServer.h"
#import "HAPBLEPeripheral.h"
#import "HAPAccessoryServerBrowserBTLE.h"

@interface HAPAccessoryServerBTLE : HAPAccessoryServer <HAPAccessoryServerMetricProtocol>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (weak, nonatomic) HAPBLEPeripheral *blePeripheral; // ivar: _blePeripheral
@property (readonly, weak, nonatomic) HAPAccessoryServerBrowserBTLE *browser; // ivar: _browser
@property (nonatomic) unsigned char connectReason; // ivar: _connectReason
@property (nonatomic) unsigned char connectionIdleTime; // ivar: _connectionIdleTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger hapBLEProtocolVersion; // ivar: _hapBLEProtocolVersion
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger metricHAPBTLEConnectionCount; // ivar: _metricHAPBTLEConnectionCount
@property (nonatomic) NSUInteger metricHAPBTLEConnectionPerReasonCount; // ivar: _metricHAPBTLEConnectionPerReasonCount
@property (nonatomic) NSUInteger metricHAPBTLEDiscoveryCount; // ivar: _metricHAPBTLEDiscoveryCount
@property (nonatomic) BOOL notifyingCharacteristicUpdated; // ivar: _notifyingCharacteristicUpdated
@property (readonly, weak, nonatomic) CBPeripheral *peripheral; // ivar: _peripheral
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, nonatomic) NSUInteger resumeSessionID; // ivar: _resumeSessionID
@property (readonly, copy) NSString *shortDescription;
@property (nonatomic) BOOL stateChanged; // ivar: _stateChanged
@property (copy, nonatomic) NSNumber *stateNumber; // ivar: _stateNumber
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *whbStableIdentifier; // ivar: _whbStableIdentifier


+(id)hapUUIDFromBTLEUUID:(id)arg0 ;
-(BOOL)isCached;
-(BOOL)isPaired;
-(BOOL)updatePeripheralIdentifier:(*id)arg0 isPairing:(BOOL)arg1 ;
-(BOOL)updateResumeSessionID:(NSUInteger)arg0 ;
-(NSInteger)linkType;
-(id)initWithPeripheral:(id)arg0 name:(id)arg1 pairingUsername:(id)arg2 statusFlags:(id)arg3 stateNumber:(id)arg4 stateChanged:(BOOL)arg5 connectReason:(unsigned char)arg6 configNumber:(id)arg7 category:(id)arg8 setupHash:(id)arg9 connectionIdleTime:(unsigned char)arg10 browser:(id)arg11 keyStore:(id)arg12 whbStableIdentifier:(id)arg13 ;
-(id)readAndResetHAPMetrics:(BOOL)arg0 ;
-(void)configureCharacteristics:(id)arg0 queue:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)discoverAccessoriesAndReadCharacteristicTypes:(id)arg0 ;
-(void)generateBroadcastKey:(unsigned char)arg0 queue:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)handleConnectionWithPeripheral:(id)arg0 withError:(id)arg1 ;
-(void)handleDisconnectionWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)incrementHAPBTLEMetricsConnectionCount;
-(void)incrementHAPBTLEMetricsDiscoveryCount;
-(void)updateConnectionIdleTime:(unsigned char)arg0 ;
-(void)updatePeripheral:(id)arg0 ;


@end


#endif