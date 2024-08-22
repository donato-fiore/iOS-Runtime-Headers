// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTREMOTEGIZMOCLIENT_H
#define BLTREMOTEGIZMOCLIENT_H

@class NSMutableDictionary, NSString;
@protocol BLTBulletinSendQueueDelegate, BLTGizmoClient, BLTCompanionServer;


#import "BLTRemoteObject.h"
#import "BLTBulletinSendQueuePassthrough.h"
#import "BLTGizmoLegacyMap.h"

@interface BLTRemoteGizmoClient : BLTRemoteObject <BLTBulletinSendQueueDelegate, BLTGizmoClient>

 {
    BLTBulletinSendQueuePassthrough *_bulletinSendQueue;
    NSMutableDictionary *_gizmoToPhonePublisherBulletinIDMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BLTGizmoLegacyMap *gizmoLegacyMap; // ivar: _gizmoLegacyMap
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<BLTCompanionServer> *server; // ivar: _server
@property (readonly) Class superclass;


-(id)init;
-(void)_handleSyncStateChanged:(id)arg0 ;
-(void)_pingPairedDevice;
-(void)_pingPairedDeviceWithRetry:(NSUInteger)arg0 ;
-(void)addBulletin:(id)arg0 playLightsAndSirens:(BOOL)arg1 ;
-(void)addBulletin:(id)arg0 playLightsAndSirens:(BOOL)arg1 updateType:(NSUInteger)arg2 transmissionDate:(id)arg3 receptionDate:(id)arg4 ;
-(void)addBulletin:(id)arg0 playLightsAndSirens:(BOOL)arg1 updateType:(NSUInteger)arg2 withTimeout:(id)arg3 completion:(id)arg4 ;
-(void)addBulletinSummary:(id)arg0 ;
-(void)cancelBulletinWithPublisherMatchID:(id)arg0 universalSectionID:(id)arg1 feed:(NSUInteger)arg2 transmissionDate:(id)arg3 receptionDate:(id)arg4 ;
-(void)cancelBulletinWithPublisherMatchID:(id)arg0 universalSectionID:(id)arg1 feed:(NSUInteger)arg2 withTimeout:(id)arg3 ;
-(void)dealloc;
-(void)handleAcknowledgeActionRequest:(id)arg0 ;
-(void)handleDidPlayLightsAndSirensReply:(id)arg0 ;
-(void)handleDismissActionRequest:(id)arg0 ;
-(void)handleFileURL:(id)arg0 extraMetadata:(id)arg1 ;
-(void)handleHandlePairedDeviceReady:(id)arg0 ;
-(void)handleRemoveBulletinRequest:(id)arg0 ;
-(void)handleShouldSuppressLightsAndSirensNowRequest:(id)arg0 ;
-(void)handleSnoozeActionRequest:(id)arg0 ;
-(void)handleSupplementaryActionRequest:(id)arg0 ;
-(void)handleWillSendLightsAndSirensRequest:(id)arg0 ;
-(void)queuePendingRequests;
-(void)registerProtobufHandlers;
-(void)removeBulletinWithPublisherBulletinID:(id)arg0 recordID:(id)arg1 sectionID:(id)arg2 ;
-(void)removeBulletinWithPublisherBulletinID:(id)arg0 recordID:(id)arg1 sectionID:(id)arg2 withTimeout:(id)arg3 ;
-(void)setLastKnownConnectionStatus:(NSUInteger)arg0 ;
-(void)updateBulletinList:(id)arg0 ;


@end


#endif