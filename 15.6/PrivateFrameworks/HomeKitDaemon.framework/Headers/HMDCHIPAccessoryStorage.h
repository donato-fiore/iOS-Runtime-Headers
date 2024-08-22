// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCHIPACCESSORYSTORAGE_H
#define HMDCHIPACCESSORYSTORAGE_H

@class HMFObject, NSData, NSDictionary, NSNumber, NSSet;
@protocol NSCopying, NSSecureCoding;



@interface HMDCHIPAccessoryStorage : HMFObject <NSCopying, NSSecureCoding>



@property (copy) NSData *attributeDatabase; // ivar: _attributeDatabase
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;
@property (copy) NSNumber *nodeID; // ivar: _nodeID
@property (copy) NSSet *pairings; // ivar: _pairings
@property (copy) NSNumber *productID; // ivar: _productID
@property (copy) NSNumber *vendorID; // ivar: _vendorID


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateUsingAccessoryModel:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)logIdentifier;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateAccessoryModel:(id)arg0 ;


@end


#endif