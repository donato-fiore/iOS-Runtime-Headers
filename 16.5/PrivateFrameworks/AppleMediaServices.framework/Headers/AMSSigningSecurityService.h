// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSIGNINGSECURITYSERVICE_H
#define AMSSIGNINGSECURITYSERVICE_H

@protocol AMSDServiceBrokerProtocol;

#import <Foundation/Foundation.h>


@interface AMSSigningSecurityService : NSObject

@property (readonly, nonatomic) NSObject<AMSDServiceBrokerProtocol> *serviceBroker; // ivar: _serviceBroker


-(id)_defaultSecurityServiceWithDelegate:(id)arg0 ;
-(id)_handleResponse:(id)arg0 bag:(id)arg1 securityServicePromise:(id)arg2 onDenied:(id)arg3 ;
-(id)_headersForRequest:(id)arg0 buyParams:(id)arg1 bag:(id)arg2 securityServicePromise:(id)arg3 onDenied:(id)arg4 ;
-(id)handleResponse:(id)arg0 bag:(id)arg1 ;
-(id)headersForRequest:(id)arg0 buyParams:(id)arg1 bag:(id)arg2 ;
-(id)init;
-(id)initWithServiceBroker:(id)arg0 ;
-(id)signatureForRequest:(id)arg0 ;
// -(void)_handleSecurityServicePromise:(id)arg0 onConnected:(id)arg1 onDenied:(unk)arg2 onError:(id)arg3  ;


@end


#endif