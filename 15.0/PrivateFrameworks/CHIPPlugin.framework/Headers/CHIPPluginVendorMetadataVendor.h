// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPPLUGINVENDORMETADATAVENDOR_H
#define CHIPPLUGINVENDORMETADATAVENDOR_H

@class HMFObject, NSString, NSDictionary, NSNumber, NSSet;



@interface CHIPPluginVendorMetadataVendor : HMFObject

@property (copy) NSString *appBundleID; // ivar: _appBundleID
@property (copy) NSString *appStoreID; // ivar: _appStoreID
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (copy) NSNumber *identifier; // ivar: _identifier
@property (copy) NSString *name; // ivar: _name
@property (readonly, copy) NSSet *products;
@property (copy) NSDictionary *productsByProductID; // ivar: _productsByProductID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dictionaryRepresentation:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)productWithID:(id)arg0 ;


@end


#endif