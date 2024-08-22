// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POWERUISMARTCHARGECLIENTAUDIOACCESSORIES_H
#define POWERUISMARTCHARGECLIENTAUDIOACCESSORIES_H

@class NSString, NSXPCConnection;
@protocol PowerUISmartChargeClientManagingAudioAccessories, OS_os_log;

#import <Foundation/Foundation.h>


@interface PowerUISmartChargeClientAudioAccessories : NSObject <PowerUISmartChargeClientManagingAudioAccessories>



@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;


+(id)remoteInterface;
-(BOOL)connectAndDisableOBCforDevice:(id)arg0 withError:(*id)arg1 ;
-(BOOL)disableSmartChargingForDevice:(id)arg0 withError:(*id)arg1 ;
-(BOOL)enableSmartChargingForDevice:(id)arg0 withError:(*id)arg1 ;
-(BOOL)setState:(NSUInteger)arg0 forDevice:(id)arg1 withError:(*id)arg2 ;
-(BOOL)temporarilyDisableSmartChargingForDevice:(id)arg0 withError:(*id)arg1 ;
-(BOOL)temporarilyEnableChargingForDevice:(id)arg0 withError:(*id)arg1 ;
-(BOOL)updateOBCDeadline:(id)arg0 forDevice:(id)arg1 withError:(*id)arg2 ;
-(NSUInteger)isSmartChargingCurrentlyEnabledForDevice:(id)arg0 withError:(*id)arg1 ;
-(NSUInteger)lastActionForDevice:(id)arg0 ;
-(id)fullChargeDeadlineForDevice:(id)arg0 withError:(*id)arg1 ;
-(id)getAvailableDevices;
-(id)getStatusForDevice:(id)arg0 ;
-(id)initWithClientName:(id)arg0 ;
-(id)lastUsedLeewayWithError:(*id)arg0 ;
-(id)unfilteredDeadlineForDevice:(id)arg0 withError:(*id)arg1 ;
-(void)clearLastActionForDevice:(id)arg0 ;
-(void)connectAndDisableOBCforDevice:(id)arg0 withHandler:(id)arg1 ;
-(void)deleteRecordsForDevice:(id)arg0 ;
-(void)disableSmartChargingForDevice:(id)arg0 withHandler:(id)arg1 ;
-(void)enableSmartChargingForDevice:(id)arg0 withHandler:(id)arg1 ;
-(void)engageUntil:(id)arg0 forDevice:(id)arg1 overrideAllSignals:(BOOL)arg2 ;
-(void)fakeConnectionForDevice:(id)arg0 ;
-(void)fullChargeDeadlineForDevice:(id)arg0 withHandler:(id)arg1 ;
-(void)isSmartChargingCurrentlyEnabledForDevice:(id)arg0 withHandler:(id)arg1 ;
-(void)setFakeConnectionStatusTo:(BOOL)arg0 ;
-(void)startMockingBluetoothForFakeDevice:(id)arg0 ;
-(void)stopMockingBluetooth;
-(void)temporarilyDisableSmartChargingForDevice:(id)arg0 withHandler:(id)arg1 ;
-(void)temporarilyEnableChargingForDevice:(id)arg0 withHandler:(id)arg1 ;
-(void)timeSeriesForDevice:(id)arg0 ;
-(void)unfilteredDeadlineForDevice:(id)arg0 withHandler:(id)arg1 ;
-(void)updateOBCDeadline:(id)arg0 forDevice:(id)arg1 withHandler:(id)arg2 ;


@end


#endif