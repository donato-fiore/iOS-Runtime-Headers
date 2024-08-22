// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSIDENTITYPROVIDER_H
#define VSIDENTITYPROVIDER_H

@class NSString, NSArray, NSNumber, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VSOptional.h"

@interface VSIdentityProvider : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_displayName;
}


@property (copy, nonatomic) NSArray *allPersonalizedAppDescriptions; // ivar: _allPersonalizedAppDescriptions
@property (copy, nonatomic) NSArray *appAdamIDs; // ivar: _appAdamIDs
@property (copy, nonatomic) NSNumber *appPlacementPosition; // ivar: _appPlacementPosition
@property (copy, nonatomic) NSURL *appStoreRoomURL; // ivar: _appStoreRoomURL
@property (nonatomic, getter=isApplication) BOOL application; // ivar: _application
@property (copy, nonatomic) NSURL *authenticationURL; // ivar: _authenticationURL
@property (copy, nonatomic) NSString *defaultAppId; // ivar: _defaultAppId
@property (nonatomic, getter=isDeveloper) BOOL developer; // ivar: _developer
@property (readonly, nonatomic) VSOptional *displayName;
@property (nonatomic) BOOL isSTBOptOutAllowed; // ivar: _isSTBOptOutAllowed
@property (nonatomic) BOOL isSetTopBoxSupported; // ivar: _isSetTopBoxSupported
@property (copy, nonatomic) NSString *nameForSorting; // ivar: _nameForSorting
@property (copy, nonatomic) NSArray *nonChannelAppDescriptions; // ivar: _nonChannelAppDescriptions
@property (nonatomic, getter=isProhibitedByStore) BOOL prohibitedByStore; // ivar: _prohibitedByStore
@property (copy, nonatomic) NSString *providerAppArtworkTemplateURL; // ivar: _providerAppArtworkTemplateURL
@property (copy, nonatomic) NSString *providerArtworkTemplateURL; // ivar: _providerArtworkTemplateURL
@property (retain, nonatomic) VSOptional *providerID; // ivar: _providerID
@property (retain, nonatomic) VSOptional *providerInfo; // ivar: _providerInfo
@property (copy, nonatomic) NSNumber *rankForSorting; // ivar: _rankForSorting
@property (nonatomic) BOOL shouldShowChannelApps; // ivar: _shouldShowChannelApps
@property (nonatomic) BOOL shouldShowSubscriptionApps; // ivar: _shouldShowSubscriptionApps
@property (copy, nonatomic) NSArray *storefronts; // ivar: _storefronts
@property (copy, nonatomic) NSArray *supportedAuthenticationSchemes; // ivar: _supportedAuthenticationSchemes
@property (copy, nonatomic) NSArray *supportedTemplates; // ivar: _supportedTemplates
@property (retain, nonatomic) VSOptional *uniqueID; // ivar: _uniqueID
@property (copy, nonatomic) NSString *userToken; // ivar: _userToken


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFullySupportedForRequestsExpectingAuthenticationSchemes:(id)arg0 ;
-(BOOL)supportsRequestsExpectingAuthenticationSchemes:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithApplicationProvider:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif