// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSAPPDESCRIPTION_H
#define VSAPPDESCRIPTION_H

@class NSNumber, NSURL, NSString, NSArray, UIImage;

#import <Foundation/Foundation.h>


@interface VSAppDescription : NSObject

@property (copy, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (copy, nonatomic) NSNumber *appSizeBytes; // ivar: _appSizeBytes
@property (copy, nonatomic) NSURL *appStoreURL; // ivar: _appStoreURL
@property (nonatomic) NSUInteger appType; // ivar: _appType
@property (copy, nonatomic) NSString *artworkURLTemplate; // ivar: _artworkURLTemplate
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *buyParams; // ivar: _buyParams
@property (copy, nonatomic) NSNumber *contentRank; // ivar: _contentRank
@property (nonatomic, getter=isDefaultAppForProvider) BOOL defaultAppForProvider; // ivar: _defaultAppForProvider
@property (copy, nonatomic) NSArray *deviceFamilies; // ivar: _deviceFamilies
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *externalVersionID; // ivar: _externalVersionID
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (copy, nonatomic) NSURL *licenseAgreementEndpointURL; // ivar: _licenseAgreementEndpointURL
@property (nonatomic) BOOL offersInAppPurchases; // ivar: _offersInAppPurchases
@property (copy, nonatomic) NSURL *privacyPolicyEndpointURL; // ivar: _privacyPolicyEndpointURL
@property (copy, nonatomic) NSString *rating; // ivar: _rating
@property (copy, nonatomic) NSString *sellerName; // ivar: _sellerName
@property (readonly, copy, nonatomic) NSString *shortenedDisplayName;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)iconURLForSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif