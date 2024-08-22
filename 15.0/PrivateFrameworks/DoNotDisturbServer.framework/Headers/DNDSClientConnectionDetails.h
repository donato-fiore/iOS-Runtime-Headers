// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSCLIENTCONNECTIONDETAILS_H
#define DNDSCLIENTCONNECTIONDETAILS_H

@class NSSet, NSUUID;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface DNDSClientConnectionDetails : NSObject <NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSSet *activeAssertionUpdateClientIdentifiers; // ivar: _activeAssertionUpdateClientIdentifiers
@property (readonly, copy, nonatomic) NSSet *assertionUpdateClientIdentifiers; // ivar: _assertionUpdateClientIdentifiers
@property (readonly, copy, nonatomic) NSUUID *interruptionInvalidationAssertionUUID; // ivar: _interruptionInvalidationAssertionUUID
@property (readonly, nonatomic) BOOL wantsActiveModeUpdates; // ivar: _wantsActiveModeUpdates
@property (readonly, nonatomic) BOOL wantsGlobalConfigurationUpdates; // ivar: _wantsGlobalConfigurationUpdates
@property (readonly, nonatomic) BOOL wantsMeDeviceStateUpdates; // ivar: _wantsMeDeviceStateUpdates
@property (readonly, nonatomic) BOOL wantsModeUpdates; // ivar: _wantsModeUpdates
@property (readonly, nonatomic) BOOL wantsSettingsUpdates; // ivar: _wantsSettingsUpdates
@property (readonly, nonatomic) BOOL wantsStateUpdates; // ivar: _wantsStateUpdates


-(id)_initWithDetails:(id)arg0 ;
-(id)_initWithInterruptionInvalidationAssertionUUID:(id)arg0 assertionUpdateClientIdentifiers:(id)arg1 activeAssertionUpdateClientIdentifiers:(id)arg2 wantsStateUpdates:(BOOL)arg3 wantsSettingsUpdates:(BOOL)arg4 wantsModeUpdates:(BOOL)arg5 wantsActiveModeUpdates:(BOOL)arg6 wantsGlobalConfigurationUpdates:(BOOL)arg7 wantsMeDeviceStateUpdates:(BOOL)arg8 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif