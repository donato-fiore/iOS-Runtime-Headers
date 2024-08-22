// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSCELLULARLINKMONITOR_H
#define IDSCELLULARLINKMONITOR_H

@class NSString, NSHashTable, NSMutableDictionary, CoreTelephonyClient, CTXPCServiceSubscriptionContext;
@protocol CoreTelephonyClientDataDelegate;

#import <Foundation/Foundation.h>


@interface IDSCellularLinkMonitor : NSObject <CoreTelephonyClientDataDelegate>

 {
    id<CoreTelephonyClientDataDelegate> *_ctClientDataDelegate;
    NSString *_dataIndicator;
    NSHashTable *_cellularLinkDelegates;
    NSMutableDictionary *_notificationRegInfo;
    unsigned int _remoteDeviceVersion;
}


@property (retain, nonatomic) CoreTelephonyClient *_ctClient; // ivar: _ctClient
@property (nonatomic) *__CTServerConnection _ctServerConnection; // ivar: _ctServerConnection
@property (readonly) NSString *cellularDataInterfaceName; // ivar: _cellularDataInterfaceName
@property (readonly) unsigned int cellularMTU; // ivar: _cellularMTU
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *currentDataSubscriptionContextSync; // ivar: _currentDataSubscriptionContextSync
@property (readonly) unsigned int dataSoMaskBits; // ivar: _dataSoMaskBits
@property (readonly) BOOL dataUsable; // ivar: _dataUsable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) unsigned int radioAccessTechnology; // ivar: _radioAccessTechnology
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_dataContextUsable:(id)arg0 dataStatus:(id)arg1 ;
-(BOOL)_updateCellularDataInterface:(BOOL)arg0 ;
-(BOOL)_updateCellularDataInterfaceNameByConnectionState:(int)arg0 isStateActiveRequired:(BOOL)arg1 interfaceName:(id)arg2 ;
-(BOOL)_updateCellularMTU;
-(BOOL)_updateDataBearerSoMask;
-(BOOL)_updateRadioAccessTechnology;
-(BOOL)dropIPPackets:(id)arg0 localAddress:(struct sockaddr *)arg1 remoteAddress:(struct sockaddr *)arg2 isRelay:(BOOL)arg3 channelNumberMSB:(unsigned char)arg4 ;
-(BOOL)setPacketNotificationFilter:(struct sockaddr *)arg0 remote:(struct sockaddr *)arg1 uniqueTag:(unsigned int)arg2 callType:(unsigned char)arg3 ;
-(id)_getCTXPCServiceSubscriptionContext;
-(id)_getCurrentDataSimContext:(id)arg0 inContextArray:(id)arg1 ;
-(id)init;
-(void)_notifyClientDataBearerSoMask;
-(void)_setupCTServerConnection;
-(void)_updateClientDataBearerSoMask;
-(void)_updateDataStatus;
-(void)addCellularLinkDelegate:(id)arg0 ;
-(void)connectionStateChanged:(id)arg0 connection:(int)arg1 dataConnectionStatusInfo:(id)arg2 ;
-(void)currentCellularSignalStrength:(*int)arg0 signalStrength:(*int)arg1 signalGrade:(*int)arg2 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)dealloc;
-(void)preferredDataSimChanged:(id)arg0 ;
-(void)processCTConnectionStateChangeNotification:(id)arg0 connectionStatus:(id)arg1 ;
-(void)registerCellularDataStatusNotification:(BOOL)arg0 ;
-(void)removeCellularLinkDelegate:(id)arg0 ;
-(void)removePacketNotificationFilter;
-(void)reset;
-(void)setRemoteDeviceVersion:(unsigned int)arg0 ;
-(void)updateProtocolQualityOfService:(BOOL)arg0 localAddress:(struct sockaddr *)arg1 ;


@end


#endif