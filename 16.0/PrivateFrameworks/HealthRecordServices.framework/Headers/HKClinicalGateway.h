// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALGATEWAY_H
#define HKCLINICALGATEWAY_H

@class HKFHIRVersion, NSArray, NSURL, NSString;
@protocol NSCopying, NSSecureCoding, HKClinicalBrandable;

#import <Foundation/Foundation.h>

#import "HKClinicalBrand.h"
#import "HKClinicalGatewayReference.h"

@interface HKClinicalGateway : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable>



@property (readonly, copy, nonatomic) HKFHIRVersion *FHIRVersion; // ivar: _FHIRVersion
@property (readonly, copy, nonatomic) NSArray *authSchemas; // ivar: _authSchemas
@property (readonly, copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy, nonatomic) HKClinicalBrand *brand; // ivar: _brand
@property (readonly, copy, nonatomic) NSString *country; // ivar: _country
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayableDescription; // ivar: _displayableDescription
@property (readonly, copy, nonatomic) NSString *externalID; // ivar: _externalID
@property (readonly, copy, nonatomic) NSArray *features; // ivar: _features
@property (readonly, copy, nonatomic) NSArray *gatewayVersions; // ivar: _gatewayVersions
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURL *informationURL; // ivar: _informationURL
@property (readonly, nonatomic) NSInteger minCompatibleAPIVersion; // ivar: _minCompatibleAPIVersion
@property (readonly, nonatomic) HKClinicalGatewayReference *newerSupportedGatewayVersion;
@property (readonly, copy, nonatomic) NSURL *passwordResetURL; // ivar: _passwordResetURL
@property (readonly, copy, nonatomic) NSURL *patientPortalURL; // ivar: _patientPortalURL
@property (readonly, copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, copy, nonatomic) NSArray *resourceSchemas; // ivar: _resourceSchemas
@property (readonly, copy, nonatomic) NSURL *signupURL; // ivar: _signupURL
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNewerGatewayVersionOfGateway:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalID:(id)arg0 title:(id)arg1 subtitle:(id)arg2 displayableDescription:(id)arg3 phoneNumber:(id)arg4 informationURL:(id)arg5 passwordResetURL:(id)arg6 patientPortalURL:(id)arg7 signupURL:(id)arg8 status:(NSInteger)arg9 type:(NSInteger)arg10 brand:(id)arg11 country:(id)arg12 baseURL:(id)arg13 FHIRVersion:(id)arg14 authSchemas:(id)arg15 resourceSchemas:(id)arg16 features:(id)arg17 gatewayVersions:(id)arg18 minCompatibleAPIVersion:(NSInteger)arg19 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif