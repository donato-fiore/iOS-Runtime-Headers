// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPSHAREDTRIPSERVER_H
#define MSPSHAREDTRIPSERVER_H

@class NSXPCListener, NSMutableSet, NSMutableDictionary, NSMapTable, NSString;
@protocol NSXPCListenerDelegate, MSPReceiverETAControllerDelegate, MSPSenderETAControllerDelegate, MSPSharedTripAvailabiltyDelegate, MSPSharedTripXPCServer;

#import <Foundation/Foundation.h>

#import "MSPSenderETAController.h"
#import "MSPReceiverETAController.h"
#import "MSPSharedTripRelay.h"

@interface MSPSharedTripServer : NSObject <NSXPCListenerDelegate, MSPReceiverETAControllerDelegate, MSPSenderETAControllerDelegate, MSPSharedTripAvailabiltyDelegate, MSPSharedTripXPCServer>

 {
    MSPSenderETAController *_sendingController;
    MSPReceiverETAController *_receivingController;
    MSPSharedTripRelay *_idsRelay;
    NSXPCListener *_listener;
    NSMutableSet *_connections;
    NSMutableDictionary *_connectionSubscriptionsByTripID;
    NSMapTable *_peersByConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)migrateIfNeeded;
-(BOOL)_connectionCanControlReceiving:(id)arg0 ;
-(BOOL)_connectionCanControlSharing:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_subscribedConnectionsForTripID:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)connections;
-(id)init;
-(void)_purgeSubscriptionsForConnection:(id)arg0 ;
-(void)_setNotificationCenter:(id)arg0 ;
-(void)blockSharedTrip:(id)arg0 ;
-(void)checkinWithCompletion:(id)arg0 ;
-(void)cleanConnections;
-(void)clearBlockedTripIdentifiers;
-(void)createControllers;
-(void)createXPCListener;
-(void)dealloc;
-(void)etaController:(id)arg0 didUpdateDestinationForSharedTrip:(id)arg1 ;
-(void)etaController:(id)arg0 didUpdateETAForSharedTrip:(id)arg1 ;
-(void)etaController:(id)arg0 didUpdateReachedDestinationForSharedTrip:(id)arg1 ;
-(void)etaController:(id)arg0 didUpdateRouteForSharedTrip:(id)arg1 ;
-(void)etaController:(id)arg0 sharedTripDidBecomeAvailable:(id)arg1 ;
-(void)etaController:(id)arg0 sharedTripDidBecomeUnavailable:(id)arg1 ;
-(void)etaController:(id)arg0 sharedTripDidClose:(id)arg1 ;
-(void)fetchActiveHandlesWithCompletion:(id)arg0 ;
-(void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(id)arg0 ;
-(void)fetchSharedTripsWithCompletion:(id)arg0 ;
-(void)fetchSharingIdentityWithCompletion:(id)arg0 ;
-(void)invalidateActiveHandlesForSenderController:(id)arg0 ;
-(void)purgeExpiredBlockedTripIdentifiers;
-(void)relay:(id)arg0 accountStatusChanged:(BOOL)arg1 ;
-(void)reportUserConfirmationOfSharingIdentity:(id)arg0 completion:(id)arg1 ;
-(void)senderController:(id)arg0 didInvalidateSharedTripWithError:(id)arg1 ;
-(void)senderController:(id)arg0 didStartSharingWithGroupIdentifier:(id)arg1 ;
-(void)startSharingTripWithContacts:(id)arg0 completion:(id)arg1 ;
-(void)startSharingTripWithMessagesContacts:(id)arg0 completion:(id)arg1 ;
-(void)startSharingTripWithMessagesGroup:(id)arg0 completion:(id)arg1 ;
-(void)stopSharingTrip;
-(void)stopSharingTripWithContacts:(id)arg0 ;
-(void)stopSharingTripWithMessagesGroup:(id)arg0 ;
-(void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif