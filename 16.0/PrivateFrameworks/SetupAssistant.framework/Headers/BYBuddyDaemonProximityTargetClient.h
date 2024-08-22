// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BYBUDDYDAEMONPROXIMITYTARGETCLIENT_H
#define BYBUDDYDAEMONPROXIMITYTARGETCLIENT_H

@class NSXPCConnection, NSString;
@protocol BYBuddyDaemonProximityTargetProtocol;

#import <Foundation/Foundation.h>


@interface BYBuddyDaemonProximityTargetClient : NSObject <BYBuddyDaemonProximityTargetProtocol>



@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<BYBuddyDaemonProximityTargetProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)proximityTargetClientInterface;
-(id)fileTransferSessionTemplate;
-(id)init;
-(void)beginAdvertisingProximitySetup;
-(void)connectToDaemon;
-(void)dismissProximityPinCode;
-(void)displayProximityPinCode:(id)arg0 visual:(BOOL)arg1 ;
-(void)endAdvertisingProximitySetup;
-(void)endDeviceToDeviceMigration;
-(void)endPairing;
-(void)hasConnection:(id)arg0 ;
-(void)proximititySetupCompleted:(id)arg0 ;
-(void)proximityConnectionInitiated;
-(void)proximityConnectionPreparing:(id)arg0 ;
-(void)proximityConnectionReconnected;
-(void)proximityConnectionTerminated;
-(void)receivedLanguages:(id)arg0 locale:(id)arg1 model:(id)arg2 deviceClass:(id)arg3 accessibilitySettings:(id)arg4 ;
-(void)resumeProximitySetup:(id)arg0 ;
-(void)sendData:(id)arg0 ;
-(void)showMigrationInterfaceOnSource;
-(void)storeHandshake:(id)arg0 ;
-(void)storeInformation:(id)arg0 ;
-(void)suspendConnectionForSoftwareUpdate:(id)arg0 ;


@end


#endif