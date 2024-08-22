// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLMODEL_H
#define MTLMODEL_H

@class NSString, NSDictionary;
@protocol NSCoding, MTLModel;

#import <Foundation/Foundation.h>


@interface MTLModel : NSObject <NSCoding, MTLModel>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(NSUInteger)modelVersion;
+(NSUInteger)storageBehaviorForPropertyWithKey:(id)arg0 ;
+(id)allowedSecureCodingClassesByPropertyKey;
+(id)dictionaryValueFromArchivedExternalRepresentation:(id)arg0 version:(NSUInteger)arg1 ;
+(id)encodingBehaviorsByPropertyKey;
+(id)modelWithDictionary:(id)arg0 error:(*id)arg1 ;
+(id)permanentPropertyKeys;
+(id)propertyKeys;
+(id)transitoryPropertyKeys;
+(void)enumeratePropertiesUsingBlock:(id)arg0 ;
+(void)generateAndCacheStorageBehaviors;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validate:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodeValueForKey:(id)arg0 withCoder:(id)arg1 modelVersion:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeValueForKey:(id)arg0 fromModel:(id)arg1 ;
-(void)mergeValuesForKeysFromModel:(id)arg0 ;


@end


#endif