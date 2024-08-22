// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLMANYTOMANY_H
#define NSSQLMANYTOMANY_H

@class NSString;


#import "NSSQLRelationship.h"

@interface NSSQLManyToMany : NSSQLRelationship {
    NSString *_correlationTableName;
    NSString *_columnName;
    NSString *_orderColumnName;
}




-(id)columnName;
-(id)correlationTableName;
-(id)initWithEntity:(id)arg0 propertyDescription:(id)arg1 ;
-(void)dealloc;


@end


#endif