// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLPLACEHOLDERRECORD_H
#define ICLPLACEHOLDERRECORD_H

@class NSString, NSURL, NSDate, NSData, NSNumber, NSArray;
@protocol NSSecureCoding, NSCopying;


#import "ICLBundleRecord.h"
#import "ICLSinfInfo.h"

@interface ICLPlaceholderRecord : ICLBundleRecord <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *alternateIconName; // ivar: _alternateIconName
@property (copy, nonatomic) NSString *appManagementDomain; // ivar: _appManagementDomain
@property (copy, nonatomic) NSURL *bundleContainerURL; // ivar: _bundleContainerURL
@property (copy, nonatomic) NSDate *installDate; // ivar: _installDate
@property (copy, nonatomic) NSData *installSessionID; // ivar: _installSessionID
@property (nonatomic) BOOL isDeletable; // ivar: _isDeletable
@property (nonatomic) BOOL isOnDemandInstallCapable; // ivar: _isOnDemandInstallCapable
@property (nonatomic) BOOL isSwiftPlaygroundsApp; // ivar: _isSwiftPlaygroundsApp
@property (nonatomic) BOOL isWebNotificationBundle; // ivar: _isWebNotificationBundle
@property (copy, nonatomic) NSString *linkedParentBundleID; // ivar: _linkedParentBundleID
@property (copy, nonatomic) NSNumber *lsInstallType; // ivar: _lsInstallType
@property (copy, nonatomic) NSArray *parentIdentifiers; // ivar: _parentIdentifiers
@property (nonatomic) NSUInteger placeholderFailureReason; // ivar: _placeholderFailureReason
@property (copy, nonatomic) ICLSinfInfo *sinfInfo; // ivar: _sinfInfo
@property (copy, nonatomic) NSData *uniqueInstallID; // ivar: _uniqueInstallID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLegacyRecordDictionary:(id)arg0 ;
-(id)legacyRecordDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif