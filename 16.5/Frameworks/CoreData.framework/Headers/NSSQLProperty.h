// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLPROPERTY_H
#define NSSQLPROPERTY_H


#import <Foundation/Foundation.h>

#import "NSPropertyDescription.h"
#import "NSSQLEntity.h"

@interface NSSQLProperty : NSObject {
    NSPropertyDescription *_propertyDescription;
    NSSQLEntity *_entity;
    unsigned char _propertyType;
    unsigned char _sqlType;
    unsigned short _fetchIndex;
    unsigned short _slot;
    _sqlColumnFlags _flags;
}


@property (nonatomic, getter=isConstrained) BOOL constrained;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isToMany;
-(id)columnName;
-(id)description;
-(id)entity;
-(id)initWithEntity:(id)arg0 propertyDescription:(id)arg1 ;
-(id)name;
-(id)propertyDescription;
-(unsigned char)propertyType;
-(unsigned char)sqlType;
-(unsigned int)slot;
-(void)copyValuesForReadOnlyFetch:(id)arg0 ;
-(void)dealloc;


@end


#endif