// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPLUGINVENDORMETADATA_H
#define CHIPPLUGINVENDORMETADATA_H

@class HMFObject, NSDictionary, NSNumber, NSSet;
@protocol NSCopying, NSMutableCopying;



@interface CHIPPluginVendorMetadata : HMFObject <NSCopying, NSMutableCopying>



@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSNumber *schemaVersion; // ivar: _schemaVersion
@property (readonly, copy) NSSet *vendors;
@property (copy) NSDictionary *vendorsByVendorID; // ivar: _vendorsByVendorID
@property (readonly, copy) NSNumber *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithVersion:(id)arg0 schemaVersion:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)vendorWithID:(id)arg0 ;


@end


#endif