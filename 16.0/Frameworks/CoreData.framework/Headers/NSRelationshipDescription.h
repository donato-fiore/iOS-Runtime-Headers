// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSRELATIONSHIPDESCRIPTION_H
#define NSRELATIONSHIPDESCRIPTION_H

@class NSString, NSData;


#import "NSPropertyDescription.h"
#import "NSEntityDescription.h"
#import "NSRelationshipDescription.h"

@interface NSRelationshipDescription : NSPropertyDescription {
    *void _reserved5;
    *void _reserved6;
    NSEntityDescription *_destinationEntity;
    NSString *_lazyDestinationEntityName;
    NSRelationshipDescription *_inverseRelationship;
    NSString *_lazyInverseRelationshipName;
    NSUInteger _maxCount;
    NSUInteger _minCount;
    NSUInteger _deleteRule;
}


@property NSUInteger deleteRule;
@property (nonatomic) NSEntityDescription *destinationEntity;
@property (nonatomic) NSRelationshipDescription *inverseRelationship;
@property NSUInteger maxCount;
@property NSUInteger minCount;
@property (getter=isOrdered) BOOL ordered;
@property (readonly, getter=isToMany) BOOL toMany;
@property (readonly, copy) NSData *versionHash;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)_isRelationship;
-(BOOL)_isSchemaEqual:(id)arg0 ;
-(BOOL)_nonPredicateValidateValue:(*id)arg0 forKey:(id)arg1 inObject:(id)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIndexed;
-(NSUInteger)_propertyType;
-(id)_initWithName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_createCachesAndOptimizeState;
-(void)_versionHash:(char *)arg0 inStyle:(NSUInteger)arg1 ;
-(void)_versionHash:(char *)arg0 inStyle:(NSUInteger)arg1 proxyContext:(id)arg2 ;
-(void)_writeIntoData:(id)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(id)arg4 entitiesSlots:(id)arg5 fetchRequests:(id)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif