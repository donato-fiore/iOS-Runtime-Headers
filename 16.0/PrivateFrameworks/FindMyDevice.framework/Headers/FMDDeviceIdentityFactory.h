// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMDDEVICEIDENTITYFACTORY_H
#define FMDDEVICEIDENTITYFACTORY_H


#import <Foundation/Foundation.h>


@interface FMDDeviceIdentityFactory : NSObject



-(void)baaIdentityAttestationForSigningRequest:(id)arg0 completion:(id)arg1 ;
-(void)identityForPasscodeActivationUnlockWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif