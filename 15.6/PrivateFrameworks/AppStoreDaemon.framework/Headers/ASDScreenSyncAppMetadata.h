// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDSCREENSYNCAPPMETADATA_H
#define ASDSCREENSYNCAPPMETADATA_H

@class NSString, NSNumber;
@protocol ASDAppMetadata, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDScreenSyncAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>



@property (copy) NSString *accountName; // ivar: _accountName
@property (readonly) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSNumber *externalVersionIdentifier; // ivar: _externalVersionIdentifier
@property (readonly) NSUInteger hash;
@property (copy) NSNumber *itemID; // ivar: _itemID
@property (copy) NSString *itemName; // ivar: _itemName
@property (readonly) NSInteger metadataType;
@property (copy) NSNumber *purchaserDSID; // ivar: _purchaserDSID
@property (copy) NSNumber *storeFront; // ivar: _storeFront
@property (readonly) Class superclass;
@property (copy) NSString *vendorName; // ivar: _vendorName


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif