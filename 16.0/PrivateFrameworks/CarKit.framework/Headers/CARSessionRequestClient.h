// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CARSESSIONREQUESTCLIENT_H
#define CARSESSIONREQUESTCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface CARSessionRequestClient : NSObject

@property (retain, nonatomic) NSXPCConnection *serviceConnection; // ivar: _serviceConnection


-(void)cancelRequests;
-(void)dealloc;
-(void)prepareForRemovingWiFiUUID:(id)arg0 completion:(id)arg1 ;
-(void)startAdvertisingCarPlayControlForUSB;
-(void)startAdvertisingCarPlayControlForWiFiUUID:(id)arg0 ;
-(void)startSessionWithHost:(id)arg0 completion:(id)arg1 ;
-(void)stoppedSessionForHostIdentifier:(id)arg0 ;


@end


#endif