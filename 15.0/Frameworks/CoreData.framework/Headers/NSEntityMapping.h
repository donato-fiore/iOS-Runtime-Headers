// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSENTITYMAPPING_H
#define NSENTITYMAPPING_H

@class NSDictionary, NSString, NSData, NSExpression, NSMutableArray, NSArray;
@protocol NSCopying, NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSEntityMapping : NSObject <NSCopying, NSCoding, NSSecureCoding>

 {
    *void _reserved;
    *void _reserved1;
    NSDictionary *_mappingsByName;
    NSString *_name;
    NSUInteger _mappingType;
    NSString *_sourceEntityName;
    NSData *_sourceEntityVersionHash;
    NSString *_destinationEntityName;
    NSData *_destinationEntityVersionHash;
    NSExpression *_sourceExpression;
    NSDictionary *_userInfo;
    NSString *_entityMigrationPolicyClassName;
    NSMutableArray *_attributeMappings;
    NSMutableArray *_relationshipMappings;
    __entityMappingFlags _entityMappingFlags;
}


@property (retain) NSArray *attributeMappings;
@property (copy) NSString *destinationEntityName;
@property (copy) NSData *destinationEntityVersionHash;
@property (copy) NSString *entityMigrationPolicyClassName;
@property NSUInteger mappingType;
@property (copy) NSString *name;
@property (retain) NSArray *relationshipMappings;
@property (copy) NSString *sourceEntityName;
@property (copy) NSData *sourceEntityVersionHash;
@property (retain) NSExpression *sourceExpression;
@property (retain, nonatomic) NSDictionary *userInfo;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)isEditable;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithSourceEntityDescription:(id)arg0 destinationEntityDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_createCachesAndOptimizeState;
-(void)_setIsEditable:(BOOL)arg0 ;
-(void)_throwIfNotEditable;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif