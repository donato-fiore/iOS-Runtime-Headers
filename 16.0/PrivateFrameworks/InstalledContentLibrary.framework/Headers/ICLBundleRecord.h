// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICLBUNDLERECORD_H
#define ICLBUNDLERECORD_H

@class NSString, NSURL, NSArray, NSDictionary, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ICLBundleRecord : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger applicationType; // ivar: _applicationType
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *bundleShortVersion; // ivar: _bundleShortVersion
@property (copy, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (copy, nonatomic) NSString *codeInfoIdentifier; // ivar: _codeInfoIdentifier
@property (nonatomic) NSUInteger codeSignerType; // ivar: _codeSignerType
@property (nonatomic) BOOL codeSigningInfoNotAuthoritative; // ivar: _codeSigningInfoNotAuthoritative
@property (nonatomic) NSUInteger compatibilityState; // ivar: _compatibilityState
@property (copy, nonatomic) NSArray *counterpartIdentifiers; // ivar: _counterpartIdentifiers
@property (copy, nonatomic) NSURL *dataContainerURL; // ivar: _dataContainerURL
@property (copy, nonatomic) NSDictionary *entitlements; // ivar: _entitlements
@property (copy, nonatomic) NSDictionary *environmentVariables; // ivar: _environmentVariables
@property (copy, nonatomic) NSDictionary *groupContainers; // ivar: _groupContainers
@property (nonatomic) BOOL hasAppGroupContainers; // ivar: _hasAppGroupContainers
@property (nonatomic) BOOL hasSettingsBundle; // ivar: _hasSettingsBundle
@property (nonatomic) BOOL hasSystemContainer; // ivar: _hasSystemContainer
@property (nonatomic) BOOL hasSystemGroupContainers; // ivar: _hasSystemGroupContainers
@property (nonatomic) BOOL isContainerized; // ivar: _isContainerized
@property (nonatomic) BOOL isNoLongerCompatible; // ivar: _isNoLongerCompatible
@property (nonatomic) BOOL isOnMountedDiskImage; // ivar: _isOnMountedDiskImage
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (readonly, copy, nonatomic) NSDictionary *legacyRecordDictionary;
@property (nonatomic) NSUInteger profileValidationType; // ivar: _profileValidationType
@property (copy, nonatomic) NSNumber *signatureVersion; // ivar: _signatureVersion
@property (copy, nonatomic) NSString *signerIdentity; // ivar: _signerIdentity
@property (copy, nonatomic) NSString *signerOrganization; // ivar: _signerOrganization
@property (copy, nonatomic) NSNumber *staticDiskUsage; // ivar: _staticDiskUsage
@property (copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


+(BOOL)supportsSecureCoding;
+(id)bundleRecordArrayToInfoDictionaryArray:(id)arg0 ;
+(id)infoDictionaryArrayToBundleRecordArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLegacyRecordDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif