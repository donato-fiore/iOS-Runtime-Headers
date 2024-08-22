// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLUPDATECOLUMNSINTERMEDIATE_H
#define NSSQLUPDATECOLUMNSINTERMEDIATE_H

@class NSArray;


#import "NSSQLIntermediate.h"

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate {
    NSArray *_propertiesToUpdate;
    NSArray *_valuesToUpdateTo;
}




-(BOOL)isUpdateColumnsScoped;
-(id)generateSQLStringInContext:(id)arg0 ;
-(id)governingAliasForKeypathExpression:(id)arg0 ;
-(id)initWithProperties:(id)arg0 values:(id)arg1 inScope:(id)arg2 ;
-(void)dealloc;


@end


#endif