// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKUSERDOMAINCONCEPTPROPERTYCOLLECTION_H
#define HKUSERDOMAINCONCEPTPROPERTYCOLLECTION_H

@class NSArray;
@protocol NSCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface HKUserDomainConceptPropertyCollection : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>



@property (readonly, nonatomic) NSInteger count;
@property (readonly, copy, nonatomic) NSArray *properties; // ivar: _properties


+(BOOL)supportsSecureCoding;
+(id)propertyCollectionByMergingCollection:(id)arg0 otherCollection:(id)arg1 ;
+(id)propertyCollectionByMergingOntologyContentIntoCollection:(id)arg0 fromCollection:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)collectionByAddingProperties:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)firstPropertyWithType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperties:(id)arg0 ;
-(id)propertyCollectionByMerging:(id)arg0 ;
-(id)propertyCollectionByMergingRefreshedOntologyContentPropertyCollection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif