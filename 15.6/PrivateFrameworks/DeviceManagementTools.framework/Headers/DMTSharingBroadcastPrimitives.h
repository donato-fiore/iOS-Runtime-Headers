// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMTSHARINGBROADCASTPRIMITIVES_H
#define DMTSHARINGBROADCASTPRIMITIVES_H

@class NSString, NSMutableArray, CATSharingDevice, SFService;
@protocol CATSharingBroadcastPrimitives, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DMTSharingBroadcastPrimitives : NSObject <CATSharingBroadcastPrimitives>



@property (nonatomic, getter=isActivated) BOOL activated; // ivar: _activated
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *broadcastCallbackQueue; // ivar: _broadcastCallbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *dismissPinHandler; // ivar: _dismissPinHandler
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy) id *messageReceivedHandler; // ivar: _messageReceivedHandler
@property (nonatomic, getter=isPaired) BOOL paired; // ivar: _paired
@property (readonly, nonatomic) NSMutableArray *receivedObjectQueue; // ivar: _receivedObjectQueue
@property (retain, nonatomic) CATSharingDevice *remoteDevice; // ivar: _remoteDevice
@property (copy) id *sessionPairedHandler; // ivar: _sessionPairedHandler
@property (readonly, nonatomic) SFService *sharingService; // ivar: _sharingService
@property (copy) id *showPinHandler; // ivar: _showPinHandler
@property (readonly) Class superclass;


-(id)initWithLoggingIdentifier:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)addDependencyHandlers;
-(void)deactivate;
-(void)invalidateWithError:(id)arg0 ;
-(void)removeDependencyHandlers:(BOOL)arg0 ;
-(void)sendMessageToPairedDevice:(id)arg0 ;
-(void)serviceReceivedObjectQueue;
-(void)updateRemoteDeviceWithSession:(id)arg0 ;


@end


#endif