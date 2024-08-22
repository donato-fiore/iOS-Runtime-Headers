// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKUSERDOMAINCONCEPTPROPERTYCOLLECTION_H
#define HKUSERDOMAINCONCEPTPROPERTYCOLLECTION_H

@class NSArray;
@protocol NSCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface HKUserDomainConceptPropertyCollection : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>



@property (readonly, copy, nonatomic) NSArray *allBasicProperties;
@property (readonly, copy, nonatomic) NSArray *basicProperties;
@property (readonly, nonatomic) NSInteger count;
@property (readonly, copy, nonatomic) NSArray *properties; // ivar: _properties


+(BOOL)supportsSecureCoding;
+(id)propertyCollectionByMergingCollection:(id)arg0 otherCollection:(id)arg1 ;
+(id)propertyCollectionByMergingCollection:(id)arg0 otherCollection:(id)arg1 options:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)_basicPropertiesIncludeDeleted:(BOOL)arg0 ;
-(id)_propertiesWithType:(NSInteger)arg0 includeDeleted:(BOOL)arg1 ;
-(id)allPropertiesWithType:(NSInteger)arg0 ;
-(id)collectionByAddingProperties:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)firstBasicPropertyWithType:(NSInteger)arg0 ;
-(id)firstPropertyWithType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperties:(id)arg0 ;
-(id)propertiesWithType:(NSInteger)arg0 ;
-(id)propertyCollectionByMerging:(id)arg0 options:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif