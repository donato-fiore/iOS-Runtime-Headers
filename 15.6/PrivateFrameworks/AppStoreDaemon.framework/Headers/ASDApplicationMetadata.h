// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDAPPLICATIONMETADATA_H
#define ASDAPPLICATIONMETADATA_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDApplicationMetadata : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSNumber *accountID; // ivar: _accountID
@property (copy, nonatomic) NSString *accountName; // ivar: _accountName
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *artworkPath; // ivar: _artworkPath
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (copy, nonatomic) NSString *cohort; // ivar: _cohort
@property (nonatomic) BOOL deviceBasedVPP; // ivar: _deviceBasedVPP
@property (copy, nonatomic) NSString *deviceVendorID; // ivar: _deviceVendorID
@property (copy, nonatomic) NSNumber *downloaderID; // ivar: _downloaderID
@property (copy, nonatomic) NSNumber *externalVersionIdentifier; // ivar: _externalVersionIdentifier
@property (copy, nonatomic) NSNumber *familyID; // ivar: _familyID
@property (copy, nonatomic) NSNumber *installOrder; // ivar: _installOrder
@property (nonatomic) BOOL isBeta; // ivar: _isBeta
@property (nonatomic) BOOL isClip; // ivar: _isClip
@property (copy, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (copy, nonatomic) NSString *itemName; // ivar: _itemName
@property (copy, nonatomic) NSNumber *purchaserDSID; // ivar: _purchaserDSID
@property (copy, nonatomic) NSString *shortVersion; // ivar: _shortVersion
@property (copy, nonatomic) NSNumber *storeFront; // ivar: _storeFront
@property (copy, nonatomic) NSString *vendorName; // ivar: _vendorName


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif