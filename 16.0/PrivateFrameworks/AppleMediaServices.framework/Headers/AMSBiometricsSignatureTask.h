// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSBIOMETRICSSIGNATURETASK_H
#define AMSBIOMETRICSSIGNATURETASK_H



#import "AMSTask.h"
#import "AMSBiometricsSignatureRequest.h"

@interface AMSBiometricsSignatureTask : AMSTask

@property (readonly, nonatomic) AMSBiometricsSignatureRequest *request; // ivar: _request


-(BOOL)_performCardEnrollmentCheck:(*id)arg0 ;
-(id)_performSignatureInProcess;
-(id)_performSignatureOutOfProcess;
-(id)initWithRequest:(id)arg0 ;
-(id)performSignature;


@end


#endif