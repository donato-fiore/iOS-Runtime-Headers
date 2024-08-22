// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLFOREIGNENTITYKEY_H
#define NSSQLFOREIGNENTITYKEY_H

@class NSString, NSNumber;


#import "NSSQLColumn.h"
#import "NSSQLForeignKey.h"

@interface NSSQLForeignEntityKey : NSSQLColumn {
    NSString *_name;
    NSSQLForeignKey *_foreignKey;
    NSNumber *_columnValue;
}




-(id)foreignKey;
-(id)initForReadOnlyFetchingOfEntity:(id)arg0 toOneRelationship:(id)arg1 ;
-(id)initWithEntity:(id)arg0 foreignKey:(id)arg1 ;
-(id)initWithEntity:(id)arg0 propertyDescription:(id)arg1 ;
-(id)name;
-(id)toOneRelationship;
-(void)copyValuesForReadOnlyFetch:(id)arg0 ;
-(void)dealloc;


@end


#endif