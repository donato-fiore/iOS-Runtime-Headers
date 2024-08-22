// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPDISCOVEREDACCESSORYPRODUCTINFORMATION_H
#define SPDISCOVEREDACCESSORYPRODUCTINFORMATION_H

@class NSString, NSURL, NSData, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPBeaconRole.h"
#import "SPUnknownProductMetadata.h"

@interface SPDiscoveredAccessoryProductInformation : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (nonatomic) NSInteger beaconGroupVersion; // ivar: _beaconGroupVersion
@property (nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (copy, nonatomic) NSURL *defaultHeroIcon; // ivar: _defaultHeroIcon
@property (copy, nonatomic) NSURL *defaultHeroIcon2x; // ivar: _defaultHeroIcon2x
@property (copy, nonatomic) NSURL *defaultHeroIcon3x; // ivar: _defaultHeroIcon3x
@property (copy, nonatomic) NSURL *defaultListIcon; // ivar: _defaultListIcon
@property (copy, nonatomic) NSURL *defaultListIcon2x; // ivar: _defaultListIcon2x
@property (copy, nonatomic) NSURL *defaultListIcon3x; // ivar: _defaultListIcon3x
@property (copy, nonatomic) SPBeaconRole *defaultRole; // ivar: _defaultRole
@property (copy, nonatomic) SPUnknownProductMetadata *disableMetadata; // ivar: _disableMetadata
@property (copy, nonatomic) NSURL *disableURL; // ivar: _disableURL
@property (nonatomic) BOOL eligibleForPairing; // ivar: _eligibleForPairing
@property (copy, nonatomic) NSData *encryptionKeyE1; // ivar: _encryptionKeyE1
@property (copy, nonatomic) NSData *encryptionKeyE2; // ivar: _encryptionKeyE2
@property (copy, nonatomic) NSString *findmyProductId; // ivar: _findmyProductId
@property (nonatomic) BOOL hidden; // ivar: _hidden
@property (nonatomic) BOOL isHELEAccessory; // ivar: _isHELEAccessory
@property (nonatomic) BOOL isManagedAccessory; // ivar: _isManagedAccessory
@property (copy, nonatomic) NSArray *layoutTemplate; // ivar: _layoutTemplate
@property (copy, nonatomic) SPUnknownProductMetadata *learnModeMetadata; // ivar: _learnModeMetadata
@property (copy, nonatomic) NSURL *lowBatteryInfoURL; // ivar: _lowBatteryInfoURL
@property (copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (nonatomic) BOOL supportBeaconGroupInfo; // ivar: _supportBeaconGroupInfo
@property (nonatomic) CGFloat txPower; // ivar: _txPower
@property (copy, nonatomic) NSData *verificationKeyS2; // ivar: _verificationKeyS2
@property (copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif