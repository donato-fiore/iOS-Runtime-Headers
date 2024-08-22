// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLRELATIONSHIP_H
#define NSSQLRELATIONSHIP_H

@class NSString;


#import "NSSQLProperty.h"
#import "NSSQLEntity.h"
#import "NSSQLRelationship.h"

@interface NSSQLRelationship : NSSQLProperty {
    NSString *_name;
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}




-(id)correlationTableName;
-(id)destinationEntity;
-(id)foreignKey;
-(id)initForReadOnlyFetchWithEntity:(id)arg0 propertyDescription:(id)arg1 ;
-(id)initWithEntity:(id)arg0 propertyDescription:(id)arg1 ;
-(id)name;
-(id)sourceEntity;
-(void)_setForeignOrderKey:(id)arg0 ;
-(void)copyValuesForReadOnlyFetch:(id)arg0 ;
-(void)dealloc;


@end


#endif