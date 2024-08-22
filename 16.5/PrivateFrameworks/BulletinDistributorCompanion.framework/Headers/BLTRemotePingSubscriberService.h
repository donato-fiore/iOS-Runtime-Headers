// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTREMOTEPINGSUBSCRIBERSERVICE_H
#define BLTREMOTEPINGSUBSCRIBERSERVICE_H

@class NSXPCConnection, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, BLTPingService, BLTPingSubscribing;

#import <Foundation/Foundation.h>


@interface BLTRemotePingSubscriberService : NSObject <NSXPCListenerDelegate, BLTPingService>



@property (retain, nonatomic) NSXPCConnection *connectionFromServer; // ivar: _connectionFromServer
@property (retain, nonatomic) NSXPCConnection *connectionToServer; // ivar: _connectionToServer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLTPingSubscribing> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (copy, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithMachServiceName:(id)arg0 ;
-(void)_connect;
-(void)_createXPCService;
-(void)dealloc;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg0 completion:(id)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg0 subsectionIDs:(id)arg1 completion:(id)arg2 ;
-(void)pingWithBulletin:(id)arg0 ;
-(void)pingWithBulletin:(id)arg0 ack:(id)arg1 ;
-(void)pingWithRecordID:(id)arg0 forSectionID:(id)arg1 ;
-(void)pingWithRecordID:(id)arg0 forSectionID:(id)arg1 ack:(id)arg2 ;
-(void)sendBulletinSummary:(id)arg0 ;
-(void)subscribeToSectionID:(id)arg0 forFullBulletins:(BOOL)arg1 withAck:(BOOL)arg2 ackAllowedOnLocalConnection:(BOOL)arg3 ;
-(void)subscribeWithMachServiceName:(id)arg0 ;
-(void)unsubscribeFromSectionID:(id)arg0 ;


@end


#endif