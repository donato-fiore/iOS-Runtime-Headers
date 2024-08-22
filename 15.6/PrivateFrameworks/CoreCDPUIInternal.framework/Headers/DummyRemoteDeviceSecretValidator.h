// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DUMMYREMOTEDEVICESECRETVALIDATOR_H
#define DUMMYREMOTEDEVICESECRETVALIDATOR_H

@class CDPRemoteDeviceSecretValidator, NSString;



@interface DummyRemoteDeviceSecretValidator : CDPRemoteDeviceSecretValidator {
    NSString *_expectedString;
    NSUInteger _failedAttempts;
}




-(NSUInteger)supportedEscapeOfferMask;
-(id)initWithExpectedSecret:(id)arg0 ;
-(void)approveFromAnotherDeviceWithCompletion:(id)arg0 ;
-(void)supportedEscapeOfferMaskCompletion:(id)arg0 ;
-(void)validateRecoveryKey:(id)arg0 withCompletion:(id)arg1 ;
-(void)validateSecret:(id)arg0 devices:(id)arg1 type:(NSUInteger)arg2 withCompletion:(id)arg3 ;


@end


#endif