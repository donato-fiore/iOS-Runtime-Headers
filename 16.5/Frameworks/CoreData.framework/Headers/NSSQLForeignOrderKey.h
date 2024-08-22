// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLFOREIGNORDERKEY_H
#define NSSQLFOREIGNORDERKEY_H

@class NSString;


#import "NSSQLColumn.h"
#import "NSSQLForeignKey.h"

@interface NSSQLForeignOrderKey : NSSQLColumn {
    NSString *_name;
    NSSQLForeignKey *_foreignKey;
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