// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACCOOBBTPAIRINGPROVIDER_H
#define ACCOOBBTPAIRINGPROVIDER_H

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol ACCOOBBTPairingProviderProtocol, ACCOOBBTPairingXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface ACCOOBBTPairingProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *accessories; // ivar: _accessories
@property (weak, nonatomic) NSObject<ACCOOBBTPairingProviderProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *providerUID; // ivar: _providerUID
@property (retain, nonatomic) NSObject<ACCOOBBTPairingXPCServerProtocol> *remoteObject; // ivar: _remoteObject
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection


-(id)accessoryInfoDictionaryForLogging:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)accessoryOOBBTPairingAttached:(id)arg0 accInfoDict:(id)arg1 ;
-(void)accessoryOOBBTPairingBTAccessoryInfo:(id)arg0 oobBtPairingUID:(id)arg1 accessoryMacAddr:(id)arg2 deviceClass:(unsigned int)arg3 ;
-(void)accessoryOOBBTPairingCompletionStatus:(id)arg0 oobBtPairingUID:(id)arg1 accessoryMacAddr:(id)arg2 result:(unsigned char)arg3 ;
-(void)accessoryOOBBTPairingDetached:(id)arg0 ;
-(void)connectToServer;
-(void)dealloc;
-(void)legacyConnectionIDForAccessoryUID:(id)arg0 connectionID:(unsigned int)arg1 ;
-(void)linkKeyInfo:(id)arg0 oobBtPairingUID:(id)arg1 linkKey:(id)arg2 deviceMacAddr:(id)arg3 ;
-(void)requestLegacyConnectionIDForAccessoryUID:(id)arg0 ;
-(void)startOOBBTPairing:(id)arg0 ;
-(void)stopOOBBTPairing:(id)arg0 ;


@end


#endif