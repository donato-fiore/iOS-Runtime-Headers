// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEDXPCCONNECTOR_H
#define DEDXPCCONNECTOR_H

@class NSMutableDictionary, NSArray, NSString, NSXPCConnection, NSXPCListener;
@protocol NSXPCListenerDelegate, DEDXPCProtocol, OS_os_log, DEDXPCConnectorDelegate;

#import <Foundation/Foundation.h>


@interface DEDXPCConnector : NSObject <NSXPCListenerDelegate>



@property (retain) NSMutableDictionary *appConnections; // ivar: _appConnections
@property (readonly) NSArray *clientConnections;
@property NSUInteger connType; // ivar: _connType
@property NSUInteger connectionRestartCount; // ivar: _connectionRestartCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSXPCConnection *diagnosticextensionsdConnection; // ivar: _diagnosticextensionsdConnection
@property (readonly) NSObject<DEDXPCProtocol> *diagnosticextensionsdXPCInterface;
@property (readonly) NSUInteger hash;
@property BOOL isDaemon; // ivar: _isDaemon
@property (retain) NSXPCListener *listener; // ivar: _listener
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (weak) NSObject<DEDXPCConnectorDelegate> *xpcConnectorDelegate; // ivar: _xpcConnectorDelegate


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)validateConnection:(id)arg0 ;
-(id)_connectionForPid:(id)arg0 ;
-(id)_whitelistedXPCInterface;
-(id)clientXPCInterfaceFromInbound:(id)arg0 ;
-(id)connectionWithEndpoint:(id)arg0 forMachService:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)remoteXPCObjectForApplicationPid:(id)arg0 ;
-(void)_initializeDiagnosticextensionsdConnection;
-(void)_releaseAppConnectionWithPid:(int)arg0 ;
-(void)_storeAppConnection:(id)arg0 ;
-(void)configureConnectionType:(NSUInteger)arg0 ;
-(void)configureDaemonMode;
-(void)start;
-(void)startForApp;
-(void)startForDaemon;


@end


#endif