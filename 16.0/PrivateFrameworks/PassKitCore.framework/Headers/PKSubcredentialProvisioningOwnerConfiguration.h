// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGOWNERCONFIGURATION_H
#define PKSUBCREDENTIALPROVISIONINGOWNERCONFIGURATION_H

@class NSString;


#import "PKSubcredentialProvisioningLocalDeviceConfiguration.h"
#import "PKAppletSubcredentialPairingSession.h"

@interface PKSubcredentialProvisioningOwnerConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration

@property (retain, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (readonly, nonatomic) NSString *issuerIdentifier; // ivar: _issuerIdentifier
@property (readonly, nonatomic) NSString *keyName; // ivar: _keyName
@property (readonly, nonatomic) NSString *manufacturerIdentifier; // ivar: _manufacturerIdentifier
@property (readonly, nonatomic) NSString *pairingPassword; // ivar: _pairingPassword
@property (readonly, nonatomic) NSUInteger radioTechnologies; // ivar: _radioTechnologies
@property (readonly, weak, nonatomic) PKAppletSubcredentialPairingSession *session; // ivar: _session


-(NSInteger)startingState;
-(id)description;
-(id)initWithSession:(id)arg0 pairingPassword:(id)arg1 keyName:(id)arg2 issuerIdentifier:(id)arg3 manufacturerIdentifier:(id)arg4 webService:(id)arg5 registrationMetadata:(id)arg6 radioTechnologies:(NSUInteger)arg7 ;
-(id)transitionTable;


@end


#endif