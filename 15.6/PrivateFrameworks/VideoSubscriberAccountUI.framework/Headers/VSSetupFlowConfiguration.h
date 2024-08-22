// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSETUPFLOWCONFIGURATION_H
#define VSSETUPFLOWCONFIGURATION_H

@class NSArray, VSIdentityProvider, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "VSAppDescription.h"

@interface VSSetupFlowConfiguration : NSObject

@property (copy, nonatomic) NSArray *bundlesIDsToConsent; // ivar: _bundlesIDsToConsent
@property (nonatomic) BOOL canShowSupportedAppsButton; // ivar: _canShowSupportedAppsButton
@property (retain, nonatomic) VSIdentityProvider *identityProvider; // ivar: _identityProvider
@property (retain, nonatomic) VSAppDescription *msoAppDescription; // ivar: _msoAppDescription
@property (copy, nonatomic) NSString *preferredAppID; // ivar: _preferredAppID
@property (copy, nonatomic) NSString *providerAccountUsername; // ivar: _providerAccountUsername
@property (nonatomic) BOOL shouldOfferAuthenticationFlow; // ivar: _shouldOfferAuthenticationFlow
@property (nonatomic) BOOL shouldOfferSTBAuthenticationFlow; // ivar: _shouldOfferSTBAuthenticationFlow
@property (nonatomic) BOOL shouldOfferSoleAuthenticationFlow; // ivar: _shouldOfferSoleAuthenticationFlow
@property (nonatomic) BOOL shouldSkipSetupEntirely; // ivar: _shouldSkipSetupEntirely
@property (retain, nonatomic) NSArray *supportedApps; // ivar: _supportedApps
@property (copy, nonatomic) NSDictionary *vouchersByBundleID; // ivar: _vouchersByBundleID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif