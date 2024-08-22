// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCTRANSPORTPLUGIN_H
#define ACCTRANSPORTPLUGIN_H

@class NSMutableSet, NSMutableDictionary, NSString;
@protocol ACCTransportPluginManagerProtocol;

#import <Foundation/Foundation.h>


@interface ACCTransportPlugin : NSObject

@property (retain, nonatomic) NSMutableSet *activeConnectionUUIDs; // ivar: _activeConnectionUUIDs
@property (retain, nonatomic) NSMutableDictionary *connectionPropertyChangeHandlers; // ivar: _connectionPropertyChangeHandlers
@property (weak, nonatomic) NSObject<ACCTransportPluginManagerProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *endpointPropertyChangeHandlers; // ivar: _endpointPropertyChangeHandlers
@property (readonly, nonatomic) NSString *pluginClassAndName;
@property (readonly, nonatomic) NSString *pluginName; // ivar: _pluginName


-(BOOL)destroyConnectionWithUUID:(id)arg0 ;
-(BOOL)destroyEndpointWithUUID:(id)arg0 ;
-(BOOL)processIncomingData:(id)arg0 forEndpointWithUUID:(id)arg1 ;
-(BOOL)publishConnectionWithUUID:(id)arg0 ;
-(BOOL)routeOutgoingData:(id)arg0 forEndpointWithUUID:(id)arg1 connectionUUID:(id)arg2 ;
-(BOOL)sendOutgoingData:(id)arg0 forEndpointWithUUID:(id)arg1 connectionUUID:(id)arg2 ;
-(BOOL)setAccessoryInfo:(id)arg0 forEndpointWithUUID:(id)arg1 ;
-(BOOL)setAuthenticationStatus:(int)arg0 andCertificateData:(id)arg1 authCTA:(BOOL)arg2 forConnectionWithUUID:(id)arg3 ;
-(BOOL)setProperties:(id)arg0 forConnectionWithUUID:(id)arg1 ;
-(BOOL)setProperties:(id)arg0 forEndpointWithUUID:(id)arg1 ;
-(BOOL)setSupervisedTransportsRestricted:(BOOL)arg0 forConnectionWithUUID:(id)arg1 ;
-(id)allConnectionUUIDs;
-(id)allEndpointsUUIDs;
-(id)certificateCapabilitiesForConnectionWithUUID:(id)arg0 ;
-(id)certificateDataForConnectionWithUUID:(id)arg0 ;
-(id)certificateSerialForConnectionWithUUID:(id)arg0 ;
-(id)certificateSerialStringForConnectionWithUUID:(id)arg0 ;
-(id)connectionUUIDForEndpointWithUUID:(id)arg0 ;
-(id)createConnectionWithType:(int)arg0 andIdentifier:(id)arg1 ;
-(id)createEndpointWithTransportType:(int)arg0 andProtocol:(int)arg1 andIdentifier:(id)arg2 forConnectionWithUUID:(id)arg3 publishConnection:(BOOL)arg4 ;
-(id)endpointUUIDsForConnectionWithUUID:(id)arg0 ;
-(id)identifierForConnectionWithUUID:(id)arg0 ;
-(id)identifierForEndpointWithUUID:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)propertiesForConnectionWithUUID:(id)arg0 ;
-(id)propertiesForEndpointWithUUID:(id)arg0 ;
-(int)authStatusForConnectionWithUUID:(id)arg0 authType:(int)arg1 ;
-(int)connectionTypeForConnectionWithUUID:(id)arg0 ;
-(int)protocolForEndpointWithUUID:(id)arg0 ;
-(int)transportTypeForEndpointWithUUID:(id)arg0 ;
-(void)authStatusDidChangeHandler:(id)arg0 ;
-(void)connectionPropertiesDidChangeHandler:(id)arg0 ;
-(void)dealloc;
-(void)endpointPropertiesDidChangeHandler:(id)arg0 ;
-(void)initPlugin;
// -(void)setHandler:(id)arg0 forConnectionProperty:(unk)arg1  ;
// -(void)setHandler:(id)arg0 forEndpointProperty:(unk)arg1  ;
-(void)startPlugin;
-(void)startSafeConnectionTransaction;
-(void)stopPlugin;
-(void)stopSafeConnectionTransaction;


@end


#endif