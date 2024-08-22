// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSDAEMONCONNECTIONINTERFACE_H
#define AMSDAEMONCONNECTIONINTERFACE_H


#import <Foundation/Foundation.h>


@interface AMSDaemonConnectionInterface : NSObject



+(id)_cookieServiceInterface;
+(id)_deviceMessengerClientInterface;
+(id)_deviceMessengerServiceInterface;
+(id)_fraudReportServiceInterface;
+(id)_purchaseServiceInterface;
+(id)_securityClientInterface;
+(id)_securityServiceInterface;
+(id)interface;
+(void)_configureURLPresentationDelegateClasses:(id)arg0 ;
+(void)_setUpSecurityInterfaceApplePayClassic:(id)arg0 ;
+(void)_setUpSecurityInterfaceBiometricSelectors:(id)arg0 ;
+(void)_setUpSecurityInterfaceHandleResponseSelector:(id)arg0 ;
+(void)_setUpSecurityInterfaceSignedHeadersSelector:(id)arg0 ;
+(void)_setUpSecurityInterfaceSilentEnrollmentSelector:(id)arg0 ;


@end


#endif