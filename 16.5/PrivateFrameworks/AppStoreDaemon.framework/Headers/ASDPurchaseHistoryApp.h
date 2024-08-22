// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDPURCHASEHISTORYAPP_H
#define ASDPURCHASEHISTORYAPP_H

@class NSString, NSDate, NSArray, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDPurchaseHistoryApp : NSObject <NSSecureCoding>



@property (copy) NSString *bundleID; // ivar: _bundleID
@property (copy) NSString *circularIconURLString; // ivar: _circularIconURLString
@property NSInteger contentRatingFlags; // ivar: _contentRatingFlags
@property BOOL currentlyOptedInForMacOSEligibility; // ivar: _currentlyOptedInForMacOSEligibility
@property (copy) NSDate *datePurchased; // ivar: _datePurchased
@property (copy) NSString *developerName; // ivar: _developerName
@property (getter=isFamilyShared) BOOL familyShared; // ivar: _familyShared
@property (getter=isFirstParty) BOOL firstParty; // ivar: _firstParty
@property NSInteger genreID; // ivar: _genreID
@property (copy) NSString *genreName; // ivar: _genreName
@property (readonly) BOOL hasAnyMacOSCompatibleIOSVersion;
@property BOOL hasMessagesExtension; // ivar: _hasMessagesExtension
@property BOOL hasP3; // ivar: _hasP3
@property (getter=isHidden) BOOL hidden; // ivar: _hidden
@property (getter=isHiddenFromSpringboard) BOOL hiddenFromSpringboard; // ivar: _hiddenFromSpringboard
@property (copy) NSString *iconURLString; // ivar: _iconURLString
@property BOOL is32BitOnly; // ivar: _is32BitOnly
@property BOOL isIOSBinaryMacOSAvailable;
@property BOOL isIOSBinaryMacOSCompatible;
@property BOOL isPreorder; // ivar: _isPreorder
@property BOOL isVerifiedForMacOS; // ivar: _isVerifiedForMacOS
@property NSUInteger lockerItemID; // ivar: _lockerItemID
@property (copy) NSString *longTitle; // ivar: _longTitle
@property (copy) NSArray *macAppRequiredCapabilities; // ivar: _macAppRequiredCapabilities
@property unsigned int mediaKind; // ivar: _mediaKind
@property BOOL optedInForMacOSEligibility; // ivar: _optedInForMacOSEligibility
@property (copy) NSString *ovalIconURLString; // ivar: _ovalIconURLString
@property (copy) NSURL *preflightPackageURL; // ivar: _preflightPackageURL
@property (copy) NSURL *productURL; // ivar: _productURL
@property unsigned int purchaseToken; // ivar: _purchaseToken
@property NSInteger purchaserDSID; // ivar: _purchaserDSID
@property (copy) NSString *redownloadParams; // ivar: _redownloadParams
@property (copy) NSArray *requiredCapabilities; // ivar: _requiredCapabilities
@property BOOL requiresRosetta; // ivar: _requiresRosetta
@property BOOL runsOnAppleSilicon; // ivar: _runsOnAppleSilicon
@property BOOL runsOnIntel; // ivar: _runsOnIntel
@property NSInteger storeItemID; // ivar: _storeItemID
@property BOOL supportsIPad; // ivar: _supportsIPad
@property BOOL supportsIPhone; // ivar: _supportsIPhone
@property BOOL supportsLayeredImage; // ivar: _supportsLayeredImage
@property BOOL supportsMac; // ivar: _supportsMac
@property (copy) NSString *title; // ivar: _title
@property BOOL watchAppDeliveredIniOSApp; // ivar: _watchAppDeliveredIniOSApp
@property BOOL watchAppRunsIndependently; // ivar: _watchAppRunsIndependently
@property BOOL watchOnly; // ivar: _watchOnly


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif