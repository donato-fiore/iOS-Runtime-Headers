// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARSESSIONREQUESTHANDLERPROXY_H
#define CARSESSIONREQUESTHANDLERPROXY_H

@protocol CARSessionRequestService, CARSessionRequestHandling;

#import <Foundation/Foundation.h>


@interface CARSessionRequestHandlerProxy : NSObject <CARSessionRequestService>



@property (weak, nonatomic) NSObject<CARSessionRequestHandling> *requestHandler; // ivar: _requestHandler


-(void)service_cancelRequestsWithReply:(id)arg0 ;
-(void)service_prepareForRemovingWiFiUUID:(id)arg0 reply:(id)arg1 ;
-(void)service_startAdvertisingCarPlayControlForUSBWithReply:(id)arg0 ;
-(void)service_startAdvertisingCarPlayControlForWiFiUUID:(id)arg0 reply:(id)arg1 ;
-(void)service_startSessionWithHost:(id)arg0 reply:(id)arg1 ;
-(void)service_stoppedSessionWithHostIdentifier:(id)arg0 reply:(id)arg1 ;


@end


#endif