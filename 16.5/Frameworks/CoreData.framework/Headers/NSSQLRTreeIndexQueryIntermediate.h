// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLRTREEINDEXQUERYINTERMEDIATE_H
#define NSSQLRTREEINDEXQUERYINTERMEDIATE_H

@class NSExpression, NSArray;


#import "NSSQLIntermediate.h"
#import "NSSQLEntity.h"

@interface NSSQLRTreeIndexQueryIntermediate : NSSQLIntermediate {
    NSSQLEntity *_entity;
    NSExpression *_indexName;
    NSArray *_properties;
    NSArray *_ranges;
}




-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initForIndexNamed:(id)arg0 onEntity:(id)arg1 properties:(id)arg2 ranges:(id)arg3 inScope:(id)arg4 ;
-(void)dealloc;


@end


#endif