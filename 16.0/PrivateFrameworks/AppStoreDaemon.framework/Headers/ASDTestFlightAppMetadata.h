// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDTESTFLIGHTAPPMETADATA_H
#define ASDTESTFLIGHTAPPMETADATA_H

@class ACAccount, NSURL, NSDictionary, NSString, NSNumber, NSArray, NSData;
@protocol ASDAppMetadata, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDTestFlightAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>

 {
    BOOL _requiresPowerPluggedIn_wasSet;
}


@property (copy, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (copy, nonatomic) NSDictionary *backgroundAssetMetadata; // ivar: _backgroundAssetMetadata
@property (copy, nonatomic) NSString *betaBuildGroupID; // ivar: _betaBuildGroupID
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (copy, nonatomic) NSString *companionBundleID; // ivar: _companionBundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *existingBundleURL; // ivar: _existingBundleURL
@property (copy, nonatomic) NSNumber *externalVersionIdentifier; // ivar: _externalVersionIdentifier
@property (copy, nonatomic) NSArray *genreIDs; // ivar: _genreIDs
@property (nonatomic) BOOL hasMessagesExtension; // ivar: _hasMessagesExtension
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *initialODRSize; // ivar: _initialODRSize
@property (copy, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (copy, nonatomic) NSString *itemName; // ivar: _itemName
@property (nonatomic, getter=isLaunchProhibited) BOOL launchProhibited; // ivar: _launchProhibited
@property (copy, nonatomic) NSURL *messagesArtworkURL; // ivar: _messagesArtworkURL
@property (readonly) NSInteger metadataType;
@property (nonatomic) NSInteger packageCompression; // ivar: _packageCompression
@property (copy, nonatomic) NSData *packageDPInfo; // ivar: _packageDPInfo
@property (copy, nonatomic) NSData *packageSINF; // ivar: _packageSINF
@property (copy, nonatomic) NSURL *packageURL; // ivar: _packageURL
@property (copy, nonatomic) NSDictionary *placeholderEntitlements; // ivar: _placeholderEntitlements
@property (copy, nonatomic) NSArray *provisioningProfiles; // ivar: _provisioningProfiles
@property (copy, nonatomic) NSData *receipt; // ivar: _receipt
@property BOOL requiresPowerPluggedIn; // ivar: _requiresPowerPluggedIn
@property (copy, nonatomic) NSString *shortBundleVersion; // ivar: _shortBundleVersion
@property NSInteger softwarePlatform; // ivar: _softwarePlatform
@property (copy, nonatomic) NSString *storeCohort; // ivar: _storeCohort
@property (copy, nonatomic) NSNumber *storeFront; // ivar: _storeFront
@property (readonly) Class superclass;
@property (nonatomic) BOOL userInitiated; // ivar: _userInitiated
@property (copy, nonatomic) NSString *variantID; // ivar: _variantID
@property (copy, nonatomic) NSString *vendorName; // ivar: _vendorName


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif