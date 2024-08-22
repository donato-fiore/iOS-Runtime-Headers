// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISSOFTWAREAPPLICATION_H
#define ISSOFTWAREAPPLICATION_H

@class NSNumber, NSString, SSItemContentRating, NSDate, NSArray;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface ISSoftwareApplication : NSObject <SSXPCCoding>

 {
    NSUInteger _vppStateFlags;
}


@property (retain, nonatomic) NSNumber *accountDSID; // ivar: _accountDSID
@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic, getter=isBeta) BOOL beta; // ivar: _beta
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *bundleShortVersionString; // ivar: _bundleShortVersionString
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (copy, nonatomic) NSString *containerPath; // ivar: _containerPath
@property (copy, nonatomic) SSItemContentRating *contentRating; // ivar: _contentRating
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdentifierForVendor; // ivar: _deviceIdentifierForVendor
@property (nonatomic) BOOL didCheckLaunchProhibited; // ivar: _didCheckLaunchProhibited
@property (copy, nonatomic) NSNumber *familyAccountIdentifier; // ivar: _familyAccountIdentifier
@property (nonatomic) BOOL hasMIDBasedSINF; // ivar: _hasMIDBasedSINF
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *itemIdentifier; // ivar: _itemIdentifier
@property (copy, nonatomic) NSString *itemName; // ivar: _itemName
@property (nonatomic, getter=isLaunchProhibited) BOOL launchProhibited; // ivar: _launchProhibited
@property (nonatomic) BOOL missingRequiredSINF; // ivar: _missingRequiredSINF
@property (nonatomic, getter=isPlaceholder) BOOL placeholder; // ivar: _placeholder
@property (nonatomic, getter=isProfileValidated) BOOL profileValidated; // ivar: _profileValidated
@property (readonly, nonatomic) NSDate *receiptExpirationDate; // ivar: _receiptExpirationDate
@property (readonly, nonatomic) NSUInteger removableStatus; // ivar: _removableStatus
@property (copy, nonatomic) NSString *softwareType; // ivar: _softwareType
@property (retain, nonatomic) NSNumber *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *vendorName; // ivar: _vendorName
@property (retain, nonatomic) NSNumber *versionIdentifier; // ivar: _versionIdentifier
@property (copy, nonatomic) NSArray *versionOrdering; // ivar: _versionOrdering
@property (readonly, nonatomic) NSUInteger vppStateFlags;


-(id)ITunesMetadataDictionary;
-(id)copyXPCEncoding;
-(id)initWithLaunchServicesApplication:(id)arg0 ;
-(id)initWithLaunchServicesApplication:(id)arg0 containerPath:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)_loadMetadataFromContainer:(id)arg0 ;
-(void)dealloc;
-(void)resetVPPStateFlags;


@end


#endif