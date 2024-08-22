// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRPROXYAUTHOPERATION_H
#define TRPROXYAUTHOPERATION_H

@class ACAccount, UIViewController, NSSet;


#import "TROperation.h"

@interface TRProxyAuthOperation : TROperation

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (nonatomic) BOOL shouldUseAIDA; // ivar: _shouldUseAIDA
@property (retain, nonatomic) NSSet *targetedServices; // ivar: _targetedServices


+(NSInteger)_appleIDServiceTypeForTRAccountServices:(id)arg0 ;
+(id)_logStringForAppleIDServiceType:(NSInteger)arg0 ;
-(void)_handleProxyAuthenticationResponse:(id)arg0 ;
-(void)_handleProxyDeviceResponse:(id)arg0 ;
-(void)_performProxyAuthenticationWithProxiedDevice:(id)arg0 ;
-(void)_sendProxyDeviceRequest;
-(void)execute;


@end


#endif