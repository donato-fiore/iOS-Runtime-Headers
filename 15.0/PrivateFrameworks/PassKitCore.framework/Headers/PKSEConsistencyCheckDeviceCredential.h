// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSECONSISTENCYCHECKDEVICECREDENTIAL_H
#define PKSECONSISTENCYCHECKDEVICECREDENTIAL_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "PKSECredentialAddress.h"
#import "PKSEConsistencyCheckDeviceCredentialAppletProperties.h"
#import "PKSEConsistencyCheckDeviceCredentialISO18013Properties.h"

@interface PKSEConsistencyCheckDeviceCredential : NSObject

@property (readonly, nonatomic) PKSECredentialAddress *address; // ivar: _address
@property (retain, nonatomic) PKSEConsistencyCheckDeviceCredentialAppletProperties *appletProperties; // ivar: _appletProperties
@property (nonatomic) NSInteger credentialType; // ivar: _credentialType
@property (retain, nonatomic) PKSEConsistencyCheckDeviceCredentialISO18013Properties *isoProperties; // ivar: _isoProperties
@property (readonly, nonatomic) BOOL shouldRegister; // ivar: _shouldRegister
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSNumber *underlyingCredentialState; // ivar: _underlyingCredentialState


+(id)deviceCredentialWithApplet:(id)arg0 ;
+(id)deviceCredentialWithDAKeyInformation:(id)arg0 ;
+(id)deviceCredentialWithISOCredentialProperties:(id)arg0 hasKeyMeterial:(BOOL)arg1 ;
-(id)description;
-(id)init;
-(id)initWithType:(NSUInteger)arg0 state:(NSUInteger)arg1 underlyingCredentialState:(id)arg2 address:(id)arg3 ;


@end


#endif