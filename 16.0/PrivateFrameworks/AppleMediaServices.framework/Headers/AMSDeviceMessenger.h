// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSDEVICEMESSENGER_H
#define AMSDEVICEMESSENGER_H

@class NSString, NSMutableArray;
@protocol AMSDeviceMessengerClientInterface, AMSDeviceMessengerServiceInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSDaemonConnection.h"

@interface AMSDeviceMessenger : NSObject <AMSDeviceMessengerClientInterface>

 {
    id<AMSDeviceMessengerServiceInterface> *_proxyObject;
}


@property (retain, nonatomic) AMSDaemonConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *updateHandlers; // ivar: _updateHandlers


-(id)_getProxyObject;
-(id)_identifierFromDialogRequest:(id)arg0 ;
-(id)clearDialog:(id)arg0 ;
-(id)dialogsWithFilter:(id)arg0 ;
-(id)init;
-(id)sendDialog:(id)arg0 account:(id)arg1 ;
-(void)_sendDelegateUpdateForMessage:(id)arg0 ;
-(void)addUpdateHandlerForType:(NSInteger)arg0 filter:(id)arg1 handler:(id)arg2 ;
-(void)deviceMessengerDidClearMessage:(id)arg0 ;
-(void)deviceMessengerDidReceiveMessage:(id)arg0 ;
-(void)deviceMessengerDidReceiveReply:(id)arg0 ;
-(void)deviceMessengerDidUpdateDevices;


@end


#endif