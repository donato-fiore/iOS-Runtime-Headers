// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDAPPREVIEWAPPMETADATA_H
#define ASDAPPREVIEWAPPMETADATA_H

@class NSURL, NSString, NSNumber, NSData, MIStoreMetadata;
@protocol ASDAppMetadata, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDAppReviewAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (nonatomic, getter=isBeta) BOOL beta; // ivar: _beta
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier; // ivar: _externalVersionIdentifier
@property (nonatomic) BOOL hasMessagesExtension; // ivar: _hasMessagesExtension
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *initialODRSize; // ivar: _initialODRSize
@property (copy, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (copy, nonatomic) NSString *itemName; // ivar: _itemName
@property (nonatomic, getter=isLaunchProhibited) BOOL launchProhibited; // ivar: _launchProhibited
@property (copy, nonatomic) NSURL *messagesArtworkURL; // ivar: _messagesArtworkURL
@property (readonly) NSInteger metadataType;
@property (copy, nonatomic) NSData *onDemandResourceManifest; // ivar: _onDemandResourceManifest
@property (copy, nonatomic) NSData *packageDPInfo; // ivar: _packageDPInfo
@property (copy, nonatomic) NSData *packageSINF; // ivar: _packageSINF
@property (copy, nonatomic) NSURL *packageURL; // ivar: _packageURL
@property (copy, nonatomic) MIStoreMetadata *storeMetadata; // ivar: _storeMetadata
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *variantID; // ivar: _variantID
@property (copy, nonatomic) NSString *vendorName; // ivar: _vendorName


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoreMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif