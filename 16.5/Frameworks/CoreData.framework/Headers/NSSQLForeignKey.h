// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLFOREIGNKEY_H
#define NSSQLFOREIGNKEY_H

@class NSString;


#import "NSSQLColumn.h"
#import "NSSQLToOne.h"

@interface NSSQLForeignKey : NSSQLColumn {
    NSString *_name;
    NSSQLToOne *_toOne;
}




-(id)initForReadOnlyFetchingOfEntity:(id)arg0 toOneRelationship:(id)arg1 ;
-(id)initWithEntity:(id)arg0 propertyDescription:(id)arg1 ;
-(id)initWithEntity:(id)arg0 toOneRelationship:(id)arg1 ;
-(id)name;
-(id)toOneRelationship;
-(void)copyValuesForReadOnlyFetch:(id)arg0 ;
-(void)dealloc;


@end


#endif