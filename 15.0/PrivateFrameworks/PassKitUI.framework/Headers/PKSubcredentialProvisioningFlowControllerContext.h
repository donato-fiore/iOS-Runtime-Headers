// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGFLOWCONTROLLERCONTEXT_H
#define PKSUBCREDENTIALPROVISIONINGFLOWCONTROLLERCONTEXT_H

@class NSError, PKPaymentWebService, PKPaymentPass;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKSubcredentialProvisioningFlowControllerContext : NSObject <NSCopying>



@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger flowType; // ivar: _flowType
@property (retain, nonatomic) PKPaymentWebService *localDeviceWebService; // ivar: _localDeviceWebService
@property (retain, nonatomic) PKPaymentPass *provisionedPass; // ivar: _provisionedPass
@property (retain, nonatomic) PKPaymentPass *provisionedRemotePass; // ivar: _provisionedRemotePass
@property (retain, nonatomic) PKPaymentWebService *remoteDeviceWebService; // ivar: _remoteDeviceWebService
@property (readonly, nonatomic) NSInteger setupContext;
@property (nonatomic) BOOL shouldExitFlowOnError; // ivar: _shouldExitFlowOnError


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFlowType:(NSInteger)arg0 ;


@end


#endif