// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMUTABLECLIENTCONNECTIONDETAILS_H
#define DNDSMUTABLECLIENTCONNECTIONDETAILS_H

@class NSSet, NSUUID;


#import "DNDSClientConnectionDetails.h"

@interface DNDSMutableClientConnectionDetails : DNDSClientConnectionDetails

@property (copy, nonatomic) NSSet *activeAssertionUpdateClientIdentifiers;
@property (copy, nonatomic) NSSet *assertionUpdateClientIdentifiers;
@property (copy, nonatomic) NSUUID *interruptionInvalidationAssertionUUID;
@property (nonatomic) BOOL wantsActiveModeUpdates;
@property (nonatomic) BOOL wantsGlobalConfigurationUpdates;
@property (nonatomic) BOOL wantsMeDeviceStateUpdates;
@property (nonatomic) BOOL wantsModeUpdates;
@property (nonatomic) BOOL wantsSettingsUpdates;
@property (nonatomic) BOOL wantsStateUpdates;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif