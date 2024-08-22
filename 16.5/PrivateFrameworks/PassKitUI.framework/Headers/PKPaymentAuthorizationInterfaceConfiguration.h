// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONINTERFACECONFIGURATION_H
#define PKPAYMENTAUTHORIZATIONINTERFACECONFIGURATION_H

@class NSString;
@protocol PKPaymentAuthorizationHostProtocol, PKPaymentAuthorizationPresenter;

#import <Foundation/Foundation.h>


@interface PKPaymentAuthorizationInterfaceConfiguration : NSObject

@property (readonly, nonatomic) NSObject<PKPaymentAuthorizationHostProtocol> *host; // ivar: _host
@property (readonly, nonatomic) NSObject<PKPaymentAuthorizationPresenter> *presenter; // ivar: _presenter
@property (readonly, nonatomic) NSString *relevantPassID; // ivar: _relevantPassID
@property (readonly, nonatomic) NSUInteger supportedOrientations; // ivar: _supportedOrientations


-(id)initWithRelevantPassID:(id)arg0 presenter:(id)arg1 host:(id)arg2 supportedOrientations:(NSUInteger)arg3 ;


@end


#endif