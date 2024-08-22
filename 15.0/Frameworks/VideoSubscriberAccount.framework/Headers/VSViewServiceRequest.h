// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSVIEWSERVICEREQUEST_H
#define VSVIEWSERVICEREQUEST_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VSAccountMetadataRequest.h"
#import "VSOptional.h"

@interface VSViewServiceRequest : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) VSAccountMetadataRequest *accountMetadataRequest; // ivar: _accountMetadataRequest
@property (readonly, copy, nonatomic) NSString *accountProviderAuthenticationToken;
@property (readonly, nonatomic) BOOL allowsAuthenticationUI;
@property (nonatomic) BOOL allowsPrivacyUI; // ivar: _allowsPrivacyUI
@property (readonly, copy, nonatomic) NSArray *applicationAccountProviders;
@property (nonatomic) BOOL canVetoAuthentication; // ivar: _canVetoAuthentication
@property (readonly, copy, nonatomic) NSArray *featuredIdentityProviderIdentifiers;
@property (readonly, copy, nonatomic) NSString *localizedVideoTitle;
@property (readonly, nonatomic, getter=isPreAuthRequest) BOOL preAuthRequest;
@property (retain, nonatomic) NSString *requestingAppAdamID; // ivar: _requestingAppAdamID
@property (retain, nonatomic) VSOptional *requestingAppDisplayName; // ivar: _requestingAppDisplayName
@property (nonatomic) BOOL requiresPrivacyUI; // ivar: _requiresPrivacyUI
@property (nonatomic) BOOL shouldInferFeaturedProviders; // ivar: _shouldInferFeaturedProviders
@property (nonatomic) BOOL shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront; // ivar: _shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront
@property (readonly, copy, nonatomic) NSArray *supportedAccountProviderAuthenticationSchemes;
@property (readonly, copy, nonatomic) NSArray *supportedIdentityProviderIdentifiers;


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