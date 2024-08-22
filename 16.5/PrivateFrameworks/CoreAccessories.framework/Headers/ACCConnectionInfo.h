// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCCONNECTIONINFO_H
#define ACCCONNECTIONINFO_H

@class NSDictionary, NSMutableDictionary, NSLock, NSString, NSXPCConnection;
@protocol ACCConnectionInfoConfigStreamDelegateProtocol, ACCConnectionInfoPrivateDelegateProtocol, ACCConnectionInfoXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface ACCConnectionInfo : NSObject

@property (readonly) NSDictionary *accessoryFilterDictionary; // ivar: _accessoryFilterDictionary
@property (weak, nonatomic) NSObject<ACCConnectionInfoConfigStreamDelegateProtocol> *configStreamDelegate; // ivar: _configStreamDelegate
@property (copy, nonatomic) id *configStreamGetResponseHandler; // ivar: _configStreamGetResponseHandler
@property (retain, nonatomic) NSMutableDictionary *connectionList; // ivar: _connectionList
@property (weak, nonatomic) NSObject<ACCConnectionInfoPrivateDelegateProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *endpointList; // ivar: _endpointList
@property (retain, nonatomic) NSLock *listLock; // ivar: _listLock
@property (retain, nonatomic) NSString *providerUID; // ivar: _providerUID
@property (retain, nonatomic) NSObject<ACCConnectionInfoXPCServerProtocol> *remoteObject; // ivar: _remoteObject
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (retain, nonatomic) NSLock *serverConnectionLock; // ivar: _serverConnectionLock


+(id)accessoryDictionaryForLogging:(id)arg0 ;
+(id)copyLocalizedAccessoryName:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)configStreamCategoriesRequest:(id)arg0 connection:(id)arg1 withReply:(id)arg2 ;
-(BOOL)configStreamPropertyRequest:(unsigned char)arg0 forCategory:(unsigned short)arg1 forEndpoint:(id)arg2 connection:(id)arg3 withReply:(id)arg4 ;
-(BOOL)registerDelegate:(id)arg0 ;
-(BOOL)registerDelegate:(id)arg0 withFilter:(id)arg1 ;
-(id)accessoryInfoForConnectionSync:(id)arg0 ;
-(id)accessoryInfoForEndpointSync:(id)arg0 connection:(id)arg1 ;
-(id)accessoryPropertySync:(id)arg0 forConnection:(id)arg1 ;
-(id)accessoryPropertySync:(id)arg0 forEndpoint:(id)arg1 connection:(id)arg2 ;
-(id)copyLocalizedAccessoryNameFromDaemon:(id)arg0 ;
-(id)init;
-(int)accessoryConnectionType:(id)arg0 ;
-(int)accessoryEndpointProtocolType:(id)arg0 connection:(id)arg1 ;
-(int)accessoryEndpointTransportType:(id)arg0 connection:(id)arg1 ;
-(int)getInterceptCountForEndpoint:(id)arg0 connection:(id)arg1 ;
-(void)accessoryConnectionAttached:(id)arg0 type:(int)arg1 info:(id)arg2 properties:(id)arg3 ;
-(void)accessoryConnectionDetached:(id)arg0 ;
-(void)accessoryConnectionInfoPropertyChanged:(id)arg0 properties:(id)arg1 ;
-(void)accessoryEndpointAttached:(id)arg0 transportType:(int)arg1 protocol:(int)arg2 properties:(id)arg3 forConnection:(id)arg4 ;
-(void)accessoryEndpointDetached:(id)arg0 forConnection:(id)arg1 ;
-(void)accessoryEndpointInfoPropertyChanged:(id)arg0 properties:(id)arg1 forConnection:(id)arg2 ;
-(void)accessoryEndpointUpdate:(id)arg0 protocol:(int)arg1 properties:(id)arg2 forConnection:(id)arg3 ;
-(void)accessoryEndpointsForConnection:(id)arg0 withReply:(id)arg1 ;
-(void)accessoryInfoForConnection:(id)arg0 withReply:(id)arg1 ;
-(void)accessoryInfoForEndpoint:(id)arg0 connection:(id)arg1 withReply:(id)arg2 ;
-(void)accessoryProperty:(id)arg0 forConnection:(id)arg1 withReply:(id)arg2 ;
-(void)accessoryProperty:(id)arg0 forEndpoint:(id)arg1 connection:(id)arg2 withReply:(id)arg3 ;
-(void)beginUserKeyErase:(id)arg0 withReply:(id)arg1 ;
-(void)beginVendorKeyErase:(id)arg0 withReply:(id)arg1 ;
-(void)cancelUserKeyErase:(id)arg0 withReply:(id)arg1 ;
-(void)cancelVendorKeyErase:(id)arg0 withReply:(id)arg1 ;
-(void)configStreamCategoriesResponse:(id)arg0 forEndpoint:(id)arg1 connection:(id)arg2 success:(BOOL)arg3 ;
-(void)configStreamCategoryListReady:(id)arg0 connection:(id)arg1 ;
-(void)configStreamPropertyResponse:(unsigned char)arg0 forCategory:(unsigned short)arg1 forEndpoint:(id)arg2 connection:(id)arg3 value:(id)arg4 success:(BOOL)arg5 ;
-(void)configStreamPropertySetValue:(id)arg0 forProperty:(unsigned char)arg1 forCategory:(unsigned short)arg2 forEndpoint:(id)arg3 connection:(id)arg4 ;
-(void)connectToServer;
-(void)continueUserKeyErase:(id)arg0 withSignature:(id)arg1 andAccessoryNonce:(id)arg2 forEndpoint:(id)arg3 withReply:(id)arg4 ;
-(void)continueVendorKeyErase:(id)arg0 withSignature:(id)arg1 andAccessoryNonce:(id)arg2 forEndpoint:(id)arg3 withReply:(id)arg4 ;
-(void)copyUserPrivateKey:(id)arg0 withReply:(id)arg1 ;
-(void)dealloc;
-(void)getAccessoryUserName:(id)arg0 withReply:(id)arg1 ;
-(void)getPairingStatus:(id)arg0 withReply:(id)arg1 ;
-(void)getPrivateNVMKeyValues:(id)arg0 forEndpoint:(id)arg1 withReply:(id)arg2 ;
-(void)getPublicNVMKeyValues:(id)arg0 forEndpoint:(id)arg1 withReply:(id)arg2 ;
-(void)handleInterceptData:(id)arg0 forEndpoint:(id)arg1 connection:(id)arg2 ;
-(void)interceptIncomingNTimes:(int)arg0 forEndpoint:(id)arg1 connection:(id)arg2 ;
-(void)notifyDelegateOfServerDisconnectAndCleanup;
-(void)provisionAccessoryForFindMy:(id)arg0 withReply:(id)arg1 ;
-(void)resetPairingInformation:(id)arg0 withReply:(id)arg1 ;
-(void)sendData:(id)arg0 forEndpoint:(id)arg1 connection:(id)arg2 ;
-(void)setAccessoryUserName:(id)arg0 forEndpoint:(id)arg1 withReply:(id)arg2 ;
-(void)setPrivateNVMKeyValues:(id)arg0 forEndpoint:(id)arg1 withReply:(id)arg2 ;
-(void)setPublicNVMKeyValues:(id)arg0 forEndpoint:(id)arg1 withReply:(id)arg2 ;


@end


#endif