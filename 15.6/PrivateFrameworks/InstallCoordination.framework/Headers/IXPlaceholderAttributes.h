// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IXPLACEHOLDERATTRIBUTES_H
#define IXPLACEHOLDERATTRIBUTES_H

@class NSString, NSDictionary, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IXPlaceholderAttributes : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL arcadeApp; // ivar: _arcadeApp
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (copy, nonatomic) NSString *companionBundleIdentifierForWatchApp; // ivar: _companionBundleIdentifierForWatchApp
@property (copy, nonatomic) NSDictionary *exAppExtensionAttributes; // ivar: _exAppExtensionAttributes
@property (copy, nonatomic) NSDictionary *extensionDictionary; // ivar: _extensionDictionary
@property (nonatomic) BOOL launchProhibited; // ivar: _launchProhibited
@property (copy, nonatomic) NSArray *lsCounterpartIdentifiers; // ivar: _lsCounterpartIdentifiers
@property (copy, nonatomic) NSString *minimumOSVersion; // ivar: _minimumOSVersion
@property (copy, nonatomic) NSDictionary *requiredDeviceCapabilities; // ivar: _requiredDeviceCapabilities
@property (nonatomic) BOOL runsIndependentlyOfCompanionApp; // ivar: _runsIndependentlyOfCompanionApp
@property (copy, nonatomic) NSArray *sbAppTags; // ivar: _sbAppTags
@property (copy, nonatomic) NSString *sbIconMasqueradeIdentifier; // ivar: _sbIconMasqueradeIdentifier
@property (nonatomic) BOOL watchOnlyApp; // ivar: _watchOnlyApp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_plistKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)infoPlistContent;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInfoPlistDictionary:(id)arg0 ;
-(id)initWithInfoPlistFromBundle:(struct __CFBundle *)arg0 error:(*id)arg1 ;
-(id)initWithInfoPlistFromBundleURL:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif