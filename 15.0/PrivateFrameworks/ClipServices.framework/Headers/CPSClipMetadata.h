// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSCLIPMETADATA_H
#define CPSCLIPMETADATA_H

@class NSString, NSURL, NSDictionary, NSNumber, NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPSClipInvocationPolicy.h"

@interface CPSClipMetadata : NSObject <NSSecureCoding>

 {
    NSString *_storeClipName;
    NSString *_storeClipCaption;
    NSURL *_storeClipHeroImageURL;
    NSString *_abrClipName;
    NSString *_abrClipCaption;
    NSURL *_abrClipHeroImageURL;
}


@property (copy, nonatomic) NSDictionary *amsDictionary; // ivar: _amsDictionary
@property (readonly, nonatomic) NSString *bundleDisplayName;
@property (copy, nonatomic) NSString *buyParams; // ivar: _buyParams
@property (readonly, nonatomic) NSInteger clipAction; // ivar: _clipAction
@property (copy, nonatomic) NSString *clipBundleID; // ivar: _clipBundleID
@property (readonly, nonatomic) NSDictionary *clipBusinessIconStyleAttributes; // ivar: _clipBusinessIconStyleAttributes
@property (readonly, nonatomic) NSURL *clipBusinessIconURL; // ivar: _clipBusinessIconURL
@property (readonly, nonatomic) NSString *clipCaption;
@property (readonly, nonatomic) NSURL *clipHeroImageURL;
@property (nonatomic) BOOL clipIncompatibleWithCurrentDevice; // ivar: _clipIncompatibleWithCurrentDevice
@property (copy, nonatomic) NSURL *clipIpaURL; // ivar: _clipIpaURL
@property (readonly, nonatomic) NSURL *clipLaunchURL;
@property (readonly, nonatomic) NSNumber *clipMapItemMUID; // ivar: _clipMapItemMUID
@property (readonly, nonatomic) NSString *clipMinimumOSVersion; // ivar: _clipMinimumOSVersion
@property (readonly, nonatomic) NSString *clipName;
@property (readonly, nonatomic) NSString *clipOpenButtonTitle;
@property (retain, nonatomic) NSURL *clipRequestURL; // ivar: _clipRequestURL
@property (readonly, nonatomic) BOOL clipRequestsLocationConfirmationPermission; // ivar: _clipRequestsLocationConfirmationPermission
@property (readonly, nonatomic) BOOL clipRequestsNotificationPermission; // ivar: _clipRequestsNotificationPermission
@property (readonly, nonatomic) NSURL *clipTargetURL; // ivar: _clipTargetURL
@property (retain, nonatomic) NSURL *clipURL; // ivar: _clipURL
@property (retain, nonatomic) NSString *clipURLHash; // ivar: _clipURLHash
@property (readonly, nonatomic) NSArray *clipVerifiedAssociatedDomains; // ivar: _clipVerifiedAssociatedDomains
@property (nonatomic) NSUInteger clipVersionIdentifier; // ivar: _clipVersionIdentifier
@property (nonatomic) BOOL deviceCapabilitiesDontMatch; // ivar: _deviceCapabilitiesDontMatch
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (copy, nonatomic) NSString *fullAppBundleID; // ivar: _fullAppBundleID
@property (copy, nonatomic) NSString *fullAppCachedIconFilePath; // ivar: _fullAppCachedIconFilePath
@property (copy, nonatomic) NSString *fullAppCaption; // ivar: _fullAppCaption
@property (copy, nonatomic) NSString *fullAppContentRating; // ivar: _fullAppContentRating
@property (copy, nonatomic) NSURL *fullAppIconURL; // ivar: _fullAppIconURL
@property (copy, nonatomic) NSString *fullAppName; // ivar: _fullAppName
@property (nonatomic) BOOL fullAppOnly; // ivar: _fullAppOnly
@property (copy, nonatomic) NSString *fullAppShortName; // ivar: _fullAppShortName
@property (copy, nonatomic) NSURL *fullAppStoreURL; // ivar: _fullAppStoreURL
@property (readonly, nonatomic) BOOL hasAppMetadata; // ivar: _hasAppMetadata
@property (readonly, nonatomic) BOOL hasBusinessItemMetadata; // ivar: _hasBusinessItemMetadata
@property (readonly, nonatomic) BOOL hasFullAppInstalledOnSystem;
@property (retain, nonatomic) CPSClipInvocationPolicy *invocationPolicy; // ivar: _invocationPolicy
@property (readonly, nonatomic) BOOL isDeveloperOverride; // ivar: _isDeveloperOverride
@property (copy, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (readonly, copy, nonatomic) NSString *localizedSubtitleForClipSuggestion;
@property (readonly, copy, nonatomic) NSString *localizedTitleForClipSuggestion;
@property (readonly, nonatomic, getter=isPoweredByThirdParty) BOOL poweredByThirdParty; // ivar: _poweredByThirdParty
@property (copy, nonatomic) NSString *provider; // ivar: _provider
@property (retain, nonatomic) NSArray *test_clipVerifiedAssociatedDomains;
@property (copy, nonatomic) NSString *webClipID; // ivar: _webClipID


+(BOOL)supportsSecureCoding;
-(BOOL)hasUpToDateVersionInstalledOnSystemIsPlaceholder:(*BOOL)arg0 ;
-(BOOL)hasValidAssociatedDomainsToLaunchAppClip;
-(id)_itemIDFromAppURLString:(id)arg0 ;
-(id)description;
-(id)initWithBusinessItem:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDemoBundleURL:(id)arg0 ;
-(id)initWithDeveloperOverride:(id)arg0 invocationURL:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 bundleURL:(id)arg1 ;
-(id)initWithUncheckedDictionary:(id)arg0 ;
-(void)_updateInvocationPolicy:(id)arg0 ;
-(void)_updateWithAMSMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithStoreClipMetadata:(id)arg0 ;
-(void)updateWithStoreParentAppMetadata:(id)arg0 ;


@end


#endif