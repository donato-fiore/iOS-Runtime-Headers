// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLTOONE_H
#define NSSQLTOONE_H



#import "NSSQLRelationship.h"
#import "NSSQLForeignKey.h"
#import "NSSQLForeignEntityKey.h"
#import "NSSQLForeignOrderKey.h"

@interface NSSQLToOne : NSSQLRelationship {
    NSSQLForeignKey *_foreignKey;
    NSSQLForeignEntityKey *_foreignEntityKey;
    NSSQLForeignOrderKey *_foreignOrderKey;
    BOOL _isVirtual;
}




-(id)columnName;
-(id)description;
-(id)foreignKey;
-(id)initForReadOnlyFetchWithEntity:(id)arg0 propertyDescription:(id)arg1 ;
-(id)initWithEntity:(id)arg0 inverseToMany:(id)arg1 ;
-(id)initWithEntity:(id)arg0 propertyDescription:(id)arg1 ;
-(unsigned int)slot;
-(void)_setForeignOrderKey:(id)arg0 ;
-(void)copyValuesForReadOnlyFetch:(id)arg0 ;
-(void)dealloc;


@end


#endif