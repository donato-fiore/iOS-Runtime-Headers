// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DDUIRAPPORTPAIRINGTRANSPORT_H
#define _DDUIRAPPORTPAIRINGTRANSPORT_H

@class NSArray, RPCompanionLinkClient, NSString, RPClient, NSMapTable;
@protocol DDUIEndpointPairingBrowsingTransport, DDUIEndpointPairingListeningTransport;

#import <Foundation/Foundation.h>


@interface _DDUIRapportPairingTransport : NSObject <DDUIEndpointPairingBrowsingTransport, DDUIEndpointPairingListeningTransport>



@property (readonly, nonatomic) NSArray *availableDevices;
@property (copy, nonatomic) id *availableDevicesChangedHandler; // ivar: _availableDevicesChangedHandler
@property (retain, nonatomic) RPCompanionLinkClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL listeningForResponses; // ivar: _listeningForResponses
@property (retain, nonatomic) NSArray *previousAvailableDevices; // ivar: _previousAvailableDevices
@property (retain, nonatomic) RPClient *rpClient; // ivar: _rpClient
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMapTable *transportSessionByUUID; // ivar: _transportSessionByUUID
@property (nonatomic) unsigned int wantedDeviceTypes; // ivar: _wantedDeviceTypes


-(id)initWithMode:(NSUInteger)arg0 ;
-(id)initWithMode:(NSUInteger)arg0 companionLinkClient:(id)arg1 ;
-(id)sessionForDevice:(id)arg0 bundleID:(id)arg1 serviceIdentifier:(id)arg2 error:(*id)arg3 ;
-(void)_setupListeningForResponseMessagesIfNeeded;
-(void)activateForDeviceTypes:(unsigned int)arg0 withCompletion:(id)arg1 ;
-(void)createListenerMappingForDevice:(id)arg0 forServiceIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;
-(void)setupListeningForSessionsWithHandler:(id)arg0 ;
-(void)shouldReauthenticateDevice:(id)arg0 forServiceIdentifier:(id)arg1 completion:(id)arg2 ;


@end


#endif