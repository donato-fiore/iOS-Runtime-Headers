// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCBLEPAIRINGPROVIDERINTERNAL_H
#define ACCBLEPAIRINGPROVIDERINTERNAL_H

@class NSMutableDictionary, NSLock, NSString, NSXPCConnection;
@protocol ACCBLEPairingXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface ACCBLEPairingProviderInternal : NSObject

@property (nonatomic) int accDetectToken; // ivar: _accDetectToken
@property (retain, nonatomic) NSMutableDictionary *accessories; // ivar: _accessories
@property (retain, nonatomic) NSMutableDictionary *delegateList; // ivar: _delegateList
@property (retain, nonatomic) NSLock *delegateListLock; // ivar: _delegateListLock
@property (nonatomic) int lastScorpiusDetectType; // ivar: _lastScorpiusDetectType
@property (retain, nonatomic) NSString *providerUID; // ivar: _providerUID
@property (retain, nonatomic) NSObject<ACCBLEPairingXPCServerProtocol> *remoteObject; // ivar: _remoteObject
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection


+(id)SharedInstance;
-(id)initSharedInstance;
-(int)getAccDetectType:(int)arg0 ;
-(void)accessoryBLEPairingAttached:(id)arg0 blePairingUUID:(id)arg1 accInfoDict:(id)arg2 supportedPairTypes:(id)arg3 ;
-(void)accessoryBLEPairingDataUpdate:(id)arg0 blePairingUUID:(id)arg1 pairType:(unsigned char)arg2 pairData:(id)arg3 ;
-(void)accessoryBLEPairingDetachAll;
-(void)accessoryBLEPairingDetached:(id)arg0 blePairingUUID:(id)arg1 ;
-(void)accessoryBLEPairingFinished:(id)arg0 blePairingUUID:(id)arg1 ;
-(void)accessoryBLEPairingInfoUpdate:(id)arg0 blePairingUUID:(id)arg1 pairType:(unsigned char)arg2 pairInfoList:(id)arg3 ;
-(void)accessoryBLEPairingStateUpdate:(id)arg0 blePairingUUID:(id)arg1 validMask:(unsigned int)arg2 btRadioOn:(BOOL)arg3 pairingState:(int)arg4 pairingModeOn:(BOOL)arg5 ;
-(void)connectToServer;
-(void)dealloc;
-(void)devicePairingData:(id)arg0 blePairingUUID:(id)arg1 pairType:(int)arg2 pairData:(id)arg3 ;
-(void)deviceStateUpdate:(id)arg0 blePairingUUID:(id)arg1 bRadioOn:(BOOL)arg2 pairState:(int)arg3 bPairModeOn:(BOOL)arg4 ;
-(void)deviceUpdatePairingInfo:(id)arg0 blePairingUUID:(id)arg1 pairType:(int)arg2 pairInfo:(id)arg3 ;
-(void)registerDelegate:(id)arg0 provider:(id)arg1 forUUID:(id)arg2 ;
-(void)startBLEUpdates:(id)arg0 blePairingUUID:(id)arg1 pairType:(int)arg2 bRadioUpdatesOn:(BOOL)arg3 bPairInfoUpdatesOn:(BOOL)arg4 ;
-(void)stopBLEUpdates:(id)arg0 blePairingUUID:(id)arg1 ;
-(void)unregisterDelegateForUUID:(id)arg0 ;


@end


#endif