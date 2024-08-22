// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLHAVINGINTERMEDIATE_H
#define NSSQLHAVINGINTERMEDIATE_H



#import "NSSQLIntermediate.h"
#import "NSSQLWhereIntermediate.h"

@interface NSSQLHavingIntermediate : NSSQLIntermediate {
    NSSQLWhereIntermediate *_whereClause;
}




-(BOOL)isHavingScoped;
-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 inScope:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;


@end


#endif