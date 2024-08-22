// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLUPDATEINTERMEDIATE_H
#define NSSQLUPDATEINTERMEDIATE_H



#import "NSSQLStatementIntermediate.h"
#import "NSSQLUpdateColumnsIntermediate.h"

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {
    NSSQLUpdateColumnsIntermediate *_updateColumns;
}




-(BOOL)isUpdateScoped;
-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initWithEntity:(id)arg0 alias:(id)arg1 inScope:(id)arg2 ;
-(void)dealloc;


@end


#endif