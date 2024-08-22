// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBIOMETRICSSIGNATURETASK_H
#define AMSBIOMETRICSSIGNATURETASK_H



#import "AMSTask.h"
#import "AMSBiometricsSignatureRequest.h"

@interface AMSBiometricsSignatureTask : AMSTask

@property (readonly, nonatomic) AMSBiometricsSignatureRequest *request; // ivar: _request


+(id)fetchDataToSignWithPublicKeyData:(id)arg0 challenge:(id)arg1 error:(*id)arg2 ;
+(id)fetchPublicKeyDataFromPrivateKey:(struct __SecKey *)arg0 error:(*id)arg1 ;
+(id)signDataWithPrivateKey:(struct __SecKey *)arg0 dataToSign:(id)arg1 error:(*id)arg2 ;
+(struct __SecKey *)copyPrivateKeyWithStyle:(NSUInteger)arg0 context:(id)arg1 account:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(BOOL)_performCardEnrollmentCheck:(*id)arg0 ;
-(id)_performSignatureInProcess;
-(id)_performSignatureOutOfProcess;
-(id)initWithRequest:(id)arg0 ;
-(id)performSignature;
-(id)signWithPrivateKey:(struct __SecKey *)arg0 error:(*id)arg1 ;
-(void)regenerateAttestationKeys;


@end


#endif