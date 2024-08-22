// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDCONTEXTUALCHANGEREGISTRATION_H
#define _CDCONTEXTUALCHANGEREGISTRATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_CDContextualPredicate.h"

@interface _CDContextualChangeRegistration : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) id *callback; // ivar: _callback
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (nonatomic) NSUInteger deviceSet; // ivar: _deviceSet
@property (readonly, nonatomic) NSUInteger deviceTypes; // ivar: _deviceTypes
@property (retain, nonatomic) _CDContextualPredicate *dismissalPolicy; // ivar: _dismissalPolicy
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy) id *informativeCallback; // ivar: _informativeCallback
@property (nonatomic) BOOL isDeserialized; // ivar: _isDeserialized
@property (copy, nonatomic) NSString *locationManagerEffectiveBundleID; // ivar: _locationManagerEffectiveBundleID
@property (copy, nonatomic) NSString *locationManagerEffectiveBundlePath; // ivar: _locationManagerEffectiveBundlePath
@property (nonatomic) BOOL mustWake; // ivar: _mustWake
@property (retain, nonatomic) _CDContextualPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) unsigned int qualityOfService; // ivar: _qualityOfService


+(BOOL)supportsSecureCoding;
+(id)localNonWakingRegistrationWithIdentifier:(id)arg0 contextualPredicate:(id)arg1 callback:(id)arg2 ;
+(id)localNonWakingRegistrationWithIdentifier:(id)arg0 contextualPredicate:(id)arg1 clientIdentifier:(id)arg2 callback:(id)arg3 ;
+(id)localWakingRegistrationWithIdentifier:(id)arg0 contextualPredicate:(id)arg1 callback:(id)arg2 ;
+(id)localWakingRegistrationWithIdentifier:(id)arg0 contextualPredicate:(id)arg1 clientIdentifier:(id)arg2 callback:(id)arg3 ;
+(id)registrationWithIdentifier:(id)arg0 contextualPredicate:(id)arg1 deviceTypes:(NSUInteger)arg2 clientIdentifier:(id)arg3 mustWake:(BOOL)arg4 callback:(id)arg5 ;
+(id)registrationWithIdentifier:(id)arg0 contextualPredicate:(id)arg1 deviceTypes:(NSUInteger)arg2 clientIdentifier:(id)arg3 mustWake:(BOOL)arg4 qualityOfService:(unsigned int)arg5 callback:(id)arg6 ;
+(id)registrationWithIdentifier:(id)arg0 contextualPredicate:(id)arg1 dismissalPolicy:(id)arg2 deviceSet:(NSUInteger)arg3 clientIdentifier:(id)arg4 mustWake:(BOOL)arg5 callback:(id)arg6 ;
+(id)registrationWithIdentifier:(id)arg0 contextualPredicate:(id)arg1 dismissalPolicy:(id)arg2 deviceSet:(NSUInteger)arg3 clientIdentifier:(id)arg4 mustWake:(BOOL)arg5 qualityOfService:(unsigned int)arg6 callback:(id)arg7 ;
+(id)registrationWithIdentifier:(id)arg0 contextualPredicate:(id)arg1 dismissalPolicy:(id)arg2 deviceSet:(NSUInteger)arg3 mustWake:(BOOL)arg4 callback:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMultiDeviceRegistration;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 contextualPredicate:(id)arg1 dismissalPolicy:(id)arg2 deviceSet:(NSUInteger)arg3 deviceTypes:(NSUInteger)arg4 clientIdentifier:(id)arg5 mustWake:(BOOL)arg6 callback:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 contextualPredicate:(id)arg1 dismissalPolicy:(id)arg2 deviceSet:(NSUInteger)arg3 deviceTypes:(NSUInteger)arg4 clientIdentifier:(id)arg5 mustWake:(BOOL)arg6 qualityOfService:(unsigned int)arg7 informativeCallback:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif