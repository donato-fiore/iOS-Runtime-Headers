// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPRECOVERYKEYSECRETVALIDATORPROXYIMPL_H
#define CDPRECOVERYKEYSECRETVALIDATORPROXYIMPL_H

@protocol CDPRemoteDeviceSecretValidatorProtocol;

#import <Foundation/Foundation.h>


@interface CDPRecoveryKeySecretValidatorProxyImpl : NSObject <CDPRemoteDeviceSecretValidatorProtocol>

 {
    id<CDPRemoteDeviceSecretValidatorProtocol> *_validator;
}


@property (nonatomic) NSUInteger supportedEscapeOfferMask; // ivar: supportedEscapeOfferMask


-(id)initWithRemoteObject:(id)arg0 ;
-(void)approveFromAnotherDeviceWithCompletion:(id)arg0 ;
-(void)cancelApproveFromAnotherDevice;
-(void)cancelValidationWithError:(id)arg0 ;
-(void)resetAccountCDPState;
-(void)supportedEscapeOfferMaskCompletion:(id)arg0 ;
-(void)validateCustodianRecoveryInfo:(id)arg0 withCompletion:(id)arg1 ;
-(void)validateRecoveryKey:(id)arg0 withCompletion:(id)arg1 ;
-(void)validateSecret:(id)arg0 devices:(id)arg1 type:(NSUInteger)arg2 withCompletion:(id)arg3 ;


@end


#endif