// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSACCOUNTMETADATAREQUEST_H
#define VSACCOUNTMETADATAREQUEST_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSAccountMetadataRequest : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *accountProviderAuthenticationToken; // ivar: _accountProviderAuthenticationToken
@property (copy, nonatomic) NSArray *applicationAccountProviders; // ivar: _applicationAccountProviders
@property (copy, nonatomic) NSArray *attributeNames; // ivar: _attributeNames
@property (copy, nonatomic) NSString *channelIdentifier; // ivar: _channelIdentifier
@property (copy, nonatomic) NSArray *featuredAccountProviderIdentifiers; // ivar: _featuredAccountProviderIdentifiers
@property (nonatomic) BOOL forceAuthentication; // ivar: _forceAuthentication
@property (nonatomic) BOOL includeAccountProviderIdentifier; // ivar: _includeAccountProviderIdentifier
@property (nonatomic) BOOL includeAuthenticationExpirationDate; // ivar: _includeAuthenticationExpirationDate
@property (nonatomic, getter=isInterruptionAllowed) BOOL interruptionAllowed; // ivar: _interruptionAllowed
@property (copy, nonatomic) NSString *localizedVideoTitle; // ivar: _localizedVideoTitle
@property (copy, nonatomic) NSArray *supportedAccountProviderIdentifiers; // ivar: _supportedAccountProviderIdentifiers
@property (copy, nonatomic) NSArray *supportedAuthenticationSchemes; // ivar: _supportedAuthenticationSchemes
@property (copy, nonatomic) NSString *verificationToken; // ivar: _verificationToken


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