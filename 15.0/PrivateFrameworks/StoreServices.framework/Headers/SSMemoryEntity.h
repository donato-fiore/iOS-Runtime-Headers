// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSMEMORYENTITY_H
#define SSMEMORYENTITY_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSMemoryEntity : NSObject <NSCopying>



@property (nonatomic) NSInteger databaseID; // ivar: _databaseID
@property (readonly, copy, nonatomic) NSDictionary *externalPropertyValues; // ivar: _externalPropertyValues
@property (readonly, copy, nonatomic) NSDictionary *propertyValues; // ivar: _propertyValues


+(Class)databaseEntityClass;
+(id)anyInDatabase:(id)arg0 predicate:(id)arg1 ;
+(id)defaultProperties;
+(id)queryWithDatabase:(id)arg0 predicate:(id)arg1 ;
+(id)queryWithDatabase:(id)arg0 predicate:(id)arg1 orderingProperties:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDatabaseEntity:(id)arg0 properties:(id)arg1 ;
-(id)valueForExternalProperty:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)dealloc;
-(void)reloadFromDatabaseEntity:(id)arg0 properties:(id)arg1 ;
-(void)setExternalValuesWithDictionary:(id)arg0 ;
-(void)setValue:(id)arg0 forExternalProperty:(id)arg1 ;
-(void)setValue:(id)arg0 forProperty:(id)arg1 ;
-(void)setValues:(*id)arg0 forExternalProperties:(*id)arg1 count:(NSInteger)arg2 ;
-(void)setValues:(*id)arg0 forProperties:(*id)arg1 count:(NSInteger)arg2 ;
-(void)setValuesWithDictionary:(id)arg0 ;


@end


#endif