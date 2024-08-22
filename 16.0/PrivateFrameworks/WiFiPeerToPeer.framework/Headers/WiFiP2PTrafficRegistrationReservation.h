// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIP2PTRAFFICREGISTRATIONRESERVATION_H
#define WIFIP2PTRAFFICREGISTRATIONRESERVATION_H

@class NSString;
@protocol WiFiP2PXPCConnectionDelegate;

#import <Foundation/Foundation.h>

#import "WiFiP2PXPCConnection.h"

@interface WiFiP2PTrafficRegistrationReservation : NSObject <WiFiP2PXPCConnectionDelegate>

 {
    WiFiP2PXPCConnection *_xpcConnection;
    NSUInteger _enabledCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *service; // ivar: _service
@property (nonatomic) BOOL showsUIAlertOnError; // ivar: _showsUIAlertOnError
@property (readonly) Class superclass;


-(id)initForService:(id)arg0 ;
-(id)remoteObjectInterface;
-(id)trafficRegistrationConfiguration;
-(void)activateWithCompletion:(id)arg0 ;
-(void)handleConnectionEstablishedWithProxy:(id)arg0 ;
-(void)invalidate;
-(void)startConnectionUsingProxy:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif