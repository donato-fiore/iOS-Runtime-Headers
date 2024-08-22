// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDPURCHASE_H
#define ASDPURCHASE_H

@class NSArray, NSNumber, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDPurchase : NSObject <NSCopying, NSSecureCoding>

 {
    NSArray *_buyParameters;
}


@property (copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSDictionary *additionalHeaders; // ivar: _additionalHeaders
@property (copy, nonatomic) NSString *affiliateIdentifier; // ivar: _affiliateIdentifier
@property (copy, nonatomic) NSString *bagKey; // ivar: _bagKey
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *buyParameters;
@property (copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (nonatomic) BOOL createsJobs; // ivar: _createsJobs
@property (nonatomic) BOOL displaysOnLockScreen; // ivar: _displaysOnLockScreen
@property NSInteger extensionsToEnable; // ivar: _extensionsToEnable
@property (nonatomic) BOOL forceWatchInstall; // ivar: _forceWatchInstall
@property (copy, nonatomic) NSArray *gratisIdentifiers; // ivar: _gratisIdentifiers
@property (nonatomic, getter=isIOSBinaryMacOSCompatible) BOOL iOSBinaryMacOSCompatible; // ivar: _iOSBinaryMacOSCompatible
@property (nonatomic) BOOL installUniversalVariant; // ivar: _installUniversalVariant
@property (nonatomic) BOOL isBackgroundUpdate; // ivar: _isBackgroundUpdate
@property (nonatomic) BOOL isCompatibilityUpdate; // ivar: _isCompatibilityUpdate
@property (nonatomic) BOOL isDSIDLess; // ivar: _isDSIDLess
@property (nonatomic) BOOL isRedownload; // ivar: _isRedownload
@property (nonatomic) BOOL isRefresh; // ivar: _isRefresh
@property (nonatomic) BOOL isUpdate; // ivar: _isUpdate
@property (copy, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (copy, nonatomic) NSString *itemName; // ivar: _itemName
@property (copy, nonatomic) NSNumber *ownerDSID; // ivar: _ownerDSID
@property (copy) NSString *preflightURLString; // ivar: _preflightURLString
@property (copy, nonatomic) NSString *presentingSceneIdentifier; // ivar: _presentingSceneIdentifier
@property NSInteger purchaseID; // ivar: _purchaseID
@property (copy, nonatomic) NSNumber *purchaserDSID; // ivar: _purchaserDSID
@property (copy, nonatomic) NSString *referrerName; // ivar: _referrerName
@property (copy, nonatomic) NSString *referrerURL; // ivar: _referrerURL
@property (copy, nonatomic) NSArray *requiredCapabilities; // ivar: _requiredCapabilities
@property (nonatomic) BOOL sendGUID; // ivar: _sendGUID
@property (nonatomic) BOOL shouldCancelForInstalledBundleItems; // ivar: _shouldCancelForInstalledBundleItems
@property (nonatomic) NSInteger softwarePlatform; // ivar: _softwarePlatform
@property (copy, nonatomic) NSString *vendorName; // ivar: _vendorName


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)firstValueForBuyParameter:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)appendValue:(id)arg0 forBuyParameter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif